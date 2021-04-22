// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheRitual/VRCPPPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCPPPawn() {}
// Cross Module References
	THERITUAL_API UClass* Z_Construct_UClass_AVRCPPPawn_NoRegister();
	THERITUAL_API UClass* Z_Construct_UClass_AVRCPPPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TheRitual();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AVRCPPPawn::StaticRegisterNativesAVRCPPPawn()
	{
	}
	UClass* Z_Construct_UClass_AVRCPPPawn_NoRegister()
	{
		return AVRCPPPawn::StaticClass();
	}
	struct Z_Construct_UClass_AVRCPPPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRTrackingCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRTrackingCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outputText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outputText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_snapTurnAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_snapTurnAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_jumpTeleportForwardDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_jumpTeleportForwardDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_smoothTurnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_smoothTurnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_smoothWalkingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_smoothWalkingSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRCPPPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TheRitual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCPPPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VRCPPPawn.h" },
		{ "ModuleRelativePath", "VRCPPPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_VRTrackingCenter_MetaData[] = {
		{ "Category", "__hide" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCPPPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_VRTrackingCenter = { "VRTrackingCenter", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCPPPawn, VRTrackingCenter), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_VRTrackingCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_VRTrackingCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "__hide" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCPPPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCPPPawn, Head), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_outputText_MetaData[] = {
		{ "Category", "__hide" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCPPPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_outputText = { "outputText", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCPPPawn, outputText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_outputText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_outputText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_LeftController_MetaData[] = {
		{ "Category", "__hide" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCPPPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_LeftController = { "LeftController", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCPPPawn, LeftController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_LeftController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_LeftController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_RightController_MetaData[] = {
		{ "Category", "__hide" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCPPPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_RightController = { "RightController", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCPPPawn, RightController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_RightController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_RightController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_LeftHand_MetaData[] = {
		{ "Category", "__hide" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCPPPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCPPPawn, LeftHand), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_LeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_LeftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_RightHand_MetaData[] = {
		{ "Category", "__hide" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCPPPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCPPPawn, RightHand), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_RightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_RightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_snapTurnAngle_MetaData[] = {
		{ "Category", "__locomotion" },
		{ "ModuleRelativePath", "VRCPPPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_snapTurnAngle = { "snapTurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCPPPawn, snapTurnAngle), METADATA_PARAMS(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_snapTurnAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_snapTurnAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_jumpTeleportForwardDistance_MetaData[] = {
		{ "Category", "__locomotion" },
		{ "ModuleRelativePath", "VRCPPPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_jumpTeleportForwardDistance = { "jumpTeleportForwardDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCPPPawn, jumpTeleportForwardDistance), METADATA_PARAMS(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_jumpTeleportForwardDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_jumpTeleportForwardDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_smoothTurnSpeed_MetaData[] = {
		{ "Category", "__locomotion" },
		{ "ModuleRelativePath", "VRCPPPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_smoothTurnSpeed = { "smoothTurnSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCPPPawn, smoothTurnSpeed), METADATA_PARAMS(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_smoothTurnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_smoothTurnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_smoothWalkingSpeed_MetaData[] = {
		{ "Category", "__locomotion" },
		{ "ModuleRelativePath", "VRCPPPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_smoothWalkingSpeed = { "smoothWalkingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCPPPawn, smoothWalkingSpeed), METADATA_PARAMS(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_smoothWalkingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_smoothWalkingSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRCPPPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_VRTrackingCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_Head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_outputText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_LeftController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_RightController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_LeftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_RightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_snapTurnAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_jumpTeleportForwardDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_smoothTurnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCPPPawn_Statics::NewProp_smoothWalkingSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRCPPPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRCPPPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRCPPPawn_Statics::ClassParams = {
		&AVRCPPPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVRCPPPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVRCPPPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVRCPPPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCPPPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRCPPPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRCPPPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRCPPPawn, 3917767840);
	template<> THERITUAL_API UClass* StaticClass<AVRCPPPawn>()
	{
		return AVRCPPPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRCPPPawn(Z_Construct_UClass_AVRCPPPawn, &AVRCPPPawn::StaticClass, TEXT("/Script/TheRitual"), TEXT("AVRCPPPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRCPPPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
