#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e4cef5772c4f56478cdedd9f0b21301a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_72249c8e054151108055754e664b8bf9)(class ::clang::Type  const *) = ::clang::ElaboratedType::classof;
    class ::clang::QualType  (::clang::ElaboratedType::*method_pointer_7f72f84f2dee55459d42d8b592fa2da7)() const = &::clang::ElaboratedType::desugar;
    class ::clang::QualType  (::clang::ElaboratedType::*method_pointer_ee1f85c759c7580c8073b319b67a105d)() const = &::clang::ElaboratedType::getNamedType;
    bool  (::clang::ElaboratedType::*method_pointer_9873eb862dc3536c87636ccee9a423c2)() const = &::clang::ElaboratedType::isSugared;
    boost::python::class_< class ::clang::ElaboratedType, autowig::HeldType< class ::clang::ElaboratedType >, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_e4cef5772c4f56478cdedd9f0b21301a("ElaboratedType", "", boost::python::no_init);
    class_e4cef5772c4f56478cdedd9f0b21301a.def("classof", method_pointer_72249c8e054151108055754e664b8bf9, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("desugar", method_pointer_7f72f84f2dee55459d42d8b592fa2da7, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("get_named_type", method_pointer_ee1f85c759c7580c8073b319b67a105d, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("is_sugared", method_pointer_9873eb862dc3536c87636ccee9a423c2, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ElaboratedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ElaboratedType >, autowig::HeldType< class ::clang::TypeWithKeyword > >();
    }

}