// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Testing_Mechanic_1/Main_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMain_Player() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TESTING_MECHANIC_1_API UClass* Z_Construct_UClass_AMain_Player();
TESTING_MECHANIC_1_API UClass* Z_Construct_UClass_AMain_Player_NoRegister();
UPackage* Z_Construct_UPackage__Script_Testing_Mechanic_1();
// End Cross Module References

// Begin Class AMain_Player
void AMain_Player::StaticRegisterNativesAMain_Player()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMain_Player);
UClass* Z_Construct_UClass_AMain_Player_NoRegister()
{
	return AMain_Player::StaticClass();
}
struct Z_Construct_UClass_AMain_Player_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Main_Player.h" },
		{ "ModuleRelativePath", "Main_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterMovementComponent_MetaData[] = {
		{ "Category", "Main_Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Main_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Main_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Main_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Main_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BWantToRunInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Main_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Main_Player.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacterMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BWantToRunInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeInputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMain_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMain_Player_Statics::NewProp_PlayerCharacterMovementComponent = { "PlayerCharacterMovementComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMain_Player, PlayerCharacterMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacterMovementComponent_MetaData), NewProp_PlayerCharacterMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMain_Player_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMain_Player, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMain_Player_Statics::NewProp_MovementInputAction = { "MovementInputAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMain_Player, MovementInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementInputAction_MetaData), NewProp_MovementInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMain_Player_Statics::NewProp_CameraInputAction = { "CameraInputAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMain_Player, CameraInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraInputAction_MetaData), NewProp_CameraInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMain_Player_Statics::NewProp_BWantToRunInputAction = { "BWantToRunInputAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMain_Player, BWantToRunInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BWantToRunInputAction_MetaData), NewProp_BWantToRunInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMain_Player_Statics::NewProp_DodgeInputAction = { "DodgeInputAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMain_Player, DodgeInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeInputAction_MetaData), NewProp_DodgeInputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMain_Player_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Player_Statics::NewProp_PlayerCharacterMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Player_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Player_Statics::NewProp_MovementInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Player_Statics::NewProp_CameraInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Player_Statics::NewProp_BWantToRunInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_Player_Statics::NewProp_DodgeInputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Player_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMain_Player_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Testing_Mechanic_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Player_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMain_Player_Statics::ClassParams = {
	&AMain_Player::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMain_Player_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Player_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMain_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_AMain_Player_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMain_Player()
{
	if (!Z_Registration_Info_UClass_AMain_Player.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMain_Player.OuterSingleton, Z_Construct_UClass_AMain_Player_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMain_Player.OuterSingleton;
}
template<> TESTING_MECHANIC_1_API UClass* StaticClass<AMain_Player>()
{
	return AMain_Player::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMain_Player);
AMain_Player::~AMain_Player() {}
// End Class AMain_Player

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Main_Player_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMain_Player, AMain_Player::StaticClass, TEXT("AMain_Player"), &Z_Registration_Info_UClass_AMain_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMain_Player), 830420377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Main_Player_h_2401268673(TEXT("/Script/Testing_Mechanic_1"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Main_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Main_Player_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
