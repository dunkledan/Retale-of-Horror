// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetaleOfHorror/MessManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMessManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
RETALEOFHORROR_API UClass* Z_Construct_UClass_AMessManager();
RETALEOFHORROR_API UClass* Z_Construct_UClass_AMessManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_RetaleOfHorror();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMessManager *************************************************************
void AMessManager::StaticRegisterNativesAMessManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMessManager;
UClass* AMessManager::GetPrivateStaticClass()
{
	using TClass = AMessManager;
	if (!Z_Registration_Info_UClass_AMessManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MessManager"),
			Z_Registration_Info_UClass_AMessManager.InnerSingleton,
			StaticRegisterNativesAMessManager,
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
	return Z_Registration_Info_UClass_AMessManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AMessManager_NoRegister()
{
	return AMessManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMessManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The manager of all messes in a level\n" },
#endif
		{ "IncludePath", "MessManager.h" },
		{ "ModuleRelativePath", "MessManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The manager of all messes in a level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentMessCount_MetaData[] = {
		{ "Category", "MessManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the number of messes currently in the scene - this should never be negitive\n" },
#endif
		{ "ModuleRelativePath", "MessManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the number of messes currently in the scene - this should never be negitive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_softMessCap_MetaData[] = {
		{ "Category", "MessManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the maximum amount of messes that can be spawned in before the boss calls\n" },
#endif
		{ "ModuleRelativePath", "MessManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the maximum amount of messes that can be spawned in before the boss calls" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hardMessCap_MetaData[] = {
		{ "Category", "MessManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the maximum amount of messes that can be spawned in at one time\n" },
#endif
		{ "ModuleRelativePath", "MessManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the maximum amount of messes that can be spawned in at one time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_messTimerLength_MetaData[] = {
		{ "Category", "MessManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the amount of time that it takes for the mess timer to tick\n" },
#endif
		{ "ModuleRelativePath", "MessManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the amount of time that it takes for the mess timer to tick" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentMessCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_softMessCap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_hardMessCap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_messTimerLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMessManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMessManager_Statics::NewProp_currentMessCount = { "currentMessCount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMessManager, currentMessCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentMessCount_MetaData), NewProp_currentMessCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMessManager_Statics::NewProp_softMessCap = { "softMessCap", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMessManager, softMessCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_softMessCap_MetaData), NewProp_softMessCap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMessManager_Statics::NewProp_hardMessCap = { "hardMessCap", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMessManager, hardMessCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hardMessCap_MetaData), NewProp_hardMessCap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMessManager_Statics::NewProp_messTimerLength = { "messTimerLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMessManager, messTimerLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_messTimerLength_MetaData), NewProp_messTimerLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMessManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMessManager_Statics::NewProp_currentMessCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMessManager_Statics::NewProp_softMessCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMessManager_Statics::NewProp_hardMessCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMessManager_Statics::NewProp_messTimerLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMessManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMessManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RetaleOfHorror,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMessManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMessManager_Statics::ClassParams = {
	&AMessManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMessManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMessManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMessManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMessManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMessManager()
{
	if (!Z_Registration_Info_UClass_AMessManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMessManager.OuterSingleton, Z_Construct_UClass_AMessManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMessManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMessManager);
AMessManager::~AMessManager() {}
// ********** End Class AMessManager ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_MessManager_h__Script_RetaleOfHorror_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMessManager, AMessManager::StaticClass, TEXT("AMessManager"), &Z_Registration_Info_UClass_AMessManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMessManager), 4006485853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_MessManager_h__Script_RetaleOfHorror_1438630712(TEXT("/Script/RetaleOfHorror"),
	Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_MessManager_h__Script_RetaleOfHorror_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_MessManager_h__Script_RetaleOfHorror_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
