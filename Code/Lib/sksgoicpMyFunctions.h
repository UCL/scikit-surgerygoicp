/*=============================================================================

  SKSURGERYGOICP: Python wrapping of GO ICP

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef sksgoicpMyFunctions_h
#define sksgoicpMyFunctions_h

#include "sksgoicpWin32ExportHeader.h"

/**
* \file sksgoicpMyFunctions.h
* \brief Various Utilities.
* \ingroup utilities
*/
namespace sksgoicp
{

/**
* \brief My first function, adds two integers.
*/
SKSURGERYGOICP_WINEXPORT int MyFirstAddFunction(int a, int b);
SKSURGERYGOICP_WINEXPORT int MyFirstMultiplicationFunction(int a, int b);

} // namespace sksgoicp

#endif
