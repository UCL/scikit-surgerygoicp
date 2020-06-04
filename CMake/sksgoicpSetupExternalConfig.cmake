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

configure_file(${CMAKE_SOURCE_DIR}/Usesksurgerygoicp.cmake.in ${CMAKE_BINARY_DIR}/Usesksurgerygoicp.cmake @ONLY IMMEDIATE)
configure_file(${CMAKE_SOURCE_DIR}/sksurgerygoicpConfig.cmake.in ${CMAKE_BINARY_DIR}/sksurgerygoicpConfig.cmake @ONLY IMMEDIATE)
if(NOT BUILDING_GUIS)
  install(FILES ${CMAKE_BINARY_DIR}/Usesksurgerygoicp.cmake DESTINATION . COMPONENT CONFIG)
  install(FILES ${CMAKE_BINARY_DIR}/sksurgerygoicpConfig.cmake DESTINATION . COMPONENT CONFIG)
endif()
