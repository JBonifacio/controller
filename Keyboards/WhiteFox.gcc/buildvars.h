/* Copyright (C) 2013-2016 by Jacob Alexander
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

// ----- Includes -----



// ----- Defines -----

// You can change these to give your code its own name.
#define STR_MANUFACTURER        L"Input Club"
#define STR_PRODUCT             L"Keyboard - WhiteFox PartialMap pjrcUSB full"
#define STR_SERIAL              L"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX - mk20dx256vlh7"


// Strings used in the CLI module
#define CLI_Revision            "e4b2841d800efc91c890531ff771ca4136c83da7"
#define CLI_Branch              "master"
#define CLI_ModifiedStatus      "Dirty"
#define CLI_ModifiedFiles       "\r\n\tKeyboards/WhiteFox.gcc/Makefile\r\n\tKeyboards/WhiteFox.gcc/buildvars.h\r\n\tKeyboards/WhiteFox.gcc/generatedKeymap.h\r\n\tKeyboards/WhiteFox.gcc/kll_defs.h\r\n\tKeyboards/whitefox.bash\r\n\tScan/Infinity_60%_LED/scancode_map.kll\r\n\tScan/WhiteFox/scan_loop.c\r\n\tScan/WhiteFox/scancode_map.kll\r\n\tkll"
#define CLI_RepoOrigin          "git@github.com:JBonifacio/controller.git"
#define CLI_CommitDate          "2017-04-11 08:37:41 -0700"
#define CLI_CommitAuthor        "Joseph Bonifacio <joseph@jbonifacio.net>"
#define CLI_Modules             "Scan(WhiteFox) Macro(PartialMap) Output(pjrcUSB) Debug(full)"
#define CLI_BuildDate           "2017-05-31 22:43:58 -0700"
#define CLI_BuildOS             "Generic"
#define CLI_Arch                "arm"
#define CLI_Chip                "mk20dx256vlh7"
#define CLI_CPU                 "cortex-m4"
#define CLI_Device              "Keyboard"


// Mac OS-X and Linux automatically load the correct drivers.  On
// Windows, even though the driver is supplied by Microsoft, an
// INF file is needed to load the driver.  These numbers need to
// match the INF file.
#define VENDOR_ID               0x1C11
#define PRODUCT_ID              0xB04D
#define BCD_VERSION             525

