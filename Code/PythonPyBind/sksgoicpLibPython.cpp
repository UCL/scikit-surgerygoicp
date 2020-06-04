/*=============================================================================

  SKSURGERYGOICP: Python wrapping of GO ICP

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#include <pybind11/pybind11.h>
#include "sksgoicpMyFunctions.h"

// The name of the module should match that in CMakeLists.txt
PYBIND11_MODULE(sksurgerygoicp, m) {
    m.doc() = "pybind11 example wrapping sksgoicp::MyFirstAddFunction";
    m.def("my_first_add_function", &sksgoicp::MyFirstAddFunction, "A function which adds two numbers");
}
