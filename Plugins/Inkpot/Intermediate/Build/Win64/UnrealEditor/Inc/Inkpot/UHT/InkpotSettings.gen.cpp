// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Settings/InkpotSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotSettings();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References
	void UInkpotSettings::StaticRegisterNativesUInkpotSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotSettings);
	UClass* Z_Construct_UClass_UInkpotSettings_NoRegister()
	{
		return UInkpotSettings::StaticClass();
	}
	struct Z_Construct_UClass_UInkpotSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugLog_MetaData[];
#endif
		static void NewProp_bDebugLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReloadIfAssetChanged_MetaData[];
#endif
		static void NewProp_bReloadIfAssetChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReloadIfAssetChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplayIfReloaded_MetaData[];
#endif
		static void NewProp_bReplayIfReloaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplayIfReloaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInkpotSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
		(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Inkpot Settings" },
		{ "IncludePath", "Settings/InkpotSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/InkpotSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bDebugLog_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n\x09Show Inkpot debug log or not.\n\x09*/" },
#endif
		{ "ConsoleVariable", "Inkpot.DebugLog" },
		{ "ModuleRelativePath", "Public/Settings/InkpotSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show Inkpot debug log or not." },
#endif
	};
#endif
	void Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bDebugLog_SetBit(void* Obj)
	{
		((UInkpotSettings*)Obj)->bDebugLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bDebugLog = { "bDebugLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInkpotSettings), &Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bDebugLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bDebugLog_MetaData), Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bDebugLog_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bReloadIfAssetChanged_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n\x09Should the story be reloaded if the story asset has been updated at runtime.\n\x09This will cause the story to reset.\n\x09*/" },
#endif
		{ "ConsoleVariable", "Inkpot.ReloadIfAssetChanged" },
		{ "ModuleRelativePath", "Public/Settings/InkpotSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the story be reloaded if the story asset has been updated at runtime.\nThis will cause the story to reset." },
#endif
	};
#endif
	void Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bReloadIfAssetChanged_SetBit(void* Obj)
	{
		((UInkpotSettings*)Obj)->bReloadIfAssetChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bReloadIfAssetChanged = { "bReloadIfAssetChanged", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInkpotSettings), &Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bReloadIfAssetChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bReloadIfAssetChanged_MetaData), Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bReloadIfAssetChanged_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bReplayIfReloaded_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n\x09If a reload occurs should Inkpot replay the story.\n\x09*/" },
#endif
		{ "ConsoleVariable", "Inkpot.ReplayIfReloaded" },
		{ "EditCondition", "bReloadIfAssetChanged" },
		{ "ModuleRelativePath", "Public/Settings/InkpotSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If a reload occurs should Inkpot replay the story." },
#endif
	};
#endif
	void Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bReplayIfReloaded_SetBit(void* Obj)
	{
		((UInkpotSettings*)Obj)->bReplayIfReloaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bReplayIfReloaded = { "bReplayIfReloaded", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInkpotSettings), &Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bReplayIfReloaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bReplayIfReloaded_MetaData), Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bReplayIfReloaded_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bDebugLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bReloadIfAssetChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotSettings_Statics::NewProp_bReplayIfReloaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInkpotSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotSettings_Statics::ClassParams = {
		&UInkpotSettings::StaticClass,
		"Inkpot",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInkpotSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInkpotSettings()
	{
		if (!Z_Registration_Info_UClass_UInkpotSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotSettings.OuterSingleton, Z_Construct_UClass_UInkpotSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInkpotSettings.OuterSingleton;
	}
	template<> INKPOT_API UClass* StaticClass<UInkpotSettings>()
	{
		return UInkpotSettings::StaticClass();
	}
	UInkpotSettings::UInkpotSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotSettings);
	UInkpotSettings::~UInkpotSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotSettings, UInkpotSettings::StaticClass, TEXT("UInkpotSettings"), &Z_Registration_Info_UClass_UInkpotSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotSettings), 4182806095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h_1364247720(TEXT("/Script/Inkpot"),
		Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Settings_InkpotSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
