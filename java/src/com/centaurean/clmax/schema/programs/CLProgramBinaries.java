package com.centaurean.clmax.schema.programs;

import java.io.IOException;
import java.io.OutputStream;

/*
 * Copyright (c) 2013, Centaurean
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Centaurean nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL Centaurean BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * CLmax
 *
 * 28/03/13 22:03
 * @author gpnuma
 */
public class CLProgramBinaries {
    private Object[] array;

    public CLProgramBinaries(Object array) {
        this.array = (Object[]) array;
    }

    public int size() {
        return array.length;
    }

    public byte[] getBinary(int index) {
        if (index < 0 || index > array.length)
            throw new IndexOutOfBoundsException();
        return (byte[]) array[index];
    }

    public void toStream(int index, OutputStream out) throws IOException {
        byte[] bytes = getBinary(index);
        for (int i = 0; i < bytes.length; i++)
            out.write(bytes[i]);
    }

    public String toString() {
        StringBuilder stringBuilder = new StringBuilder("[");
        for (int i = 0; i < array.length; i++) {
            stringBuilder.append(bytesToHex(getBinary(i)));
            if (i < array.length - 1)
                stringBuilder.append(", ");
        }
        return stringBuilder.append("]").toString();
    }

    private static String bytesToHex(byte[] bytes) {
        final char[] hexArray = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
        char[] hexChars = new char[bytes.length * 3 - 1];
        int byteValue;
        for (int i = 0; i < bytes.length; i++) {
            byteValue = bytes[i] & 0xFF;
            hexChars[i * 3] = hexArray[byteValue >>> 4];
            hexChars[i * 3 + 1] = hexArray[byteValue & 0x0F];
            if (i < bytes.length - 1)
                hexChars[i * 3 + 2] = ' ';
        }
        return new String(hexChars);
    }
}
