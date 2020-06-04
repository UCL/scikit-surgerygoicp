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

if(NOT BUILDING_GUIS)

  if (NOT SKSURGERYGOICP_PYTHON_MODULE_NAME OR SKSURGERYGOICP_PYTHON_MODULE_NAME STREQUAL "")
    set(SKSURGERYGOICP_PYTHON_MODULE_NAME "sksurgerygoicppython" CACHE STRING "Basename for python module." FORCE)
  endif()

  set(SKSURGERYGOICP_PYTHON_SRCS
    sksgoicpLibPython.cpp
  )
  add_subdirectory(pybind11)
  link_libraries(${ALL_LIBRARIES})
  pybind11_add_module(${SKSURGERYGOICP_PYTHON_MODULE_NAME} ${SKSURGERYGOICP_PYTHON_SRCS})
  if(APPLE)
    set_target_properties(${SKSURGERYGOICP_PYTHON_MODULE_NAME} PROPERTIES LINK_FLAGS "-undefined dynamic_lookup")
  endif()
  install(TARGETS ${SKSURGERYGOICP_PYTHON_MODULE_NAME} DESTINATION ${SKSURGERYGOICP_INSTALL_LIB_DIR})

endif()
