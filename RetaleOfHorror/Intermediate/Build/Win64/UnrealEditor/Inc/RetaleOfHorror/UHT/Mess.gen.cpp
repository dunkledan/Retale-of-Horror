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
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoolingLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMess_Statics::NewProp_PoolingLocation = { "PoolingLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMess, PoolingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolingLocation_MetaData), NewProp_PoolingLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMess_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMess, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMess_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMess, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMess_Statics::NewProp_PoolingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMess_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMess_Statics::NewProp_Mesh,
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
	nullptr,
	Z_Construct_UClass_AMess_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
struct Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_Mess_h__Script_RetaleOfHorror_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMess, AMess::StaticClass, TEXT("AMess"), &Z_Registration_Info_UClass_AMess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMess), 1341861010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_Mess_h__Script_RetaleOfHorror_434881731(TEXT("/Script/RetaleOfHorror"),
	Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_Mess_h__Script_RetaleOfHorror_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Gaming_Documents_GitHub_Retale_of_Horror_RetaleOfHorror_Source_RetaleOfHorror_Mess_h__Script_RetaleOfHorror_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
