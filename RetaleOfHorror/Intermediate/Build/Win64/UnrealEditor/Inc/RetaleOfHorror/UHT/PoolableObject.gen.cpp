// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetaleOfHorror/PoolableObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePoolableObject() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RETALEOFHORROR_API UClass* Z_Construct_UClass_UPoolableObject();
RETALEOFHORROR_API UClass* Z_Construct_UClass_UPoolableObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_RetaleOfHorror();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPoolableObject **********************************************************
void UPoolableObject::StaticRegisterNativesUPoolableObject()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPoolableObject;
UClass* UPoolableObject::GetPrivateStaticClass()
{
	using TClass = UPoolableObject;
	if (!Z_Registration_Info_UClass_UPoolableObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PoolableObject"),
			Z_Registration_Info_UClass_UPoolableObject.InnerSingleton,
			StaticRegisterNativesUPoolableObject,
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
	return Z_Registration_Info_UClass_UPoolableObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UPoolableObject_NoRegister()
{
	return UPoolableObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPoolableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PoolableObject.h" },
		{ "ModuleRelativePath", "PoolableObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoolableObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPoolableObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RetaleOfHorror,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolableObject_Statics::ClassParams = {
	&UPoolableObject::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolableObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoolableObject()
{
	if (!Z_Registration_Info_UClass_UPoolableObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolableObject.OuterSingleton, Z_Construct_UClass_UPoolableObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoolableObject.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolableObject);
UPoolableObject::~UPoolableObject() {}
// ********** End Class UPoolableObject ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_dunkl_OneDrive_Documents_GitHub_repos_Retale_of_Horror_RetaleOfHorror_RetaleOfHorror_Source_RetaleOfHorror_PoolableObject_h__Script_RetaleOfHorror_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoolableObject, UPoolableObject::StaticClass, TEXT("UPoolableObject"), &Z_Registration_Info_UClass_UPoolableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolableObject), 1833611747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dunkl_OneDrive_Documents_GitHub_repos_Retale_of_Horror_RetaleOfHorror_RetaleOfHorror_Source_RetaleOfHorror_PoolableObject_h__Script_RetaleOfHorror_1128204134(TEXT("/Script/RetaleOfHorror"),
	Z_CompiledInDeferFile_FID_Users_dunkl_OneDrive_Documents_GitHub_repos_Retale_of_Horror_RetaleOfHorror_RetaleOfHorror_Source_RetaleOfHorror_PoolableObject_h__Script_RetaleOfHorror_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dunkl_OneDrive_Documents_GitHub_repos_Retale_of_Horror_RetaleOfHorror_RetaleOfHorror_Source_RetaleOfHorror_PoolableObject_h__Script_RetaleOfHorror_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
