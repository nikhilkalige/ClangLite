#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_6ad42784eaff547697796c119fd8c30f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_a4e51a5fcb65503ab87cb8723b070d78)(class ::clang::Decl  const *) = ::clang::TemplateDecl::classof;
    bool  (*method_pointer_ab097feb5f3756efa04b38236c38f32c)(enum ::clang::Decl::Kind ) = ::clang::TemplateDecl::classofKind;
    class ::clang::NamedDecl  * (::clang::TemplateDecl::*method_pointer_44df0658a21754d2bca6eb6e463f53f6)() const = &::clang::TemplateDecl::getTemplatedDecl;
    boost::python::class_< class ::clang::TemplateDecl, autowig::HeldType< class ::clang::TemplateDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_6ad42784eaff547697796c119fd8c30f("TemplateDecl", "", boost::python::no_init);
    class_6ad42784eaff547697796c119fd8c30f.def("classof", method_pointer_a4e51a5fcb65503ab87cb8723b070d78, "");
    class_6ad42784eaff547697796c119fd8c30f.def("classof_kind", method_pointer_ab097feb5f3756efa04b38236c38f32c, "");
    class_6ad42784eaff547697796c119fd8c30f.def("get_templated_decl", method_pointer_44df0658a21754d2bca6eb6e463f53f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6ad42784eaff547697796c119fd8c30f.staticmethod("classof_kind");
    class_6ad42784eaff547697796c119fd8c30f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}