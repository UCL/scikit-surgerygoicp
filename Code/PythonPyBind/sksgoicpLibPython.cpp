/*=============================================================================

  SKSURGERYGOICP: Python wrapping of GO ICP

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#include <pybind11/pybind11.h>
#include "jly_goicp.h"

namespace py = pybind11;

// The name of the module should match that in CMakeLists.txt
PYBIND11_MODULE(sksurgerygoicppython, m) {
    m.doc() = "Wrapper for GoICP Algorithm";

        py::class_<POINT3D>(m, "POINT3D")
        .def(py::init<float, float, float>())
        .def_readwrite("x", &POINT3D::x)
        .def_readwrite("y", &POINT3D::y)
        .def_readwrite("z", &POINT3D::z)
        .def("__repr__",
            [](const POINT3D &p) {
             return "<POINT3D at " + std::to_string(p.x) + " " + std::to_string(p.y) + " " + std::to_string(p.z) + ">";
            }
            )
        ;
}
