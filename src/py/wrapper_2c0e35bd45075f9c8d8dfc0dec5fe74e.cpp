#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_2c0e35bd45075f9c8d8dfc0dec5fe74e()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ExternCContextDecl  * (*method_pointer_c72d413090ad5929a8e16dc46b8723c6)(class ::clang::DeclContext  const *) = ::clang::ExternCContextDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_80455d5f94ee50cf96b18f638b7469ba)(class ::clang::ExternCContextDecl  const *) = ::clang::ExternCContextDecl::castToDeclContext;
    bool  (*method_pointer_88efa7c7bf525e598a27920f1029ad7f)(class ::clang::Decl  const *) = ::clang::ExternCContextDecl::classof;
    bool  (*method_pointer_0d45ee50a5b15fe899501efb68833ab4)(enum ::clang::Decl::Kind ) = ::clang::ExternCContextDecl::classofKind;
    boost::python::class_< class ::clang::ExternCContextDecl, autowig::HeldType< class ::clang::ExternCContextDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_2c0e35bd45075f9c8d8dfc0dec5fe74e("ExternCContextDecl", "", boost::python::no_init);
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("cast_from_decl_context", method_pointer_c72d413090ad5929a8e16dc46b8723c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("cast_to_decl_context", method_pointer_80455d5f94ee50cf96b18f638b7469ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("classof", method_pointer_88efa7c7bf525e598a27920f1029ad7f, "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("classof_kind", method_pointer_0d45ee50a5b15fe899501efb68833ab4, "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("classof_kind");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("classof");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("cast_from_decl_context");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::ExternCContextDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ExternCContextDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ExternCContextDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}