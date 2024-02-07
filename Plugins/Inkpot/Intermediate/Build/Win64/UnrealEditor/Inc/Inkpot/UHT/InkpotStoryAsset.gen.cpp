// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Asset/InkpotStoryAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotStoryAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryAsset();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References
	void UInkpotStoryAsset::StaticRegisterNativesUInkpotStoryAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotStoryAsset);
	UClass* Z_Construct_UClass_UInkpotStoryAsset_NoRegister()
	{
		return UInkpotStoryAsset::StaticClass();
	}
	struct Z_Construct_UClass_UInkpotStoryAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSON_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSON;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInkpotStoryAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStoryAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Asset/InkpotStoryAsset.h" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Inkpot|StoryAsset" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryAsset, Source), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_Source_MetaData), Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_Source_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_JSON_MetaData[] = {
		{ "Category", "Inkpot|StoryAsset" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryAsset, JSON), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_JSON_MetaData), Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_JSON_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Asset/InkpotStoryAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00420008000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryAsset, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_AssetImportData_MetaData), Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotStoryAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_JSON,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryAsset_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInkpotStoryAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotStoryAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotStoryAsset_Statics::ClassParams = {
		&UInkpotStoryAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInkpotStoryAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotStoryAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInkpotStoryAsset()
	{
		if (!Z_Registration_Info_UClass_UInkpotStoryAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotStoryAsset.OuterSingleton, Z_Construct_UClass_UInkpotStoryAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInkpotStoryAsset.OuterSingleton;
	}
	template<> INKPOT_API UClass* StaticClass<UInkpotStoryAsset>()
	{
		return UInkpotStoryAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotStoryAsset);
	UInkpotStoryAsset::~UInkpotStoryAsset() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInkpotStoryAsset)
#endif
	struct Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotStoryAsset, UInkpotStoryAsset::StaticClass, TEXT("UInkpotStoryAsset"), &Z_Registration_Info_UClass_UInkpotStoryAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotStoryAsset), 1499623224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_768702001(TEXT("/Script/Inkpot"),
		Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Asset_InkpotStoryAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
