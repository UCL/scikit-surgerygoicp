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

option(BUILD_Boost "Build Boost." OFF)

if(BUILD_Boost)

  if (WIN32) # Seems ok on Linux/Mac, I don't want to be too restrictive.
    set(SKSURGERYGOICP_CMAKE_MINIMUM_REQUIRED_VERSION 3.12) # Assuming Boost 1.67
    cmake_minimum_required(VERSION ${SKSURGERYGOICP_CMAKE_MINIMUM_REQUIRED_VERSION})
  endif()
  
  list(APPEND SKSURGERYGOICP_BOOST_LIBS "filesystem")
  list(APPEND SKSURGERYGOICP_BOOST_LIBS "system")
  list(APPEND SKSURGERYGOICP_BOOST_LIBS "date_time")
  list(APPEND SKSURGERYGOICP_BOOST_LIBS "regex")
  list(APPEND SKSURGERYGOICP_BOOST_LIBS "thread")
  list(APPEND SKSURGERYGOICP_BOOST_LIBS "iostreams")
  list(APPEND SKSURGERYGOICP_BOOST_LIBS "program_options")
endif()
