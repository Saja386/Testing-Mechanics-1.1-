// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Testing_Mechanic_1/Public/EnemyBaseAiController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBaseAiController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
TESTING_MECHANIC_1_API UClass* Z_Construct_UClass_AEnemyBaseAiController();
TESTING_MECHANIC_1_API UClass* Z_Construct_UClass_AEnemyBaseAiController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Testing_Mechanic_1();
// End Cross Module References

// Begin Class AEnemyBaseAiController
void AEnemyBaseAiController::StaticRegisterNativesAEnemyBaseAiController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyBaseAiController);
UClass* Z_Construct_UClass_AEnemyBaseAiController_NoRegister()
{
	return AEnemyBaseAiController::StaticClass();
}
struct Z_Construct_UClass_AEnemyBaseAiController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyBaseAiController.h" },
		{ "ModuleRelativePath", "Public/EnemyBaseAiController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBaseAiController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemyBaseAiController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Testing_Mechanic_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBaseAiController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBaseAiController_Statics::ClassParams = {
	&AEnemyBaseAiController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBaseAiController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyBaseAiController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyBaseAiController()
{
	if (!Z_Registration_Info_UClass_AEnemyBaseAiController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyBaseAiController.OuterSingleton, Z_Construct_UClass_AEnemyBaseAiController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyBaseAiController.OuterSingleton;
}
template<> TESTING_MECHANIC_1_API UClass* StaticClass<AEnemyBaseAiController>()
{
	return AEnemyBaseAiController::StaticClass();
}
AEnemyBaseAiController::AEnemyBaseAiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyBaseAiController);
AEnemyBaseAiController::~AEnemyBaseAiController() {}
// End Class AEnemyBaseAiController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_EnemyBaseAiController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyBaseAiController, AEnemyBaseAiController::StaticClass, TEXT("AEnemyBaseAiController"), &Z_Registration_Info_UClass_AEnemyBaseAiController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyBaseAiController), 3418020500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_EnemyBaseAiController_h_3721419898(TEXT("/Script/Testing_Mechanic_1"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_EnemyBaseAiController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_EnemyBaseAiController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
