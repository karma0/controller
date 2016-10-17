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
#define STR_MANUFACTURER        L"Kiibohd"
#define STR_PRODUCT             L"Keyboard - MDErgo1-RoboWorker PartialMap pjrcUSB full"
#define STR_SERIAL              L"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX - mk20dx256vlh7"


// Strings used in the CLI module
#define CLI_Revision            "1800774157cdb9ea1986e90f24d99deab554b39b"
#define CLI_Branch              "master"
#define CLI_ModifiedStatus      "Dirty"
#define CLI_ModifiedFiles       "\r\n\tKeyboards/ICED-L/MDErgo1-Blank-0.kll\r\n\tKeyboards/ICED-L/MDErgo1-Blank-1.kll\r\n\tKeyboards/ICED-L/MDErgo1-Blank-2.kll\r\n\tKeyboards/ICED-L/MDErgo1-Blank-4.kll\r\n\tKeyboards/ICED-L/MDErgo1-Blank-5.kll\r\n\tKeyboards/ICED-L/MDErgo1-Blank-6.kll\r\n\tKeyboards/ICED-L/MDErgo1-Blank-7.kll\r\n\tKeyboards/ICED-L/buildvars.h\r\n\tKeyboards/ICED-L/generatedKeymap.h\r\n\tKeyboards/ICED-L/kll_defs.h\r\n\tKeyboards/ICED-R/MDErgo1-Blank-0.kll\r\n\tKeyboards/ICED-R/MDErgo1-Blank-1.kll\r\n\tKeyboards/ICED-R/MDErgo1-Blank-2.kll\r\n\tKeyboards/ICED-R/MDErgo1-Blank-4.kll\r\n\tKeyboards/ICED-R/MDErgo1-Blank-5.kll\r\n\tKeyboards/ICED-R/MDErgo1-Blank-6.kll\r\n\tKeyboards/ICED-R/MDErgo1-Blank-7.kll\r\n\tKeyboards/ICED-R/buildvars.h\r\n\tKeyboards/ICED-R/generatedKeymap.h\r\n\tKeyboards/ICED-R/kll_defs.h\r\n\tKeyboards/ergodox-roboworker.bash"
#define CLI_RepoOrigin          "https://github.com/karma0/RobotWorker.git"
#define CLI_CommitDate          "2016-10-13 21:04:12 -0600"
#define CLI_CommitAuthor        "Bobby <karma0@gmail.com>"
#define CLI_Modules             "Scan(MDErgo1-RoboWorker) Macro(PartialMap) Output(pjrcUSB) Debug(full)"
#define CLI_BuildDate           "2016-10-17 17:11:04 -0600"
#define CLI_BuildOS             "Linux-4.7.4-1-ARCH"
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
#define BCD_VERSION             487

