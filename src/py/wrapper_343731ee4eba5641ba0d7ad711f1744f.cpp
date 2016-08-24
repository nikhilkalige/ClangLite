#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_343731ee4eba5641ba0d7ad711f1744f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_e9804f41845251e78d691abb861eba42)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_e2f4634fc4de53ca90c6d5e0b45dd5b5)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_66480cd1facc5bf4a163c6290ef66810)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_07d4dd2830925747bcadfe3151c5ef41)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_d68f4565da6951b7b020d3d5e2f17aaa)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_8edc8aba3cd85d19a475caeef2a2ff4e)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_e9804f41845251e78d691abb861eba42, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_e2f4634fc4de53ca90c6d5e0b45dd5b5, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_66480cd1facc5bf4a163c6290ef66810, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_07d4dd2830925747bcadfe3151c5ef41, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_d68f4565da6951b7b020d3d5e2f17aaa, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_8edc8aba3cd85d19a475caeef2a2ff4e, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}