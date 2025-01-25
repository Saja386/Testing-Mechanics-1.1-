// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Testing_Mechanic_1/Testing_Mechanic_1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTesting_Mechanic_1GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TESTING_MECHANIC_1_API UClass* Z_Construct_UClass_ATesting_Mechanic_1GameMode();
TESTING_MECHANIC_1_API UClass* Z_Construct_UClass_ATesting_Mechanic_1GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Testing_Mechanic_1();
// End Cross Module References

// Begin Class ATesting_Mechanic_1GameMode
void ATesting_Mechanic_1GameMode::StaticRegisterNativesATesting_Mechanic_1GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATesting_Mechanic_1GameMode);
UClass* Z_Construct_UClass_ATesting_Mechanic_1GameMode_NoRegister()
{
	return ATesting_Mechanic_1GameMode::StaticClass();
}
struct Z_Construct_UClass_ATesting_Mechanic_1GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Testing_Mechanic_1GameMode.h" },
		{ "ModuleRelativePath", "Testing_Mechanic_1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATesting_Mechanic_1GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATesting_Mechanic_1GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Testing_Mechanic_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATesting_Mechanic_1GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATesting_Mechanic_1GameMode_Statics::ClassParams = {
	&ATesting_Mechanic_1GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATesting_Mechanic_1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATesting_Mechanic_1GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATesting_Mechanic_1GameMode()
{
	if (!Z_Registration_Info_UClass_ATesting_Mechanic_1GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATesting_Mechanic_1GameMode.OuterSingleton, Z_Construct_UClass_ATesting_Mechanic_1GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATesting_Mechanic_1GameMode.OuterSingleton;
}
template<> TESTING_MECHANIC_1_API UClass* StaticClass<ATesting_Mechanic_1GameMode>()
{
	return ATesting_Mechanic_1GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATesting_Mechanic_1GameMode);
ATesting_Mechanic_1GameMode::~ATesting_Mechanic_1GameMode() {}
// End Class ATesting_Mechanic_1GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Testing_Mechanic_1GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATesting_Mechanic_1GameMode, ATesting_Mechanic_1GameMode::StaticClass, TEXT("ATesting_Mechanic_1GameMode"), &Z_Registration_Info_UClass_ATesting_Mechanic_1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATesting_Mechanic_1GameMode), 3919675181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Testing_Mechanic_1GameMode_h_3497622912(TEXT("/Script/Testing_Mechanic_1"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Testing_Mechanic_1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Testing_Mechanic_1GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
