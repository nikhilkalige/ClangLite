#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_aa0102629ad95421ae8dc7b78f7a31e4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_c2c0162cb9fb57ebb05b90723104ef00)(class ::clang::Type  const *) = ::clang::TemplateTypeParmType::classof;
    class ::clang::QualType  (::clang::TemplateTypeParmType::*method_pointer_64e0df542a675aeca74c08b0978ac8d6)() const = &::clang::TemplateTypeParmType::desugar;
    class ::clang::TemplateTypeParmDecl  * (::clang::TemplateTypeParmType::*method_pointer_95f84568195d5bf48f7657a3e75d1a61)() const = &::clang::TemplateTypeParmType::getDecl;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_256418113d44514bb22f8f2dd21f39d3)() const = &::clang::TemplateTypeParmType::getDepth;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_cdc859e49c8d5b01b5cc242027f3c021)() const = &::clang::TemplateTypeParmType::getIndex;
    bool  (::clang::TemplateTypeParmType::*method_pointer_e3acdba2da575f7f96337767782cd1ca)() const = &::clang::TemplateTypeParmType::isParameterPack;
    bool  (::clang::TemplateTypeParmType::*method_pointer_f354a9d6233b5e5b894818b9f1e016d9)() const = &::clang::TemplateTypeParmType::isSugared;
    boost::python::class_< class ::clang::TemplateTypeParmType, autowig::HeldType< class ::clang::TemplateTypeParmType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_aa0102629ad95421ae8dc7b78f7a31e4("TemplateTypeParmType", "", boost::python::no_init);
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("classof", method_pointer_c2c0162cb9fb57ebb05b90723104ef00, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("desugar", method_pointer_64e0df542a675aeca74c08b0978ac8d6, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_decl", method_pointer_95f84568195d5bf48f7657a3e75d1a61, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_depth", method_pointer_256418113d44514bb22f8f2dd21f39d3, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_index", method_pointer_cdc859e49c8d5b01b5cc242027f3c021, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_parameter_pack", method_pointer_e3acdba2da575f7f96337767782cd1ca, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_sugared", method_pointer_f354a9d6233b5e5b894818b9f1e016d9, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmType >, autowig::HeldType< class ::clang::Type > >();
    }

}