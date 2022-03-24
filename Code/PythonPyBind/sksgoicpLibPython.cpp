/*=============================================================================

  SKSURGERYGOICP: Python wrapping of GO ICP

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "jly_goicp.hpp"

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

    py::class_<ROTNODE>(m, "ROTNODE")
        .def(py::init())
        .def_readwrite("a", &ROTNODE::a)
        .def_readwrite("b", &ROTNODE::b)
        .def_readwrite("c", &ROTNODE::c)
        .def_readwrite("w", &ROTNODE::w)
        .def_readwrite("ub", &ROTNODE::ub)
        .def_readwrite("lb", &ROTNODE::lb)
        .def_readwrite("l", &ROTNODE::l)
        ;
    
    py::class_<TRANSNODE>(m, "TRANSNODE")
        .def(py::init())
        .def_readwrite("x", &TRANSNODE::x)
        .def_readwrite("y", &TRANSNODE::y)
        .def_readwrite("z", &TRANSNODE::z)
        .def_readwrite("w", &TRANSNODE::w)
        .def_readwrite("ub", &TRANSNODE::ub)
        .def_readwrite("lb", &TRANSNODE::lb)
        ;

    py::class_<GoICP>(m, "GoICP")
        .def(py::init())
        .def("BuildDT", &GoICP::BuildDT)
        .def("Register", &GoICP::Register)
        .def("loadModelAndData", &GoICP::loadModelAndData)
        .def("optimalTranslation", &GoICP::optimalTranslation)
        .def("optimalRotation", &GoICP::optimalRotation)
        .def("setDTSizeAndFactor", &GoICP::setDTSizeAndFactor)
        .def("setInitNodeRot", &GoICP::setInitNodeRot)
        .def("setInitNodeTrans", &GoICP::setInitNodeTrans)
        .def_readwrite("Nm", &GoICP::Nm)
        .def_readwrite("MSEThresh", &GoICP::MSEThresh)
        .def_readwrite("SSEThresh", &GoICP::SSEThresh)
        .def_readwrite("icpThresh", &GoICP::icpThresh)
        .def_readwrite("optError", &GoICP::optError)
        .def_readwrite("trimFraction", &GoICP::trimFraction)
        .def_readwrite("inLinerNum", &GoICP::inlierNum)
        .def_readwrite("doTrim", &GoICP::doTrim)
        .def_readwrite("pModel", &GoICP::pModel)
        .def_readwrite("pData", &GoICP::pData)
        ;

}
