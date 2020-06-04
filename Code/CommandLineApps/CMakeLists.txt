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

set(_command_line_apps
  sksgoicpMyFirstApp
)

foreach(_app ${_command_line_apps})
  add_executable(${_app} ${_app}.cpp)
  target_link_libraries(${_app} ${SKSURGERYGOICP_LIBRARIES} ${ALL_THIRD_PARTY_LIBRARIES})
  SKSURGERYGOICP_INSTALL_CL(TARGETS ${_app})
endforeach()
