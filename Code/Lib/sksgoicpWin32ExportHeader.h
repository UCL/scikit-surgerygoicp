/*=============================================================================

  SKSURGERYGOICP: Python wrapping of GO ICP

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef sksgoicpWin32ExportHeader_h
#define sksgoicpWin32ExportHeader_h

/**
* \file sksgoicpWin32ExportHeader.h
* \brief Header to sort Windows dllexport/dllimport.
*/

#if (defined(_WIN32) || defined(WIN32)) && !defined(SKSURGERYGOICP_STATIC)
  #ifdef SKSURGERYGOICP_WINDOWS_EXPORT
    #define SKSURGERYGOICP_WINEXPORT __declspec(dllexport)
  #else
    #define SKSURGERYGOICP_WINEXPORT __declspec(dllimport)
  #endif  /* SKSURGERYGOICP_WINEXPORT */
#else
/* linux/mac needs nothing */
  #define SKSURGERYGOICP_WINEXPORT
#endif

#endif
