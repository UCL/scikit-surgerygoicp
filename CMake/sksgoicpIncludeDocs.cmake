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
if(BUILD_Docs)
  configure_file(${CMAKE_SOURCE_DIR}/Utilities/Doxygen/sksurgerygoicpdoxygen.pl.in ${CMAKE_BINARY_DIR}/sksurgerygoicpdoxygen.pl)

  # See comment in sksgoicpAddDocs.cmake.
  set(SKSURGERYGOICP_TAGFILES "")
  foreach( f ${SKSURGERYGOICP_EXTERNAL_DOXYGEN_TAGFILES})
    # Converts list to space separated sting, for substitution into doxygen.config.
    set(SKSURGERYGOICP_TAGFILES "${f} ${SKSURGERYGOICP_TAGFILES}")
  endforeach()

  configure_file(${CMAKE_SOURCE_DIR}/Utilities/Doxygen/doxygen.config.in ${CMAKE_BINARY_DIR}/doxygen.config)
  add_custom_target(docs ALL
    ${DOXYGEN_EXECUTABLE} ${CMAKE_BINARY_DIR}/doxygen.config
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Generating API documentation with Doxygen" VERBATIM
  )
endif()
