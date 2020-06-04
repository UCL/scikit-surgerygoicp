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

macro(SKSURGERYGOICP_INSTALL_CL)

  set(ARGS ${ARGN})
  list(FIND ARGS DESTINATION _destination_index)
  if(_destination_index GREATER -1)
    message(SEND_ERROR "SKSURGERYGOICP_INSTALL_CL macro must not be called with a DESTINATION parameter.")
  else()

    set(_app_installed FALSE)
    get_property(_apps GLOBAL PROPERTY SKSURGERYGOICP_GUI_APPS)
    if(APPLE)
      foreach(app ${_apps})
        install(${ARGS} DESTINATION ${app}.app/Contents/MacOS/)
        set(_app_installed TRUE)
      endforeach()
    endif()
    if(NOT _app_installed)
      install(${ARGS} DESTINATION ${SKSURGERYGOICP_INSTALL_BIN_DIR})
    endif()

  endif()
endmacro()
