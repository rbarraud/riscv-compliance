// RISC-V Compliance IO Test Header File

/*
 * Copyright (c) 2005-2018 Imperas Software Ltd., www.imperas.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied.
 *
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef _COMPLIANCE_IO_H
#define _COMPLIANCE_IO_H

//-----------------------------------------------------------------------
// RV IO Macros (Non functional)
//-----------------------------------------------------------------------

#define RVTEST_IO_INIT
#define RVTEST_IO_WRITE_STR(_STR)
#define RVTEST_IO_CHECK()
#define LOCAL_IO_PUTC(_R)
#define RVTEST_IO_ASSERT_EQ(_R, _I) 
#define RVTEST_FP_ASSERT_EQ(_F, _C, correctval)
#define RVTEST_FP2_ASSERT_EQ(_F, _C, correctval)
#define RVTEST_FPD_ASSERT_EQ(_F, _C, correctval)

#endif // _COMPLIANCE_IO_H