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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
RETALEOFHORROR_API UClass* Z_Construct_UClass_AMess();
RETALEOFHORROR_API UClass* Z_Construct_UClass_AMess_NoRegister();
RETALEOFHORROR_API UFunction* Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_RetaleOfHorror();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnMessCleaned ********************************************************
struct Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature_Statics
{
	struct _Script_RetaleOfHorror_eventOnMessCleaned_Parms
	{
		AMess* Mess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mess.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature_Statics::NewProp_Mess = { "Mess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RetaleOfHorror_eventOnMessCleaned_Parms, Mess), Z_Construct_UClass_AMess_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature_Statics::NewProp_Mess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RetaleOfHorror, nullptr, "OnMessCleaned__DelegateSignature", Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature_Statics::_Script_RetaleOfHorror_eventOnMessCleaned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature_Statics::_Script_RetaleOfHorror_eventOnMessCleaned_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMessCleaned_DelegateWrapper(const FMulticastScriptDelegate& OnMessCleaned, AMess* Mess)
{
	struct _Script_RetaleOfHorror_eventOnMessCleaned_Parms
	{
		AMess* Mess;
	};
	_Script_RetaleOfHorror_eventOnMessCleaned_Parms Parms;
	Parms.Mess=Mess;
	OnMessCleaned.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMessCleaned **********************************************************

// ********** Begin Class AMess Function CleanMess *************************************************
struct Z_Construct_UFunction_AMess_CleanMess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mess.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMess_CleanMess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMess, nullptr, "CleanMess", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMess_CleanMess_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMess_CleanMess_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMess_CleanMess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMess_CleanMess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMess::execCleanMess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanMess();
	P_NATIVE_END;
}
// ********** End Class AMess Function CleanMess ***************************************************

// ********** Begin Class AMess ********************************************************************
void AMess::StaticRegisterNativesAMess()
{
	UClass* Class = AMess::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CleanMess", &AMess::execCleanMess },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolingLocation_MetaData[] = {
		{ "Category", "Mess" },
		{ "ModuleRelativePath", "Mess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "Mess" },
		{ "ModuleRelativePath", "Mess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Mess" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Mess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMessCleaned_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//mess cleaning messaging\n" },
#endif
		{ "ModuleRelativePath", "Mess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mess cleaning messaging" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoolingLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessCleaned;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMess_CleanMess, "CleanMess" }, // 1834494535
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMess_Statics::NewProp_PoolingLocation = { "PoolingLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMess, PoolingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolingLocation_MetaData), NewProp_PoolingLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMess_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMess, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMess_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMess, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMess_Statics::NewProp_OnMessCleaned = { "OnMessCleaned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMess, OnMessCleaned), Z_Construct_UDelegateFunction_RetaleOfHorror_OnMessCleaned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMessCleaned_MetaData), NewProp_OnMessCleaned_MetaData) }; // 2836654357
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMess_Statics::NewProp_PoolingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMess_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMess_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMess_Statics::NewProp_OnMessCleaned,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMess_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AMess_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMess_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_Users_dunkl_OneDrive_Documents_GitHub_repos_Portfolio_Website_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_Mess_h__Script_RetaleOfHorror_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMess, AMess::StaticClass, TEXT("AMess"), &Z_Registration_Info_UClass_AMess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMess), 3465019334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dunkl_OneDrive_Documents_GitHub_repos_Portfolio_Website_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_Mess_h__Script_RetaleOfHorror_3584060398(TEXT("/Script/RetaleOfHorror"),
	Z_CompiledInDeferFile_FID_Users_dunkl_OneDrive_Documents_GitHub_repos_Portfolio_Website_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_Mess_h__Script_RetaleOfHorror_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dunkl_OneDrive_Documents_GitHub_repos_Portfolio_Website_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_Mess_h__Script_RetaleOfHorror_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
