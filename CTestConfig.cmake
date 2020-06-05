#/*============================================================================
#
#  SKSURGERYGOICP: Python wrapping of GO ICP
#
#  Copyright (c) University College London (UCL). All rights reserved.
#
#  This software is distributed WITHOUT ANY WARRANTY; without even
#  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
#  PURPOSE.
#
#  See LICENSE.txt in the top level directory for details.
#
#============================================================================*/

set(CTEST_PROJECT_NAME "SKSURGERYGOICP")
set(CTEST_NIGHTLY_START_TIME "20:00:00 GMT")
set(CTEST_TEST_TIMEOUT "3600")

if(NOT DEFINED CTEST_DROP_METHOD)
  set(CTEST_DROP_METHOD "http")
endif(NOT DEFINED CTEST_DROP_METHOD)


