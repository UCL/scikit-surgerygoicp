/*=============================================================================

  SKSURGERYGOICP: Python wrapping of GO ICP

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#include "sksgoicpMyFunctions.h"
#include <iostream>

namespace sksgoicp
{

//-----------------------------------------------------------------------------
int MyFirstAddFunction(int a, int b)
{
  return a + b;
}

int MyFirstMultiplicationFunction(int a, int b)
{
  return a * b;
}

} // namespace sksgoicp
