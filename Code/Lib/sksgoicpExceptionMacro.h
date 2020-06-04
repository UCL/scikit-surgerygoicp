/*=============================================================================

  SKSURGERYGOICP: Python wrapping of GO ICP

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef sksgoicpExceptionMacro_h
#define sksgoicpExceptionMacro_h

#include "sksgoicpException.h"

#define sksgoicpExceptionThrow() throw sksgoicp::Exception(__FILE__,__LINE__)

#endif
