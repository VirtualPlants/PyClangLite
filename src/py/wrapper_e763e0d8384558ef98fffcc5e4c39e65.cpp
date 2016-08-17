#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_e763e0d8384558ef98fffcc5e4c39e65()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_7ac76a38c9cc59c48578d8ffa3dab7bd)(class ::clang::Decl  const *) = ::clang::ImportDecl::classof;
    bool  (*method_pointer_4648a72ab46c53abb4abd6ef56f9b304)(enum ::clang::Decl::Kind ) = ::clang::ImportDecl::classofKind;
    class ::clang::ImportDecl  * (*method_pointer_83222dbd97305983ace8ab3cab3ada53)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::ImportDecl::CreateDeserialized;
    boost::python::class_< class ::clang::ImportDecl, autowig::HeldType< class ::clang::ImportDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_e763e0d8384558ef98fffcc5e4c39e65("ImportDecl", "", boost::python::no_init);
    class_e763e0d8384558ef98fffcc5e4c39e65.def("classof", method_pointer_7ac76a38c9cc59c48578d8ffa3dab7bd, "");
    class_e763e0d8384558ef98fffcc5e4c39e65.def("classof_kind", method_pointer_4648a72ab46c53abb4abd6ef56f9b304, "");
    class_e763e0d8384558ef98fffcc5e4c39e65.def("create_deserialized", method_pointer_83222dbd97305983ace8ab3cab3ada53, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e763e0d8384558ef98fffcc5e4c39e65.staticmethod("classof_kind");
    class_e763e0d8384558ef98fffcc5e4c39e65.staticmethod("create_deserialized");
    class_e763e0d8384558ef98fffcc5e4c39e65.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ImportDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ImportDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}