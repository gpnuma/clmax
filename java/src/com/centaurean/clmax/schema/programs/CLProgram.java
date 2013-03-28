package com.centaurean.clmax.schema.programs;

import com.centaurean.clmax.cache.CLQueryCache;
import com.centaurean.clmax.schema.CL;
import com.centaurean.clmax.schema.CLObject;
import com.centaurean.clmax.schema.devices.CLDevices;
import com.centaurean.clmax.schema.exceptions.CLException;
import com.centaurean.clmax.schema.exceptions.CLNativeException;
import com.centaurean.clmax.schema.platforms.CLPlatform;
import com.centaurean.clmax.schema.values.CLValue;
import com.centaurean.clmax.schema.versions.exceptions.CLVersionException;
import com.centaurean.commons.logs.Log;

/*
 * Copyright (c) 2013, Centaurean software
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Centaurean software nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL Centaurean software BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * jetFlow
 *
 * 28/03/13 11:16
 * @author gpnuma
 */
public class CLProgram extends CLObject {
    private CLPlatform platform;

    public CLProgram(long pointer, CLPlatform platform) {
        super(pointer);
        this.platform = platform;
    }

    private CLValue get(CLProgramInfo programInfo) {
        if (platform.getVersion().compareTo(programInfo.getMinimumCLVersion()) < 0)
            throw new CLVersionException(programInfo.name() + " (" + programInfo.getMinimumCLVersion().majorMinor() + " function) not supported by this " + platform.getVersion().majorMinor() + " platform.");
        CLValue valueInCache = CLQueryCache.get(getPointer(), programInfo);
        if (valueInCache == null) {
            switch (programInfo) {
                case CL_PROGRAM_BINARIES:
                    valueInCache = new CLValue(CL.getProgramInfoBinariesNative(getPointer(), get(CLProgramInfo.CL_PROGRAM_BINARY_SIZES).getLongArray()));
                    break;
                default:
                    switch (programInfo.getReturnType()) {
                        case BOOLEAN:
                        case INT:
                            valueInCache = new CLValue(CL.getProgramInfoIntNative(getPointer(), programInfo.getKey()));
                            break;
                        case LONG:
                        case SIZE_T:
                        case BIT_FIELD:
                            valueInCache = new CLValue(CL.getProgramInfoLongNative(getPointer(), programInfo.getKey()));
                            break;
                        case CHAR_ARRAY:
                            valueInCache = new CLValue(CL.getProgramInfoStringNative(getPointer(), programInfo.getKey()));
                            break;
                        case LONG_ARRAY:
                        case SIZE_T_ARRAY:
                            valueInCache = new CLValue(CL.getProgramInfoLongArrayNative(getPointer(), programInfo.getKey()));
                            break;
                    }
                    break;
            }
            CLQueryCache.add(getPointer(), programInfo, valueInCache);
        }
        return valueInCache;
    }

    public void build(CLDevices devices, String options) {
        CL.buildProgramNative(getPointer(), devices.getPointers(), options);
    }

    public void build(CLDevices devices) {
        CL.buildProgramNative(getPointer(), devices.getPointers(), "");
    }

    public void release() {
        CL.releaseProgramNative(getPointer());
    }

    @Override
    public String toString() {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.append("{").append(super.toString());
        for (CLProgramInfo programInfo : CLProgramInfo.values()) {
            if (platform.getVersion().compareTo(programInfo.getMinimumCLVersion()) > 0)
                try {
                    stringBuilder.append(", ").append(programInfo.name()).append("='").append(get(programInfo));
                } catch (CLNativeException exception) {
                    Log.message(new CLException("[Program " + super.toString() + "] Querying program info " + programInfo.name() + " returned error " + exception.getMessage()));
                } finally {
                    stringBuilder.append("'");
                }
        }
        return stringBuilder.append("}").toString();
    }
}
