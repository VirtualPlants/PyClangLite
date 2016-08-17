#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_e536a5cae34e54058d1fe69715937f7a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::ASTContext::*method_pointer_aec09582e150593e9f1837b3cd3ae47c)(class ::clang::NamedDecl  *) = &::clang::ASTContext::deduplicateMergedDefinitonsFor;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_f00987be4e7659c498cb9ea3b3a2561a)() const = &::clang::ASTContext::getBuiltinMSVaListDecl;
    class ::clang::Decl  * (::clang::ASTContext::*method_pointer_8cd31410e66c520b9ddc79af25b26e93)() const = &::clang::ASTContext::getVaListTagDecl;
    bool  (::clang::ASTContext::*method_pointer_fa0134fa38c25e9f81671518325ca789)(class ::clang::Decl  const *) = &::clang::ASTContext::DeclMustBeEmitted;
    void  (::clang::ASTContext::*method_pointer_76869fab3f445edf83501a21559cd71b)(class ::clang::VarDecl  const *, unsigned int ) = &::clang::ASTContext::setStaticLocalNumber;
    bool  (::clang::ASTContext::*method_pointer_872ac99fb19850dd92407c41206b32d4)(class ::clang::ObjCProtocolDecl  *, class ::clang::ObjCProtocolDecl  *) const = &::clang::ASTContext::ProtocolCompatibleWithProtocol;
    bool  (::clang::ASTContext::*method_pointer_725f5ca95b4c53b48eff33860dad1ef1)() = &::clang::ASTContext::AnyObjCImplementation;
    unsigned long int  (::clang::ASTContext::*method_pointer_a51f2c8b300450698b27c8f1976f5d57)() const = &::clang::ASTContext::getASTAllocatedMemory;
    class ::clang::ObjCPropertyImplDecl  * (::clang::ASTContext::*method_pointer_4707ad70cb2755d3ac8cd30c1f365aa8)(class ::clang::ObjCPropertyDecl  const *, class ::clang::Decl  const *) const = &::clang::ASTContext::getObjCPropertyImplDeclForPropertyDecl;
    void  (::clang::ASTContext::*method_pointer_61063312021752418bb6b5a386c5a2cd)(class ::clang::NamedDecl  const *, unsigned int ) = &::clang::ASTContext::setManglingNumber;
    void  (::clang::ASTContext::*method_pointer_95801a45748f580e88efa9b87b957a90)(class ::clang::ObjCContainerDecl  const *) = &::clang::ASTContext::ResetObjCLayout;
    void  (::clang::ASTContext::*method_pointer_a64ea250e42a55b58e3d897b86bf87f3)(class ::clang::TypeDecl  *) = &::clang::ASTContext::setjmp_bufDecl;
    void  (::clang::ASTContext::*method_pointer_0a348e7f998b59dcb304590ceb802f7a)(class ::clang::TagDecl  *, class ::clang::TypedefNameDecl  *) = &::clang::ASTContext::addTypedefNameForUnnamedTagDecl;
    class ::clang::BuiltinTemplateDecl  * (::clang::ASTContext::*method_pointer_dee11504d18e5a5b8b653e179a5f37e2)() const = &::clang::ASTContext::getMakeIntegerSeqDecl;
    class ::clang::ObjCMethodDecl  const * (::clang::ASTContext::*method_pointer_3a1367d3a00159e28c977533d92114d5)(class ::clang::ObjCMethodDecl  const *) const = &::clang::ASTContext::getObjCMethodRedeclaration;
    unsigned long int  (::clang::ASTContext::*method_pointer_3af70103aeeb5f8f9bf722a494987fba)(class ::clang::Type  const *) const = &::clang::ASTContext::getTypeSize;
    void  (::clang::ASTContext::*method_pointer_87530ba1a6385a5195a34489f290f984)(class ::clang::Decl  const *) = &::clang::ASTContext::eraseDeclAttrs;
    unsigned long int  (::clang::ASTContext::*method_pointer_0238a60a338e512dbee26232f5ce3080)() const = &::clang::ASTContext::getCharWidth;
    class ::clang::CXXConstructorDecl  const * (::clang::ASTContext::*method_pointer_00fe9c47647e5b479945aff86a3f82b3)(class ::clang::CXXRecordDecl  *) = &::clang::ASTContext::getCopyConstructorForExceptionObject;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_e0c57d5e2c415a248d979199627b434c)() const = &::clang::ASTContext::getInt128Decl;
    unsigned int  (::clang::ASTContext::*method_pointer_bee3a8f2c5715c6bb944476572b036a5)(class ::clang::ParmVarDecl  const *) const = &::clang::ASTContext::getParameterIndex;
    void  (::clang::ASTContext::*method_pointer_ec279c8b95d152df85dd5f07bfd5cadf)(class ::clang::CXXMethodDecl  const *, class ::clang::CXXMethodDecl  const *) = &::clang::ASTContext::addOverriddenMethod;
    void  (::clang::ASTContext::*method_pointer_2048945124595bb6a57de53721fb3693)(class ::clang::FunctionDecl  *) = &::clang::ASTContext::setcudaConfigureCallDecl;
    void  (::clang::ASTContext::*method_pointer_763babbbae6253d98df88e96270c43b9)(class ::clang::UsingDecl  *, class ::clang::NamedDecl  *) = &::clang::ASTContext::setInstantiatedFromUsingDecl;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ASTContext::*method_pointer_59fbc580dd235831bfaa2bcac99792ab)(class ::clang::NamedDecl  const *) const = &::clang::ASTContext::getObjContainingInterface;
    bool  (::clang::ASTContext::*method_pointer_0dbf5a2d28b750228b3d75d10b152722)(class ::clang::ObjCObjectType  const *, class ::clang::ObjCObjectType  const *) = &::clang::ASTContext::canAssignObjCInterfaces;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_1f32b198ebfe5dccbbe532069352a235)() = &::clang::ASTContext::getObjCInstanceTypeDecl;
    class ::clang::Decl  * (::clang::ASTContext::*method_pointer_1cc5a9f41a0f5cad999c27b132eaf801)(class ::clang::Decl  *) = &::clang::ASTContext::getPrimaryMergedDecl;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_7910aedfb92d55e8b2ab7b9165fb7b95)() const = &::clang::ASTContext::getObjCSelDecl;
    class ::clang::ImportDecl  * (*method_pointer_aa276833b16f5c1f9f8f5b2b062df8b9)(class ::clang::ImportDecl  *) = ::clang::ASTContext::getNextLocalImport;
    bool  (::clang::ASTContext::*method_pointer_c23511a2bdc25b10b26a8b57505883f7)(class ::clang::Type  const *) const = &::clang::ASTContext::isAlignmentRequired;
    class ::clang::ObjCInterfaceDecl  * (::clang::ASTContext::*method_pointer_55b08f8187635b1dbda1b737b27f67b8)() const = &::clang::ASTContext::getObjCProtocolDecl;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_08fa68b766175edfad1149086303196d)() const = &::clang::ASTContext::getObjCClassDecl;
    class ::clang::Type  const * (::clang::ASTContext::*method_pointer_505b612b8e2257b09b3d8780e12843cd)(class ::clang::Type  const *) const = &::clang::ASTContext::getCanonicalType;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_861be3617829541fb8904762f5a95d32)() const = &::clang::ASTContext::getObjCIdDecl;
    void  (::clang::ASTContext::*method_pointer_10e592582b6c50a584dfaefccfecdf03)(class ::clang::TypeDecl  *) = &::clang::ASTContext::setsigjmp_bufDecl;
    bool  (::clang::ASTContext::*method_pointer_0800ed9d500852f4b32e20a6e5b62a1b)(class ::clang::VarDecl  const *) const = &::clang::ASTContext::isMSStaticDataMemberInlineDefinition;
    unsigned long int  (::clang::ASTContext::*method_pointer_63f82e4e3cf5570ea0555b48ed92b140)(class ::clang::ConstantArrayType  const *) const = &::clang::ASTContext::getConstantArrayElementCount;
    void  (::clang::ASTContext::*method_pointer_5e2de69f25c25119a0318eaba4f23671)(class ::clang::Decl  *, class ::clang::Decl  *) = &::clang::ASTContext::setPrimaryMergedDecl;
    void  (::clang::ASTContext::*method_pointer_abd883232125572c87eaa05556f1c828)(class ::clang::CXXMethodDecl  const *) = &::clang::ASTContext::setNonKeyFunction;
    void  (::clang::ASTContext::*method_pointer_54d08e8dd4ab51f7888e565d9769823e)(class ::clang::TypedefDecl  *) = &::clang::ASTContext::setBOOLDecl;
    unsigned int  (::clang::ASTContext::*method_pointer_89557d4676ce54dc804d43514df1e425)(class ::clang::CXXMethodDecl  const *) const = &::clang::ASTContext::overridden_methods_size;
    void  (::clang::ASTContext::*method_pointer_a3d92a071e705a898ace994ec692c268)(class ::clang::ImportDecl  *) = &::clang::ASTContext::addedLocalImportDecl;
    unsigned int  (::clang::ASTContext::*method_pointer_177040b945115350b8d32d45a1b7b656)() const = &::clang::ASTContext::getTargetDefaultAlignForAttributeAligned;
    class ::clang::ObjCCategoryImplDecl  * (::clang::ASTContext::*method_pointer_18fe5fc3cf5f5128a4a82eea6642da83)(class ::clang::ObjCCategoryDecl  *) = &::clang::ASTContext::getObjCImplementation;
    bool  (::clang::ASTContext::*method_pointer_6187a36294305561b93ddad1a2e8ea84)(unsigned int ) const = &::clang::ASTContext::addressSpaceMapManglingFor;
    void  (::clang::ASTContext::*method_pointer_3de474063e645e02854f04bb52af49e1)(class ::clang::TagDecl  *, class ::clang::DeclaratorDecl  *) = &::clang::ASTContext::addDeclaratorForUnnamedTagDecl;
    unsigned int  (::clang::ASTContext::*method_pointer_40103fc80b305c74837a744da5c9eb24)(class ::clang::Type  const *) const = &::clang::ASTContext::getPreferredTypeAlign;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_cb2c8ded167051e2a9bcbb6d65fc73b6)() const = &::clang::ASTContext::getUInt128Decl;
    bool  (::clang::ASTContext::*method_pointer_ae4681a856135952881cfcfb3d509b9b)(class ::clang::FunctionProtoType  const *, class ::clang::FunctionProtoType  const *) = &::clang::ASTContext::FunctionTypesMatchOnNSConsumedAttrs;
    void  (::clang::ASTContext::*method_pointer_e53f0a33bbc25188998bcf1cd89ac7e5)(class ::clang::FunctionDecl  *, class ::clang::FunctionDecl  *) = &::clang::ASTContext::setClassScopeSpecializationPattern;
    void  (::clang::ASTContext::*method_pointer_15de0ab38b2358f2822d753d5cd7b133)(class ::clang::UsingShadowDecl  *, class ::clang::UsingShadowDecl  *) = &::clang::ASTContext::setInstantiatedFromUsingShadowDecl;
    unsigned int  (::clang::ASTContext::*method_pointer_d41993d1f37451b7b38b14a89b2cd463)(unsigned int ) const = &::clang::ASTContext::getTargetAddressSpace;
    void  (::clang::ASTContext::*method_pointer_88b43d4bb46e5582b4ba5e79dc161bed)(class ::clang::ObjCMethodDecl  const *, class ::clang::ObjCMethodDecl  const *) = &::clang::ASTContext::setObjCMethodRedeclaration;
    void  (::clang::ASTContext::*method_pointer_fd1c93d9cdce5c81bb9884ce73b9d4f3)(class ::clang::TypeDecl  *) = &::clang::ASTContext::setucontext_tDecl;
    unsigned int  (::clang::ASTContext::*method_pointer_103c7d15c8ab5c1aa91564869e5ca7e3)(class ::clang::Type  const *) const = &::clang::ASTContext::getTypeAlign;
    class ::clang::CXXMethodDecl  const * (::clang::ASTContext::*method_pointer_8707071d23045766acedf8d921a1d597)(class ::clang::CXXRecordDecl  const *) = &::clang::ASTContext::getCurrentKeyFunction;
    unsigned long int  (::clang::ASTContext::*method_pointer_c5ae60ae367c5389a12b692990fbaf78)(class ::clang::ValueDecl  const *) const = &::clang::ASTContext::getFieldOffset;
    void  (::clang::ASTContext::*method_pointer_43f65f1dd6e95d95beeb95d397a2b0fe)(class ::clang::TypeDecl  *) = &::clang::ASTContext::setFILEDecl;
    unsigned int  (::clang::ASTContext::*method_pointer_8dfcea97dbe159ffbe072c56631f18a8)(class ::clang::VarDecl  const *) const = &::clang::ASTContext::getStaticLocalNumber;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_e3c054f400cc5e37bbc2cf5609acf673)() const = &::clang::ASTContext::getBOOLDecl;
    unsigned int  (::clang::ASTContext::*method_pointer_696f22b47ddf5546a04c3ac81b0ff9ec)(class ::clang::NamedDecl  const *) const = &::clang::ASTContext::getManglingNumber;
    class ::clang::FieldDecl  * (::clang::ASTContext::*method_pointer_705dd354f89056ea8145eefec402e7ad)(class ::clang::FieldDecl  *) = &::clang::ASTContext::getInstantiatedFromUnnamedFieldDecl;
    void  (::clang::ASTContext::*method_pointer_32baf6595ef256b096e0c227aaad814e)() const = &::clang::ASTContext::PrintStats;
    void  (::clang::ASTContext::*method_pointer_3eefd6fd83815b2ebebae08e5447c562)(class ::clang::ParmVarDecl  const *, unsigned int ) = &::clang::ASTContext::setParameterIndex;
    class ::clang::ObjCImplementationDecl  * (::clang::ASTContext::*method_pointer_fe96562783fc5e65a8a1dd5d6086fd82)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ASTContext::getObjCImplementation;
    class ::clang::NamedDecl  * (::clang::ASTContext::*method_pointer_ed3b06f739b15ca08978147532571d59)(class ::clang::UsingDecl  *) = &::clang::ASTContext::getInstantiatedFromUsingDecl;
    bool  (::clang::ASTContext::*method_pointer_8536e7f41509555dbb954dcca8ae79fe)(class ::clang::Type  const *, class ::clang::Type  const *) const = &::clang::ASTContext::hasSameType;
    bool  (::clang::ASTContext::*method_pointer_9a6857452ba950b08d4c58fa2de7f62e)(class ::clang::CXXRecordDecl  const *) const = &::clang::ASTContext::isNearlyEmpty;
    class ::clang::TranslationUnitDecl  * (::clang::ASTContext::*method_pointer_768285f32d475918b87ba143c60e0704)() const = &::clang::ASTContext::getTranslationUnitDecl;
    void  (::clang::ASTContext::*method_pointer_05a66fdd06f259a0a8a4fd2c0272038b)(class ::clang::CXXRecordDecl  *, class ::clang::CXXConstructorDecl  *) = &::clang::ASTContext::addCopyConstructorForExceptionObject;
    bool  (::clang::ASTContext::*method_pointer_34d9e85fa50551e08df32f5afb69ac95)(class ::clang::ObjCMethodDecl  const *, class ::clang::ObjCMethodDecl  const *) = &::clang::ASTContext::ObjCMethodsAreEqual;
    class ::clang::TypeDecl  * (::clang::ASTContext::*method_pointer_c63464482ace5d7986f83c09c577c7b8)() const = &::clang::ASTContext::getFloat128StubType;
    void  (::clang::ASTContext::*method_pointer_9bc1af22330159ddaefc51a7bba0f0d2)(class ::clang::ObjCCategoryDecl  *, class ::clang::ObjCCategoryImplDecl  *) = &::clang::ASTContext::setObjCImplementation;
    class ::clang::FunctionDecl  * (::clang::ASTContext::*method_pointer_7eb589f9366d55e28990277e9df1c0e5)() = &::clang::ASTContext::getcudaConfigureCallDecl;
    class ::clang::TypedefNameDecl  * (::clang::ASTContext::*method_pointer_b2cd47e2bebf5ab09e03cddfb4bde366)(class ::clang::TagDecl  const *) = &::clang::ASTContext::getTypedefNameForUnnamedTagDecl;
    class ::clang::ExternCContextDecl  * (::clang::ASTContext::*method_pointer_a42d3aeda45557a2a511831827e32591)() const = &::clang::ASTContext::getExternCContextDecl;
    void  (::clang::ASTContext::*method_pointer_a972aeecf7505ee9ba47337efccb71bc)(class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCImplementationDecl  *) = &::clang::ASTContext::setObjCImplementation;
    bool  (::clang::ASTContext::*method_pointer_b8b3f6b4af0558918fdd182229fa2154)(class ::clang::ObjCObjectPointerType  const *, class ::clang::ObjCObjectPointerType  const *) = &::clang::ASTContext::canAssignObjCInterfaces;
    bool  (::clang::ASTContext::*method_pointer_19f83d95f3b7508ea7f4d7efd9a4e556)(class ::clang::ObjCObjectPointerType  const *, class ::clang::ObjCObjectPointerType  const *, bool ) = &::clang::ASTContext::canAssignObjCInterfacesInBlockPointer;
    unsigned long int  (::clang::ASTContext::*method_pointer_99a806e3283f5313bf8c47d934be9b36)() const = &::clang::ASTContext::getSideTableAllocatedMemory;
    void  (::clang::ASTContext::*method_pointer_5d7448a94b7a555887ce4b695554881c)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ASTContext::setObjCConstantStringInterface;
    class ::clang::UsingShadowDecl  * (::clang::ASTContext::*method_pointer_2eced813c2de50079d8e081b2d6a08bd)(class ::clang::UsingShadowDecl  *) = &::clang::ASTContext::getInstantiatedFromUsingShadowDecl;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_255c512a1fc659cba840c168f97b5e8e)() const = &::clang::ASTContext::getBuiltinVaListDecl;
    class ::clang::FunctionDecl  * (::clang::ASTContext::*method_pointer_57523a7513ed59758bfe0471e018b51e)(class ::clang::FunctionDecl  const *) = &::clang::ASTContext::getClassScopeSpecializationPattern;
    class ::clang::DeclaratorDecl  * (::clang::ASTContext::*method_pointer_2388d9efd32a5431bf20538df00fa116)(class ::clang::TagDecl  const *) = &::clang::ASTContext::getDeclaratorForUnnamedTagDecl;
    unsigned int  (::clang::ASTContext::*method_pointer_13b94b4874ce561598dc8964e56f8675)(class ::clang::ObjCInterfaceDecl  const *) const = &::clang::ASTContext::CountNonClassIvars;
    void  (::clang::ASTContext::*method_pointer_f93fefb4409050d19f0ba8a0da5eb22d)(class ::clang::FieldDecl  *, class ::clang::FieldDecl  *) = &::clang::ASTContext::setInstantiatedFromUnnamedFieldDecl;
    boost::python::class_< class ::clang::ASTContext, autowig::HeldType< class ::clang::ASTContext >, boost::noncopyable > class_e536a5cae34e54058d1fe69715937f7a("ASTContext", "", boost::python::no_init);
    class_e536a5cae34e54058d1fe69715937f7a.def("deduplicate_merged_definitons_for", method_pointer_aec09582e150593e9f1837b3cd3ae47c, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_builtin_ms_va_list_decl", method_pointer_f00987be4e7659c498cb9ea3b3a2561a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_va_list_tag_decl", method_pointer_8cd31410e66c520b9ddc79af25b26e93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("decl_must_be_emitted", method_pointer_fa0134fa38c25e9f81671518325ca789, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_static_local_number", method_pointer_76869fab3f445edf83501a21559cd71b, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("protocol_compatible_with_protocol", method_pointer_872ac99fb19850dd92407c41206b32d4, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("any_obj_c_implementation", method_pointer_725f5ca95b4c53b48eff33860dad1ef1, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_ast_allocated_memory", method_pointer_a51f2c8b300450698b27c8f1976f5d57, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_property_impl_decl_for_property_decl", method_pointer_4707ad70cb2755d3ac8cd30c1f365aa8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_mangling_number", method_pointer_61063312021752418bb6b5a386c5a2cd, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("reset_obj_c_layout", method_pointer_95801a45748f580e88efa9b87b957a90, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("setjmp_buf_decl", method_pointer_a64ea250e42a55b58e3d897b86bf87f3, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("add_typedef_name_for_unnamed_tag_decl", method_pointer_0a348e7f998b59dcb304590ceb802f7a, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_make_integer_seq_decl", method_pointer_dee11504d18e5a5b8b653e179a5f37e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_method_redeclaration", method_pointer_3a1367d3a00159e28c977533d92114d5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_type_size", method_pointer_3af70103aeeb5f8f9bf722a494987fba, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("erase_decl_attrs", method_pointer_87530ba1a6385a5195a34489f290f984, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_char_width", method_pointer_0238a60a338e512dbee26232f5ce3080, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_copy_constructor_for_exception_object", method_pointer_00fe9c47647e5b479945aff86a3f82b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_int_128_decl", method_pointer_e0c57d5e2c415a248d979199627b434c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_parameter_index", method_pointer_bee3a8f2c5715c6bb944476572b036a5, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("add_overridden_method", method_pointer_ec279c8b95d152df85dd5f07bfd5cadf, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("setcuda_configure_call_decl", method_pointer_2048945124595bb6a57de53721fb3693, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_instantiated_from_using_decl", method_pointer_763babbbae6253d98df88e96270c43b9, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_containing_interface", method_pointer_59fbc580dd235831bfaa2bcac99792ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("can_assign_obj_c_interfaces", method_pointer_0dbf5a2d28b750228b3d75d10b152722, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_instance_type_decl", method_pointer_1f32b198ebfe5dccbbe532069352a235, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_primary_merged_decl", method_pointer_1cc5a9f41a0f5cad999c27b132eaf801, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_sel_decl", method_pointer_7910aedfb92d55e8b2ab7b9165fb7b95, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_next_local_import", method_pointer_aa276833b16f5c1f9f8f5b2b062df8b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("is_alignment_required", method_pointer_c23511a2bdc25b10b26a8b57505883f7, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_protocol_decl", method_pointer_55b08f8187635b1dbda1b737b27f67b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_class_decl", method_pointer_08fa68b766175edfad1149086303196d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_canonical_type", method_pointer_505b612b8e2257b09b3d8780e12843cd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_id_decl", method_pointer_861be3617829541fb8904762f5a95d32, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("setsigjmp_buf_decl", method_pointer_10e592582b6c50a584dfaefccfecdf03, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("is_ms_static_data_member_inline_definition", method_pointer_0800ed9d500852f4b32e20a6e5b62a1b, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_constant_array_element_count", method_pointer_63f82e4e3cf5570ea0555b48ed92b140, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_primary_merged_decl", method_pointer_5e2de69f25c25119a0318eaba4f23671, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_non_key_function", method_pointer_abd883232125572c87eaa05556f1c828, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_bool_decl", method_pointer_54d08e8dd4ab51f7888e565d9769823e, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("overridden_methods_size", method_pointer_89557d4676ce54dc804d43514df1e425, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("added_local_import_decl", method_pointer_a3d92a071e705a898ace994ec692c268, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_target_default_align_for_attribute_aligned", method_pointer_177040b945115350b8d32d45a1b7b656, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_implementation", method_pointer_18fe5fc3cf5f5128a4a82eea6642da83, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("address_space_map_mangling_for", method_pointer_6187a36294305561b93ddad1a2e8ea84, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("add_declarator_for_unnamed_tag_decl", method_pointer_3de474063e645e02854f04bb52af49e1, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_preferred_type_align", method_pointer_40103fc80b305c74837a744da5c9eb24, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_u_int_128_decl", method_pointer_cb2c8ded167051e2a9bcbb6d65fc73b6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("function_types_match_on_ns_consumed_attrs", method_pointer_ae4681a856135952881cfcfb3d509b9b, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_class_scope_specialization_pattern", method_pointer_e53f0a33bbc25188998bcf1cd89ac7e5, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_instantiated_from_using_shadow_decl", method_pointer_15de0ab38b2358f2822d753d5cd7b133, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_target_address_space", method_pointer_d41993d1f37451b7b38b14a89b2cd463, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_obj_c_method_redeclaration", method_pointer_88b43d4bb46e5582b4ba5e79dc161bed, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("setucontext_t_decl", method_pointer_fd1c93d9cdce5c81bb9884ce73b9d4f3, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_type_align", method_pointer_103c7d15c8ab5c1aa91564869e5ca7e3, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_current_key_function", method_pointer_8707071d23045766acedf8d921a1d597, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_field_offset", method_pointer_c5ae60ae367c5389a12b692990fbaf78, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_file_decl", method_pointer_43f65f1dd6e95d95beeb95d397a2b0fe, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_static_local_number", method_pointer_8dfcea97dbe159ffbe072c56631f18a8, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_bool_decl", method_pointer_e3c054f400cc5e37bbc2cf5609acf673, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_mangling_number", method_pointer_696f22b47ddf5546a04c3ac81b0ff9ec, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_instantiated_from_unnamed_field_decl", method_pointer_705dd354f89056ea8145eefec402e7ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("print_stats", method_pointer_32baf6595ef256b096e0c227aaad814e, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_parameter_index", method_pointer_3eefd6fd83815b2ebebae08e5447c562, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_implementation", method_pointer_fe96562783fc5e65a8a1dd5d6086fd82, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_instantiated_from_using_decl", method_pointer_ed3b06f739b15ca08978147532571d59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("has_same_type", method_pointer_8536e7f41509555dbb954dcca8ae79fe, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("is_nearly_empty", method_pointer_9a6857452ba950b08d4c58fa2de7f62e, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_translation_unit_decl", method_pointer_768285f32d475918b87ba143c60e0704, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("add_copy_constructor_for_exception_object", method_pointer_05a66fdd06f259a0a8a4fd2c0272038b, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("obj_c_methods_are_equal", method_pointer_34d9e85fa50551e08df32f5afb69ac95, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_float_128_stub_type", method_pointer_c63464482ace5d7986f83c09c577c7b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_obj_c_implementation", method_pointer_9bc1af22330159ddaefc51a7bba0f0d2, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("getcuda_configure_call_decl", method_pointer_7eb589f9366d55e28990277e9df1c0e5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_typedef_name_for_unnamed_tag_decl", method_pointer_b2cd47e2bebf5ab09e03cddfb4bde366, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_extern_c_context_decl", method_pointer_a42d3aeda45557a2a511831827e32591, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_obj_c_implementation", method_pointer_a972aeecf7505ee9ba47337efccb71bc, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("can_assign_obj_c_interfaces", method_pointer_b8b3f6b4af0558918fdd182229fa2154, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("can_assign_obj_c_interfaces_in_block_pointer", method_pointer_19f83d95f3b7508ea7f4d7efd9a4e556, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_side_table_allocated_memory", method_pointer_99a806e3283f5313bf8c47d934be9b36, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_obj_c_constant_string_interface", method_pointer_5d7448a94b7a555887ce4b695554881c, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_instantiated_from_using_shadow_decl", method_pointer_2eced813c2de50079d8e081b2d6a08bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_builtin_va_list_decl", method_pointer_255c512a1fc659cba840c168f97b5e8e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_class_scope_specialization_pattern", method_pointer_57523a7513ed59758bfe0471e018b51e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_declarator_for_unnamed_tag_decl", method_pointer_2388d9efd32a5431bf20538df00fa116, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("count_non_class_ivars", method_pointer_13b94b4874ce561598dc8964e56f8675, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_instantiated_from_unnamed_field_decl", method_pointer_f93fefb4409050d19f0ba8a0da5eb22d, "");
    class_e536a5cae34e54058d1fe69715937f7a.staticmethod("get_next_local_import");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_copy_constructors", ::clang::ASTContext::NumImplicitCopyConstructors, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_copy_assignment_operators", ::clang::ASTContext::NumImplicitCopyAssignmentOperators, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("parsed_comments", &::clang::ASTContext::ParsedComments, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_move_assignment_operators_declared", ::clang::ASTContext::NumImplicitMoveAssignmentOperatorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_destructors", ::clang::ASTContext::NumImplicitDestructors, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_destructors_declared", ::clang::ASTContext::NumImplicitDestructorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_copy_constructors_declared", ::clang::ASTContext::NumImplicitCopyConstructorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_default_constructors_declared", ::clang::ASTContext::NumImplicitDefaultConstructorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_move_constructors_declared", ::clang::ASTContext::NumImplicitMoveConstructorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_move_assignment_operators", ::clang::ASTContext::NumImplicitMoveAssignmentOperators, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("comments_loaded", &::clang::ASTContext::CommentsLoaded, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("redecl_comments", &::clang::ASTContext::RedeclComments, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_move_constructors", ::clang::ASTContext::NumImplicitMoveConstructors, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_copy_assignment_operators_declared", ::clang::ASTContext::NumImplicitCopyAssignmentOperatorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_default_constructors", ::clang::ASTContext::NumImplicitDefaultConstructors, "");

}