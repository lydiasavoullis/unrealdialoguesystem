// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Inkpot/InkpotLine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotLine() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotLine();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotLine_NoRegister();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References
	DEFINE_FUNCTION(UInkpotLine::execGetStory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInkpotStory**)Z_Param__Result=P_THIS->GetStory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLine::execGetText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLine::execGetString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetString();
		P_NATIVE_END;
	}
	void UInkpotLine::StaticRegisterNativesUInkpotLine()
	{
		UClass* Class = UInkpotLine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStory", &UInkpotLine::execGetStory },
			{ "GetString", &UInkpotLine::execGetString },
			{ "GetText", &UInkpotLine::execGetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInkpotLine_GetStory_Statics
	{
		struct InkpotLine_eventGetStory_Parms
		{
			UInkpotStory* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotLine_GetStory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLine_eventGetStory_Parms, ReturnValue), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLine_GetStory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLine_GetStory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLine_GetStory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Line" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLine_GetStory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLine, nullptr, "GetStory", nullptr, nullptr, Z_Construct_UFunction_UInkpotLine_GetStory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetStory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLine_GetStory_Statics::InkpotLine_eventGetStory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetStory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLine_GetStory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetStory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLine_GetStory_Statics::InkpotLine_eventGetStory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLine_GetStory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLine_GetStory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLine_GetString_Statics
	{
		struct InkpotLine_eventGetString_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLine_GetString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotLine_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLine_eventGetString_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetString_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UInkpotLine_GetString_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLine_GetString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLine_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLine_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Line" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLine_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLine, nullptr, "GetString", nullptr, nullptr, Z_Construct_UFunction_UInkpotLine_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLine_GetString_Statics::InkpotLine_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLine_GetString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLine_GetString_Statics::InkpotLine_eventGetString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLine_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLine_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLine_GetText_Statics
	{
		struct InkpotLine_eventGetText_Parms
		{
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLine_GetText_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInkpotLine_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLine_eventGetText_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetText_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UInkpotLine_GetText_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLine_GetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLine_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLine_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Line" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLine_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLine, nullptr, "GetText", nullptr, nullptr, Z_Construct_UFunction_UInkpotLine_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLine_GetText_Statics::InkpotLine_eventGetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLine_GetText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLine_GetText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLine_GetText_Statics::InkpotLine_eventGetText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLine_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLine_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotLine);
	UClass* Z_Construct_UClass_UInkpotLine_NoRegister()
	{
		return UInkpotLine::StaticClass();
	}
	struct Z_Construct_UClass_UInkpotLine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInkpotLine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLine_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInkpotLine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotLine_GetStory, "GetStory" }, // 3814405979
		{ &Z_Construct_UFunction_UInkpotLine_GetString, "GetString" }, // 725291978
		{ &Z_Construct_UFunction_UInkpotLine_GetText, "GetText" }, // 694653236
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLine_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotLine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inkpot/InkpotLine.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotLine_Statics::NewProp_String_MetaData[] = {
		{ "Category", "Inkpot|Line" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInkpotLine_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotLine, String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLine_Statics::NewProp_String_MetaData), Z_Construct_UClass_UInkpotLine_Statics::NewProp_String_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotLine_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Inkpot|Line" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotLine.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInkpotLine_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotLine, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLine_Statics::NewProp_Text_MetaData), Z_Construct_UClass_UInkpotLine_Statics::NewProp_Text_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotLine_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotLine_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInkpotLine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotLine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotLine_Statics::ClassParams = {
		&UInkpotLine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInkpotLine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLine_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLine_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotLine_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLine_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInkpotLine()
	{
		if (!Z_Registration_Info_UClass_UInkpotLine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotLine.OuterSingleton, Z_Construct_UClass_UInkpotLine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInkpotLine.OuterSingleton;
	}
	template<> INKPOT_API UClass* StaticClass<UInkpotLine>()
	{
		return UInkpotLine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotLine);
	UInkpotLine::~UInkpotLine() {}
	struct Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotLine, UInkpotLine::StaticClass, TEXT("UInkpotLine"), &Z_Registration_Info_UClass_UInkpotLine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotLine), 1478930368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_2149903794(TEXT("/Script/Inkpot"),
		Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotLine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
