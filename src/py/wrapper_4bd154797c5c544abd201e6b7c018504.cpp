#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

void wrapper_4bd154797c5c544abd201e6b7c018504()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_a6aedb4654a55a40aeecf4b1dc5fcc98 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._decl");
    boost::python::object module_a6aedb4654a55a40aeecf4b1dc5fcc98(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a6aedb4654a55a40aeecf4b1dc5fcc98.c_str()))));
    boost::python::scope().attr("_decl") = module_a6aedb4654a55a40aeecf4b1dc5fcc98;
    boost::python::scope scope_a6aedb4654a55a40aeecf4b1dc5fcc98 = module_a6aedb4654a55a40aeecf4b1dc5fcc98;
    boost::python::enum_< enum ::clang::Decl::Kind >("kind")
        .value("CXX_DESTRUCTOR", ::clang::Decl::CXXDestructor)
        .value("CLASS_TEMPLATE", ::clang::Decl::ClassTemplate)
        .value("RECORD", ::clang::Decl::Record)
        .value("FIRST_NAMED", ::clang::Decl::firstNamed)
        .value("BUILTIN_TEMPLATE", ::clang::Decl::BuiltinTemplate)
        .value("OBJ_C_METHOD", ::clang::Decl::ObjCMethod)
        .value("FIRST_OBJ_C_CONTAINER", ::clang::Decl::firstObjCContainer)
        .value("LAST_REDECLARABLE_TEMPLATE", ::clang::Decl::lastRedeclarableTemplate)
        .value("IMPLICIT_PARAM", ::clang::Decl::ImplicitParam)
        .value("NON_TYPE_TEMPLATE_PARM", ::clang::Decl::NonTypeTemplateParm)
        .value("UNRESOLVED_USING_VALUE", ::clang::Decl::UnresolvedUsingValue)
        .value("NAMESPACE", ::clang::Decl::Namespace)
        .value("CLASS_SCOPE_FUNCTION_SPECIALIZATION", ::clang::Decl::ClassScopeFunctionSpecialization)
        .value("VAR_TEMPLATE_SPECIALIZATION", ::clang::Decl::VarTemplateSpecialization)
        .value("FUNCTION_TEMPLATE", ::clang::Decl::FunctionTemplate)
        .value("LAST_FUNCTION", ::clang::Decl::lastFunction)
        .value("IMPORT", ::clang::Decl::Import)
        .value("FIRST_DECL", ::clang::Decl::firstDecl)
        .value("PARM_VAR", ::clang::Decl::ParmVar)
        .value("CLASS_TEMPLATE_SPECIALIZATION", ::clang::Decl::ClassTemplateSpecialization)
        .value("UNRESOLVED_USING_TYPENAME", ::clang::Decl::UnresolvedUsingTypename)
        .value("LAST_CXX_RECORD", ::clang::Decl::lastCXXRecord)
        .value("FIRST_OBJ_C_IMPL", ::clang::Decl::firstObjCImpl)
        .value("CAPTURED", ::clang::Decl::Captured)
        .value("FIRST_TEMPLATE", ::clang::Decl::firstTemplate)
        .value("OBJ_C_PROPERTY_IMPL", ::clang::Decl::ObjCPropertyImpl)
        .value("ENUM_CONSTANT", ::clang::Decl::EnumConstant)
        .value("VAR", ::clang::Decl::Var)
        .value("TYPEDEF", ::clang::Decl::Typedef)
        .value("TRANSLATION_UNIT", ::clang::Decl::TranslationUnit)
        .value("LAST_TEMPLATE", ::clang::Decl::lastTemplate)
        .value("FIRST_FUNCTION", ::clang::Decl::firstFunction)
        .value("OBJ_C_TYPE_PARAM", ::clang::Decl::ObjCTypeParam)
        .value("OBJ_C_IMPLEMENTATION", ::clang::Decl::ObjCImplementation)
        .value("LAST_RECORD", ::clang::Decl::lastRecord)
        .value("USING_DIRECTIVE", ::clang::Decl::UsingDirective)
        .value("ACCESS_SPEC", ::clang::Decl::AccessSpec)
        .value("INDIRECT_FIELD", ::clang::Decl::IndirectField)
        .value("LAST_VAR_TEMPLATE_SPECIALIZATION", ::clang::Decl::lastVarTemplateSpecialization)
        .value("FUNCTION", ::clang::Decl::Function)
        .value("EMPTY", ::clang::Decl::Empty)
        .value("OBJ_C_AT_DEFS_FIELD", ::clang::Decl::ObjCAtDefsField)
        .value("FIELD", ::clang::Decl::Field)
        .value("CLASS_TEMPLATE_PARTIAL_SPECIALIZATION", ::clang::Decl::ClassTemplatePartialSpecialization)
        .value("TYPE_ALIAS", ::clang::Decl::TypeAlias)
        .value("FRIEND_TEMPLATE", ::clang::Decl::FriendTemplate)
        .value("ENUM", ::clang::Decl::Enum)
        .value("LAST_VALUE", ::clang::Decl::lastValue)
        .value("FIRST_TYPE", ::clang::Decl::firstType)
        .value("TEMPLATE_TYPE_PARM", ::clang::Decl::TemplateTypeParm)
        .value("TEMPLATE_TEMPLATE_PARM", ::clang::Decl::TemplateTemplateParm)
        .value("CXX_CONVERSION", ::clang::Decl::CXXConversion)
        .value("STATIC_ASSERT", ::clang::Decl::StaticAssert)
        .value("OBJ_C_PROPERTY", ::clang::Decl::ObjCProperty)
        .value("EXTERN_C_CONTEXT", ::clang::Decl::ExternCContext)
        .value("LINKAGE_SPEC", ::clang::Decl::LinkageSpec)
        .value("CXX_METHOD", ::clang::Decl::CXXMethod)
        .value("USING", ::clang::Decl::Using)
        .value("BLOCK", ::clang::Decl::Block)
        .value("LAST_NAMED", ::clang::Decl::lastNamed)
        .value("FIRST_CXX_METHOD", ::clang::Decl::firstCXXMethod)
        .value("FIRST_REDECLARABLE_TEMPLATE", ::clang::Decl::firstRedeclarableTemplate)
        .value("VAR_TEMPLATE_PARTIAL_SPECIALIZATION", ::clang::Decl::VarTemplatePartialSpecialization)
        .value("FIRST_CXX_RECORD", ::clang::Decl::firstCXXRecord)
        .value("VAR_TEMPLATE", ::clang::Decl::VarTemplate)
        .value("FIRST_FIELD", ::clang::Decl::firstField)
        .value("CXX_CONSTRUCTOR", ::clang::Decl::CXXConstructor)
        .value("OBJ_C_PROTOCOL", ::clang::Decl::ObjCProtocol)
        .value("CXX_RECORD", ::clang::Decl::CXXRecord)
        .value("FIRST_RECORD", ::clang::Decl::firstRecord)
        .value("OBJ_C_CATEGORY", ::clang::Decl::ObjCCategory)
        .value("FIRST_TYPEDEF_NAME", ::clang::Decl::firstTypedefName)
        .value("FIRST_DECLARATOR", ::clang::Decl::firstDeclarator)
        .value("OBJ_C_IVAR", ::clang::Decl::ObjCIvar)
        .value("LAST_DECLARATOR", ::clang::Decl::lastDeclarator)
        .value("LAST_TAG", ::clang::Decl::lastTag)
        .value("LAST_OBJ_C_CONTAINER", ::clang::Decl::lastObjCContainer)
        .value("OMP_THREAD_PRIVATE", ::clang::Decl::OMPThreadPrivate)
        .value("FIRST_TAG", ::clang::Decl::firstTag)
        .value("FIRST_VALUE", ::clang::Decl::firstValue)
        .value("LAST_DECL", ::clang::Decl::lastDecl)
        .value("LAST_TYPE", ::clang::Decl::lastType)
        .value("FIRST_VAR_TEMPLATE_SPECIALIZATION", ::clang::Decl::firstVarTemplateSpecialization)
        .value("LAST_OBJ_C_IMPL", ::clang::Decl::lastObjCImpl)
        .value("LAST_FIELD", ::clang::Decl::lastField)
        .value("LABEL", ::clang::Decl::Label)
        .value("OBJ_C_INTERFACE", ::clang::Decl::ObjCInterface)
        .value("FIRST_CLASS_TEMPLATE_SPECIALIZATION", ::clang::Decl::firstClassTemplateSpecialization)
        .value("OBJ_C_CATEGORY_IMPL", ::clang::Decl::ObjCCategoryImpl)
        .value("LAST_TYPEDEF_NAME", ::clang::Decl::lastTypedefName)
        .value("FILE_SCOPE_ASM", ::clang::Decl::FileScopeAsm)
        .value("LAST_CXX_METHOD", ::clang::Decl::lastCXXMethod)
        .value("NAMESPACE_ALIAS", ::clang::Decl::NamespaceAlias)
        .value("OBJ_C_COMPATIBLE_ALIAS", ::clang::Decl::ObjCCompatibleAlias)
        .value("LAST_VAR", ::clang::Decl::lastVar)
        .value("FRIEND", ::clang::Decl::Friend)
        .value("FIRST_VAR", ::clang::Decl::firstVar)
        .value("MS_PROPERTY", ::clang::Decl::MSProperty)
        .value("USING_SHADOW", ::clang::Decl::UsingShadow)
        .value("LAST_CLASS_TEMPLATE_SPECIALIZATION", ::clang::Decl::lastClassTemplateSpecialization)
        .value("TYPE_ALIAS_TEMPLATE", ::clang::Decl::TypeAliasTemplate);
}