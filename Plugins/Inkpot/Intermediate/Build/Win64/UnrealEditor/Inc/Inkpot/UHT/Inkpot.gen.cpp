// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Inkpot/Inkpot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpot() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	INKPOT_API UClass* Z_Construct_UClass_UInkpot();
	INKPOT_API UClass* Z_Construct_UClass_UInkpot_NoRegister();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotStories_NoRegister();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryAsset_NoRegister();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature_Statics
	{
		struct _Script_Inkpot_eventOnStoryBegin_Parms
		{
			UInkpotStory* Story;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnStoryBegin_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature_Statics::NewProp_Story,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/Inkpot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnStoryBegin__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStoryBegin_DelegateWrapper(const FMulticastScriptDelegate& OnStoryBegin, UInkpotStory* Story)
{
	struct _Script_Inkpot_eventOnStoryBegin_Parms
	{
		UInkpotStory* Story;
	};
	_Script_Inkpot_eventOnStoryBegin_Parms Parms;
	Parms.Story=Story;
	OnStoryBegin.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature_Statics
	{
		struct _Script_Inkpot_eventOnStoryEnd_Parms
		{
			UInkpotStory* Story;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnStoryEnd_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature_Statics::NewProp_Story,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/Inkpot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnStoryEnd__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStoryEnd_DelegateWrapper(const FMulticastScriptDelegate& OnStoryEnd, UInkpotStory* Story)
{
	struct _Script_Inkpot_eventOnStoryEnd_Parms
	{
		UInkpotStory* Story;
	};
	_Script_Inkpot_eventOnStoryEnd_Parms Parms;
	Parms.Story=Story;
	OnStoryEnd.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UInkpot::execEndStory)
	{
		P_GET_OBJECT(UInkpotStory,Z_Param_InkpotStory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndStory(Z_Param_InkpotStory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpot::execBeginStory)
	{
		P_GET_OBJECT(UInkpotStoryAsset,Z_Param_InkpotStoryAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInkpotStory**)Z_Param__Result=P_THIS->BeginStory(Z_Param_InkpotStoryAsset);
		P_NATIVE_END;
	}
	void UInkpot::StaticRegisterNativesUInkpot()
	{
		UClass* Class = UInkpot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginStory", &UInkpot::execBeginStory },
			{ "EndStory", &UInkpot::execEndStory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInkpot_BeginStory_Statics
	{
		struct Inkpot_eventBeginStory_Parms
		{
			UInkpotStoryAsset* InkpotStoryAsset;
			UInkpotStory* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InkpotStoryAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpot_BeginStory_Statics::NewProp_InkpotStoryAsset = { "InkpotStoryAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inkpot_eventBeginStory_Parms, InkpotStoryAsset), Z_Construct_UClass_UInkpotStoryAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpot_BeginStory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inkpot_eventBeginStory_Parms, ReturnValue), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpot_BeginStory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpot_BeginStory_Statics::NewProp_InkpotStoryAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpot_BeginStory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpot_BeginStory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot" },
		{ "ModuleRelativePath", "Public/Inkpot/Inkpot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpot_BeginStory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpot, nullptr, "BeginStory", nullptr, nullptr, Z_Construct_UFunction_UInkpot_BeginStory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpot_BeginStory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpot_BeginStory_Statics::Inkpot_eventBeginStory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpot_BeginStory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpot_BeginStory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpot_BeginStory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpot_BeginStory_Statics::Inkpot_eventBeginStory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpot_BeginStory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpot_BeginStory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpot_EndStory_Statics
	{
		struct Inkpot_eventEndStory_Parms
		{
			UInkpotStory* InkpotStory;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InkpotStory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpot_EndStory_Statics::NewProp_InkpotStory = { "InkpotStory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inkpot_eventEndStory_Parms, InkpotStory), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpot_EndStory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpot_EndStory_Statics::NewProp_InkpotStory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpot_EndStory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot" },
		{ "ModuleRelativePath", "Public/Inkpot/Inkpot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpot_EndStory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpot, nullptr, "EndStory", nullptr, nullptr, Z_Construct_UFunction_UInkpot_EndStory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpot_EndStory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpot_EndStory_Statics::Inkpot_eventEndStory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpot_EndStory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpot_EndStory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpot_EndStory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpot_EndStory_Statics::Inkpot_eventEndStory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpot_EndStory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpot_EndStory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpot);
	UClass* Z_Construct_UClass_UInkpot_NoRegister()
	{
		return UInkpot::StaticClass();
	}
	struct Z_Construct_UClass_UInkpot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventOnStoryBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnStoryBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventOnStoryEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnStoryEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stories_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Stories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInkpot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpot_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInkpot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpot_BeginStory, "BeginStory" }, // 3750495416
		{ &Z_Construct_UFunction_UInkpot_EndStory, "EndStory" }, // 2369728481
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpot_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inkpot/Inkpot.h" },
		{ "ModuleRelativePath", "Public/Inkpot/Inkpot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpot_Statics::NewProp_EventOnStoryBegin_MetaData[] = {
		{ "Category", "Inkpot" },
		{ "DisplayName", "On Story Begin" },
		{ "ModuleRelativePath", "Public/Inkpot/Inkpot.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpot_Statics::NewProp_EventOnStoryBegin = { "EventOnStoryBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpot, EventOnStoryBegin), Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpot_Statics::NewProp_EventOnStoryBegin_MetaData), Z_Construct_UClass_UInkpot_Statics::NewProp_EventOnStoryBegin_MetaData) }; // 1156735185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpot_Statics::NewProp_EventOnStoryEnd_MetaData[] = {
		{ "Category", "Inkpot" },
		{ "DisplayName", "On Story End" },
		{ "ModuleRelativePath", "Public/Inkpot/Inkpot.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpot_Statics::NewProp_EventOnStoryEnd = { "EventOnStoryEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpot, EventOnStoryEnd), Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpot_Statics::NewProp_EventOnStoryEnd_MetaData), Z_Construct_UClass_UInkpot_Statics::NewProp_EventOnStoryEnd_MetaData) }; // 1156735185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpot_Statics::NewProp_Stories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/Inkpot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInkpot_Statics::NewProp_Stories = { "Stories", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpot, Stories), Z_Construct_UClass_UInkpotStories_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpot_Statics::NewProp_Stories_MetaData), Z_Construct_UClass_UInkpot_Statics::NewProp_Stories_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpot_Statics::NewProp_EventOnStoryBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpot_Statics::NewProp_EventOnStoryEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpot_Statics::NewProp_Stories,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInkpot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpot_Statics::ClassParams = {
		&UInkpot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInkpot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInkpot_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpot_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpot_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpot_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInkpot()
	{
		if (!Z_Registration_Info_UClass_UInkpot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpot.OuterSingleton, Z_Construct_UClass_UInkpot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInkpot.OuterSingleton;
	}
	template<> INKPOT_API UClass* StaticClass<UInkpot>()
	{
		return UInkpot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpot);
	UInkpot::~UInkpot() {}
	struct Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInkpot, UInkpot::StaticClass, TEXT("UInkpot"), &Z_Registration_Info_UClass_UInkpot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpot), 1777370751U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_3320205874(TEXT("/Script/Inkpot"),
		Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_Inkpot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
