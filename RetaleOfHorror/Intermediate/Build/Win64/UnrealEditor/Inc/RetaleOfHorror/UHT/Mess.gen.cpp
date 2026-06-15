// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetaleOfHorror/Mess.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMess() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
RETALEOFHORROR_API UClass* Z_Construct_UClass_AMess();
RETALEOFHORROR_API UClass* Z_Construct_UClass_AMess_NoRegister();
UPackage* Z_Construct_UPackage__Script_RetaleOfHorror();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMess ********************************************************************
void AMess::StaticRegisterNativesAMess()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMess;
UClass* AMess::GetPrivateStaticClass()
{
	using TClass = AMess;
	if (!Z_Registration_Info_UClass_AMess.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Mess"),
			Z_Registration_Info_UClass_AMess.InnerSingleton,
			StaticRegisterNativesAMess,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMess.InnerSingleton;
}
UClass* Z_Construct_UClass_AMess_NoRegister()
{
	return AMess::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Mess.h" },
		{ "ModuleRelativePath", "Mess.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMess_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RetaleOfHorror,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMess_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMess_Statics::ClassParams = {
	&AMess::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMess_Statics::Class_MetaDataParams), Z_Construct_UClass_AMess_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMess()
{
	if (!Z_Registration_Info_UClass_AMess.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMess.OuterSingleton, Z_Construct_UClass_AMess_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMess.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMess);
AMess::~AMess() {}
// ********** End Class AMess **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_Mess_h__Script_RetaleOfHorror_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMess, AMess::StaticClass, TEXT("AMess"), &Z_Registration_Info_UClass_AMess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMess), 1603597822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_Mess_h__Script_RetaleOfHorror_2608674714(TEXT("/Script/RetaleOfHorror"),
	Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_Mess_h__Script_RetaleOfHorror_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_Mess_h__Script_RetaleOfHorror_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
