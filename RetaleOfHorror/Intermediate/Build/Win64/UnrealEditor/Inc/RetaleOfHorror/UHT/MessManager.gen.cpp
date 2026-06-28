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
RETALEOFHORROR_API UClass* Z_Construct_UClass_AMess_NoRegister();
RETALEOFHORROR_API UClass* Z_Construct_UClass_AMessManager();
RETALEOFHORROR_API UClass* Z_Construct_UClass_AMessManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_RetaleOfHorror();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMessManager Function MoveMessToPool *************************************
struct Z_Construct_UFunction_AMessManager_MoveMessToPool_Statics
{
	struct MessManager_eventMoveMessToPool_Parms
	{
		AMess* Mess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MessManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMessManager_MoveMessToPool_Statics::NewProp_Mess = { "Mess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MessManager_eventMoveMessToPool_Parms, Mess), Z_Construct_UClass_AMess_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMessManager_MoveMessToPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMessManager_MoveMessToPool_Statics::NewProp_Mess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMessManager_MoveMessToPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMessManager_MoveMessToPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMessManager, nullptr, "MoveMessToPool", Z_Construct_UFunction_AMessManager_MoveMessToPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMessManager_MoveMessToPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMessManager_MoveMessToPool_Statics::MessManager_eventMoveMessToPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMessManager_MoveMessToPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMessManager_MoveMessToPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMessManager_MoveMessToPool_Statics::MessManager_eventMoveMessToPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMessManager_MoveMessToPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMessManager_MoveMessToPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMessManager::execMoveMessToPool)
{
	P_GET_OBJECT(AMess,Z_Param_Mess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveMessToPool(Z_Param_Mess);
	P_NATIVE_END;
}
// ********** End Class AMessManager Function MoveMessToPool ***************************************

// ********** Begin Class AMessManager *************************************************************
void AMessManager::StaticRegisterNativesAMessManager()
{
	UClass* Class = AMessManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveMessToPool", &AMessManager::execMoveMessToPool },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMessCount_MetaData[] = {
		{ "Category", "MessManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the number of messes currently in the scene - this should never be negative\n" },
#endif
		{ "ModuleRelativePath", "MessManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the number of messes currently in the scene - this should never be negative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftMessCap_MetaData[] = {
		{ "Category", "MessManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the maximum amount of messes that can be spawned in before the boss calls\n" },
#endif
		{ "ModuleRelativePath", "MessManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the maximum amount of messes that can be spawned in before the boss calls" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardMessCap_MetaData[] = {
		{ "Category", "MessManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the maximum amount of messes that can be spawned in at one time\n" },
#endif
		{ "ModuleRelativePath", "MessManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the maximum amount of messes that can be spawned in at one time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessTimerLength_MetaData[] = {
		{ "Category", "MessManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the amount of time that it takes for the mess timer to tick\n" },
#endif
		{ "ModuleRelativePath", "MessManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the amount of time that it takes for the mess timer to tick" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessArray_MetaData[] = {
		{ "Category", "MessManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//an array of messes to be used\n" },
#endif
		{ "ModuleRelativePath", "MessManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "an array of messes to be used" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMessCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoftMessCap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HardMessCap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessTimerLength;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MessArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMessManager_MoveMessToPool, "MoveMessToPool" }, // 3261866289
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMessManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMessManager_Statics::NewProp_CurrentMessCount = { "CurrentMessCount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMessManager, CurrentMessCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMessCount_MetaData), NewProp_CurrentMessCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMessManager_Statics::NewProp_SoftMessCap = { "SoftMessCap", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMessManager, SoftMessCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftMessCap_MetaData), NewProp_SoftMessCap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMessManager_Statics::NewProp_HardMessCap = { "HardMessCap", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMessManager, HardMessCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardMessCap_MetaData), NewProp_HardMessCap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMessManager_Statics::NewProp_MessTimerLength = { "MessTimerLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMessManager, MessTimerLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessTimerLength_MetaData), NewProp_MessTimerLength_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMessManager_Statics::NewProp_MessArray_Inner = { "MessArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMess_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMessManager_Statics::NewProp_MessArray = { "MessArray", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMessManager, MessArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessArray_MetaData), NewProp_MessArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMessManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMessManager_Statics::NewProp_CurrentMessCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMessManager_Statics::NewProp_SoftMessCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMessManager_Statics::NewProp_HardMessCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMessManager_Statics::NewProp_MessTimerLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMessManager_Statics::NewProp_MessArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMessManager_Statics::NewProp_MessArray,
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
	FuncInfo,
	Z_Construct_UClass_AMessManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
// ********** End Class AMessManager ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_dunkl_OneDrive_Documents_GitHub_repos_Portfolio_Website_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_MessManager_h__Script_RetaleOfHorror_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMessManager, AMessManager::StaticClass, TEXT("AMessManager"), &Z_Registration_Info_UClass_AMessManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMessManager), 2035186045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dunkl_OneDrive_Documents_GitHub_repos_Portfolio_Website_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_MessManager_h__Script_RetaleOfHorror_3139688961(TEXT("/Script/RetaleOfHorror"),
	Z_CompiledInDeferFile_FID_Users_dunkl_OneDrive_Documents_GitHub_repos_Portfolio_Website_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_MessManager_h__Script_RetaleOfHorror_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dunkl_OneDrive_Documents_GitHub_repos_Portfolio_Website_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_MessManager_h__Script_RetaleOfHorror_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
