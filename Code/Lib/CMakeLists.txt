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

set(SKSURGERYGOICP_LIBRARY_NAME sksurgerygoicp)

set(SKSURGERYGOICP_LIBRARY_SRCS
	jly_goicp.hpp
	jly_3ddt.hpp
	matrix.hpp
  jly_icp3d.hpp
  jly_sorting.hpp
  nanoflann.hpp
  sksgoicpBasicTypes.cpp
  sksgoicpMyFunctions.cpp
  sksgoicpException.cpp
)

set(SKSURGERYGOICP_LIBRARY_HDRS
  sksgoicpExceptionMacro.h
)

add_library(${SKSURGERYGOICP_LIBRARY_NAME} ${SKSURGERYGOICP_LIBRARY_HDRS} ${SKSURGERYGOICP_LIBRARY_SRCS})

if(BUILD_SHARED_LIBS)
  if(WIN32)
    add_definitions(-DSKSURGERYGOICP_WINDOWS_EXPORT)
  endif(WIN32)
endif(BUILD_SHARED_LIBS)

target_link_libraries(${SKSURGERYGOICP_LIBRARY_NAME} PRIVATE ${ALL_THIRD_PARTY_LIBRARIES})

SKSURGERYGOICP_INSTALL_HEADERS()
SKSURGERYGOICP_INSTALL_LIBRARY(${SKSURGERYGOICP_LIBRARY_NAME})

