#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_47d43e4eda7252d2bec0204a93977671()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_518d06076f765b51af5d966e3594b6dc)(class ::clang::Type  const *) = ::clang::DependentSizedArrayType::classof;
    class ::clang::QualType  (::clang::DependentSizedArrayType::*method_pointer_e18e345cb31459ca9adac3b0615716ee)() const = &::clang::DependentSizedArrayType::desugar;
    class ::clang::SourceLocation  (::clang::DependentSizedArrayType::*method_pointer_2a284410403052848b99f3e9c12986c8)() const = &::clang::DependentSizedArrayType::getLBracketLoc;
    class ::clang::SourceLocation  (::clang::DependentSizedArrayType::*method_pointer_cac66d02600e505b81e41e4e6c232015)() const = &::clang::DependentSizedArrayType::getRBracketLoc;
    bool  (::clang::DependentSizedArrayType::*method_pointer_0d61ac34b902564ebb86d2db3999e76f)() const = &::clang::DependentSizedArrayType::isSugared;
    boost::python::class_< class ::clang::DependentSizedArrayType, autowig::HeldType< class ::clang::DependentSizedArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_47d43e4eda7252d2bec0204a93977671("DependentSizedArrayType", "", boost::python::no_init);
    class_47d43e4eda7252d2bec0204a93977671.def("classof", method_pointer_518d06076f765b51af5d966e3594b6dc, "");
    class_47d43e4eda7252d2bec0204a93977671.def("desugar", method_pointer_e18e345cb31459ca9adac3b0615716ee, "");
    class_47d43e4eda7252d2bec0204a93977671.def("get_l_bracket_loc", method_pointer_2a284410403052848b99f3e9c12986c8, "");
    class_47d43e4eda7252d2bec0204a93977671.def("get_r_bracket_loc", method_pointer_cac66d02600e505b81e41e4e6c232015, "");
    class_47d43e4eda7252d2bec0204a93977671.def("is_sugared", method_pointer_0d61ac34b902564ebb86d2db3999e76f, "");
    class_47d43e4eda7252d2bec0204a93977671.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentSizedArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentSizedArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}