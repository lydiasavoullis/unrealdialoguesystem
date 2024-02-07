// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Inkpot/InkpotStory.h"
#include "Inkpot/Public/Inkpot/InkpotValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotStory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotChoice_NoRegister();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotLine_NoRegister();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotStory();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature();
	INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue();
	UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics
	{
		struct _Script_Inkpot_eventOnStoryContinue_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnStoryContinue_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::NewProp_Story,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnStoryContinue__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryContinue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryContinue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStoryContinue_DelegateWrapper(const FMulticastScriptDelegate& OnStoryContinue, UInkpotStory* Story)
{
	struct _Script_Inkpot_eventOnStoryContinue_Parms
	{
		UInkpotStory* Story;
	};
	_Script_Inkpot_eventOnStoryContinue_Parms Parms;
	Parms.Story=Story;
	OnStoryContinue.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics
	{
		struct _Script_Inkpot_eventOnMakeChoice_Parms
		{
			UInkpotStory* Story;
			UInkpotChoice* Choice;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Choice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnMakeChoice_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnMakeChoice_Parms, Choice), Z_Construct_UClass_UInkpotChoice_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::NewProp_Story,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::NewProp_Choice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnMakeChoice__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::_Script_Inkpot_eventOnMakeChoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::_Script_Inkpot_eventOnMakeChoice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMakeChoice_DelegateWrapper(const FMulticastScriptDelegate& OnMakeChoice, UInkpotStory* Story, UInkpotChoice* Choice)
{
	struct _Script_Inkpot_eventOnMakeChoice_Parms
	{
		UInkpotStory* Story;
		UInkpotChoice* Choice;
	};
	_Script_Inkpot_eventOnMakeChoice_Parms Parms;
	Parms.Story=Story;
	Parms.Choice=Choice;
	OnMakeChoice.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics
	{
		struct _Script_Inkpot_eventOnChoosePath_Parms
		{
			UInkpotStory* Story;
			FString Path;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnChoosePath_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnChoosePath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Path_MetaData), Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Path_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Story,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnChoosePath__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::_Script_Inkpot_eventOnChoosePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::_Script_Inkpot_eventOnChoosePath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnChoosePath_DelegateWrapper(const FMulticastScriptDelegate& OnChoosePath, UInkpotStory* Story, const FString& Path)
{
	struct _Script_Inkpot_eventOnChoosePath_Parms
	{
		UInkpotStory* Story;
		FString Path;
	};
	_Script_Inkpot_eventOnChoosePath_Parms Parms;
	Parms.Story=Story;
	Parms.Path=Path;
	OnChoosePath.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics
	{
		struct _Script_Inkpot_eventOnSwitchFlow_Parms
		{
			UInkpotStory* Story;
			FString Flow;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flow_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Flow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnSwitchFlow_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Flow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Flow = { "Flow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnSwitchFlow_Parms, Flow), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Flow_MetaData), Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Flow_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Story,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::NewProp_Flow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnSwitchFlow__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::_Script_Inkpot_eventOnSwitchFlow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::_Script_Inkpot_eventOnSwitchFlow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSwitchFlow_DelegateWrapper(const FMulticastScriptDelegate& OnSwitchFlow, UInkpotStory* Story, const FString& Flow)
{
	struct _Script_Inkpot_eventOnSwitchFlow_Parms
	{
		UInkpotStory* Story;
		FString Flow;
	};
	_Script_Inkpot_eventOnSwitchFlow_Parms Parms;
	Parms.Story=Story;
	Parms.Flow=Flow;
	OnSwitchFlow.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics
	{
		struct _Script_Inkpot_eventOnInkpotVariableChange_Parms
		{
			UInkpotStory* Story;
			FString Variable;
			FInkpotValue NewValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Story;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnInkpotVariableChange_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnInkpotVariableChange_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Variable_MetaData), Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Variable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnInkpotVariableChange_Parms, NewValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_NewValue_MetaData), Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_NewValue_MetaData) }; // 3181431869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Story,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnInkpotVariableChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::_Script_Inkpot_eventOnInkpotVariableChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::_Script_Inkpot_eventOnInkpotVariableChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInkpotVariableChange_DelegateWrapper(const FScriptDelegate& OnInkpotVariableChange, UInkpotStory* Story, const FString& Variable, FInkpotValue const& NewValue)
{
	struct _Script_Inkpot_eventOnInkpotVariableChange_Parms
	{
		UInkpotStory* Story;
		FString Variable;
		FInkpotValue NewValue;
	};
	_Script_Inkpot_eventOnInkpotVariableChange_Parms Parms;
	Parms.Story=Story;
	Parms.Variable=Variable;
	Parms.NewValue=NewValue;
	OnInkpotVariableChange.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics
	{
		struct _Script_Inkpot_eventInkpotExternalFunction_Parms
		{
			TArray<FInkpotValue> Values;
			FInkpotValue ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventInkpotExternalFunction_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values_MetaData), Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values_MetaData) }; // 3181431869
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventInkpotExternalFunction_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "InkpotExternalFunction__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::_Script_Inkpot_eventInkpotExternalFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::_Script_Inkpot_eventInkpotExternalFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
FInkpotValue FInkpotExternalFunction_DelegateWrapper(const FScriptDelegate& InkpotExternalFunction, TArray<FInkpotValue> const& Values)
{
	struct _Script_Inkpot_eventInkpotExternalFunction_Parms
	{
		TArray<FInkpotValue> Values;
		FInkpotValue ReturnValue;
	};
	_Script_Inkpot_eventInkpotExternalFunction_Parms Parms;
	Parms.Values=Values;
	InkpotExternalFunction.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
	struct Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics
	{
		struct _Script_Inkpot_eventOnStoryLoadJSON_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Inkpot_eventOnStoryLoadJSON_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::NewProp_Story,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Inkpot, nullptr, "OnStoryLoadJSON__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryLoadJSON_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::_Script_Inkpot_eventOnStoryLoadJSON_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStoryLoadJSON_DelegateWrapper(const FMulticastScriptDelegate& OnStoryLoadJSON, UInkpotStory* Story)
{
	struct _Script_Inkpot_eventOnStoryLoadJSON_Parms
	{
		UInkpotStory* Story;
	};
	_Script_Inkpot_eventOnStoryLoadJSON_Parms Parms;
	Parms.Story=Story;
	OnStoryLoadJSON.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UInkpotStory::execLoadJSON)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InJSON);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadJSON(Z_Param_InJSON);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execToJSON)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToJSON();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execUnbindExternalFunction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindExternalFunction(Z_Param_FunctionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execBindExternalFunction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Function);
		P_GET_UBOOL(Z_Param_bLookAheadSafe);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindExternalFunction(Z_Param_FunctionName,FInkpotExternalFunction(Z_Param_Function),Z_Param_bLookAheadSafe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetNamedContentForPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetNamedContentForPath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetNamedContentForKnot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_KnotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetNamedContentForKnot(Z_Param_KnotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetNamedContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetNamedContent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execClearVariableChange)
	{
		P_GET_OBJECT(UObject,Z_Param_Owner);
		P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearVariableChange(Z_Param_Owner,Z_Param_Variable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execSetOnVariableChange)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnVariableChange(FOnInkpotVariableChange(Z_Param_Delegate),Z_Param_Variable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execSetEmpty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmpty(Z_Param_Variable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetString(Z_Param_Variable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execSetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetString(Z_Param_Variable,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloat(Z_Param_Variable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execSetFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloat(Z_Param_Variable,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInt(Z_Param_Variable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execSetInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInt(Z_Param_Variable,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBool(Z_Param_Variable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execSetBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBool(Z_Param_Variable,Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkpotValue*)Z_Param__Result=P_THIS->GetValue(Z_Param_Variable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execSetValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Variable);
		P_GET_STRUCT(FInkpotValue,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_Variable,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execChoosePathString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChoosePathString(Z_Param_Path,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execChoosePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChoosePath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execTagsForContentAtPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->TagsForContentAtPath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGlobalTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GlobalTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetCurrentTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetCurrentTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetAliveFlowCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAliveFlowCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetAliveFlowNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAliveFlowNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execIsFlowAlive)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FlowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFlowAlive(Z_Param_FlowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execSwitchToDefautFlow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchToDefautFlow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetCurrentFlowName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentFlowName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execRemoveFlow)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FlowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFlow(Z_Param_FlowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execSwitchFlow)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FlowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchFlow(Z_Param_FlowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execChooseChoiceIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Choice);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChooseChoiceIndex(Z_Param_Choice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execChooseChoice)
	{
		P_GET_OBJECT(UInkpotChoice,Z_Param_Choice);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChooseChoice(Z_Param_Choice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetCurrentChoices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UInkpotChoice*>*)Z_Param__Result=P_THIS->GetCurrentChoices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execHasChoices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasChoices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetCurrentLine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInkpotLine**)Z_Param__Result=P_THIS->GetCurrentLine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execGetCurrentText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execCanContinue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanContinue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execContinueMaximallyAtPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ContinueMaximallyAtPath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execContinueMaximally)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ContinueMaximally();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStory::execContinue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Continue();
		P_NATIVE_END;
	}
	void UInkpotStory::StaticRegisterNativesUInkpotStory()
	{
		UClass* Class = UInkpotStory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindExternalFunction", &UInkpotStory::execBindExternalFunction },
			{ "CanContinue", &UInkpotStory::execCanContinue },
			{ "ChooseChoice", &UInkpotStory::execChooseChoice },
			{ "ChooseChoiceIndex", &UInkpotStory::execChooseChoiceIndex },
			{ "ChoosePath", &UInkpotStory::execChoosePath },
			{ "ChoosePathString", &UInkpotStory::execChoosePathString },
			{ "ClearVariableChange", &UInkpotStory::execClearVariableChange },
			{ "Continue", &UInkpotStory::execContinue },
			{ "ContinueMaximally", &UInkpotStory::execContinueMaximally },
			{ "ContinueMaximallyAtPath", &UInkpotStory::execContinueMaximallyAtPath },
			{ "GetAliveFlowCount", &UInkpotStory::execGetAliveFlowCount },
			{ "GetAliveFlowNames", &UInkpotStory::execGetAliveFlowNames },
			{ "GetBool", &UInkpotStory::execGetBool },
			{ "GetCurrentChoices", &UInkpotStory::execGetCurrentChoices },
			{ "GetCurrentFlowName", &UInkpotStory::execGetCurrentFlowName },
			{ "GetCurrentLine", &UInkpotStory::execGetCurrentLine },
			{ "GetCurrentTags", &UInkpotStory::execGetCurrentTags },
			{ "GetCurrentText", &UInkpotStory::execGetCurrentText },
			{ "GetFloat", &UInkpotStory::execGetFloat },
			{ "GetInt", &UInkpotStory::execGetInt },
			{ "GetNamedContent", &UInkpotStory::execGetNamedContent },
			{ "GetNamedContentForKnot", &UInkpotStory::execGetNamedContentForKnot },
			{ "GetNamedContentForPath", &UInkpotStory::execGetNamedContentForPath },
			{ "GetString", &UInkpotStory::execGetString },
			{ "GetValue", &UInkpotStory::execGetValue },
			{ "GlobalTags", &UInkpotStory::execGlobalTags },
			{ "HasChoices", &UInkpotStory::execHasChoices },
			{ "IsFlowAlive", &UInkpotStory::execIsFlowAlive },
			{ "LoadJSON", &UInkpotStory::execLoadJSON },
			{ "RemoveFlow", &UInkpotStory::execRemoveFlow },
			{ "SetBool", &UInkpotStory::execSetBool },
			{ "SetEmpty", &UInkpotStory::execSetEmpty },
			{ "SetFloat", &UInkpotStory::execSetFloat },
			{ "SetInt", &UInkpotStory::execSetInt },
			{ "SetOnVariableChange", &UInkpotStory::execSetOnVariableChange },
			{ "SetString", &UInkpotStory::execSetString },
			{ "SetValue", &UInkpotStory::execSetValue },
			{ "SwitchFlow", &UInkpotStory::execSwitchFlow },
			{ "SwitchToDefautFlow", &UInkpotStory::execSwitchToDefautFlow },
			{ "TagsForContentAtPath", &UInkpotStory::execTagsForContentAtPath },
			{ "ToJSON", &UInkpotStory::execToJSON },
			{ "UnbindExternalFunction", &UInkpotStory::execUnbindExternalFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics
	{
		struct InkpotStory_eventBindExternalFunction_Parms
		{
			FString FunctionName;
			FScriptDelegate Function;
			bool bLookAheadSafe;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Function;
		static void NewProp_bLookAheadSafe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLookAheadSafe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventBindExternalFunction_Parms, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_FunctionName_MetaData), Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_FunctionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_Function_MetaData[] = {
		{ "DisplayName", "Function" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventBindExternalFunction_Parms, Function), Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_Function_MetaData), Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_Function_MetaData) }; // 265963676
	void Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_bLookAheadSafe_SetBit(void* Obj)
	{
		((InkpotStory_eventBindExternalFunction_Parms*)Obj)->bLookAheadSafe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_bLookAheadSafe = { "bLookAheadSafe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventBindExternalFunction_Parms), &Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_bLookAheadSafe_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::NewProp_bLookAheadSafe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "CPP_Default_bLookAheadSafe", "true" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "BindExternalFunction", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::InkpotStory_eventBindExternalFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::InkpotStory_eventBindExternalFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_BindExternalFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_BindExternalFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_CanContinue_Statics
	{
		struct InkpotStory_eventCanContinue_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InkpotStory_eventCanContinue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventCanContinue_Parms), &Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "CanContinue", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::InkpotStory_eventCanContinue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::InkpotStory_eventCanContinue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_CanContinue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_CanContinue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics
	{
		struct InkpotStory_eventChooseChoice_Parms
		{
			UInkpotChoice* Choice;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Choice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChooseChoice_Parms, Choice), Z_Construct_UClass_UInkpotChoice_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::NewProp_Choice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ChooseChoice", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::InkpotStory_eventChooseChoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::InkpotStory_eventChooseChoice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_ChooseChoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ChooseChoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics
	{
		struct InkpotStory_eventChooseChoiceIndex_Parms
		{
			int32 Choice;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Choice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChooseChoiceIndex_Parms, Choice), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::NewProp_Choice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ChooseChoiceIndex", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::InkpotStory_eventChooseChoiceIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::InkpotStory_eventChooseChoiceIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics
	{
		struct InkpotStory_eventChoosePath_Parms
		{
			FString Path;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChoosePath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::NewProp_Path_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ChoosePath", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::InkpotStory_eventChoosePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::InkpotStory_eventChoosePath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_ChoosePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ChoosePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics
	{
		struct InkpotStory_eventChoosePathString_Parms
		{
			FString Path;
			TArray<FInkpotValue> Values;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChoosePathString_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Path_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventChoosePathString_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values_MetaData), Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values_MetaData) }; // 3181431869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ChoosePathString", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::InkpotStory_eventChoosePathString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::InkpotStory_eventChoosePathString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_ChoosePathString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ChoosePathString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics
	{
		struct InkpotStory_eventClearVariableChange_Parms
		{
			const UObject* Owner;
			FString Variable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventClearVariableChange_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Owner_MetaData), Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Owner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventClearVariableChange_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Variable_MetaData), Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Variable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::NewProp_Variable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "DefaultToSelf", "Owner" },
		{ "HidePin", "Owner" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ClearVariableChange", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::InkpotStory_eventClearVariableChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::InkpotStory_eventClearVariableChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_ClearVariableChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ClearVariableChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_Continue_Statics
	{
		struct InkpotStory_eventContinue_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_Continue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_Continue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_Continue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_Continue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_Continue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "Continue", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_Continue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_Continue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_Continue_Statics::InkpotStory_eventContinue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_Continue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_Continue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_Continue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_Continue_Statics::InkpotStory_eventContinue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_Continue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_Continue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics
	{
		struct InkpotStory_eventContinueMaximally_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinueMaximally_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ContinueMaximally", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::InkpotStory_eventContinueMaximally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::InkpotStory_eventContinueMaximally_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_ContinueMaximally()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ContinueMaximally_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics
	{
		struct InkpotStory_eventContinueMaximallyAtPath_Parms
		{
			FString Path;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinueMaximallyAtPath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_Path_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventContinueMaximallyAtPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ContinueMaximallyAtPath", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::InkpotStory_eventContinueMaximallyAtPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::InkpotStory_eventContinueMaximallyAtPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics
	{
		struct InkpotStory_eventGetAliveFlowCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetAliveFlowCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetAliveFlowCount", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::InkpotStory_eventGetAliveFlowCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::InkpotStory_eventGetAliveFlowCount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics
	{
		struct InkpotStory_eventGetAliveFlowNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetAliveFlowNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetAliveFlowNames", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::InkpotStory_eventGetAliveFlowNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::InkpotStory_eventGetAliveFlowNames_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetBool_Statics
	{
		struct InkpotStory_eventGetBool_Parms
		{
			FString Variable;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetBool_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_Variable_MetaData), Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_Variable_MetaData) };
	void Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InkpotStory_eventGetBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventGetBool_Parms), &Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetBool", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::InkpotStory_eventGetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetBool_Statics::InkpotStory_eventGetBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics
	{
		struct InkpotStory_eventGetCurrentChoices_Parms
		{
			TArray<UInkpotChoice*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInkpotChoice_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentChoices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentChoices", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::InkpotStory_eventGetCurrentChoices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::InkpotStory_eventGetCurrentChoices_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentChoices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentChoices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics
	{
		struct InkpotStory_eventGetCurrentFlowName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentFlowName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentFlowName", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::InkpotStory_eventGetCurrentFlowName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::InkpotStory_eventGetCurrentFlowName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics
	{
		struct InkpotStory_eventGetCurrentLine_Parms
		{
			UInkpotLine* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentLine_Parms, ReturnValue), Z_Construct_UClass_UInkpotLine_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentLine", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::InkpotStory_eventGetCurrentLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::InkpotStory_eventGetCurrentLine_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics
	{
		struct InkpotStory_eventGetCurrentTags_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentTags", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::InkpotStory_eventGetCurrentTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::InkpotStory_eventGetCurrentTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics
	{
		struct InkpotStory_eventGetCurrentText_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetCurrentText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetCurrentText", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::InkpotStory_eventGetCurrentText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::InkpotStory_eventGetCurrentText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetCurrentText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetCurrentText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetFloat_Statics
	{
		struct InkpotStory_eventGetFloat_Parms
		{
			FString Variable;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetFloat_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_Variable_MetaData), Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_Variable_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetFloat", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::InkpotStory_eventGetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::InkpotStory_eventGetFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetInt_Statics
	{
		struct InkpotStory_eventGetInt_Parms
		{
			FString Variable;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetInt_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_Variable_MetaData), Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_Variable_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetInt", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::InkpotStory_eventGetInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetInt_Statics::InkpotStory_eventGetInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics
	{
		struct InkpotStory_eventGetNamedContent_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetNamedContent", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::InkpotStory_eventGetNamedContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::InkpotStory_eventGetNamedContent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetNamedContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetNamedContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics
	{
		struct InkpotStory_eventGetNamedContentForKnot_Parms
		{
			FString KnotName;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KnotName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_KnotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_KnotName = { "KnotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContentForKnot_Parms, KnotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_KnotName_MetaData), Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_KnotName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContentForKnot_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_KnotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetNamedContentForKnot", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::InkpotStory_eventGetNamedContentForKnot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::InkpotStory_eventGetNamedContentForKnot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics
	{
		struct InkpotStory_eventGetNamedContentForPath_Parms
		{
			FString Path;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContentForPath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_Path_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetNamedContentForPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetNamedContentForPath", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::InkpotStory_eventGetNamedContentForPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::InkpotStory_eventGetNamedContentForPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetString_Statics
	{
		struct InkpotStory_eventGetString_Parms
		{
			FString Variable;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetString_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_Variable_MetaData), Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_Variable_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetString", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetString_Statics::InkpotStory_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetString_Statics::InkpotStory_eventGetString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GetValue_Statics
	{
		struct InkpotStory_eventGetValue_Parms
		{
			FString Variable;
			FInkpotValue ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetValue_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_Variable_MetaData), Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_Variable_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGetValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::InkpotStory_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GetValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GetValue_Statics::InkpotStory_eventGetValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics
	{
		struct InkpotStory_eventGlobalTags_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventGlobalTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "GlobalTags", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::InkpotStory_eventGlobalTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::InkpotStory_eventGlobalTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_GlobalTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_GlobalTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_HasChoices_Statics
	{
		struct InkpotStory_eventHasChoices_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InkpotStory_eventHasChoices_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventHasChoices_Parms), &Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "HasChoices", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::InkpotStory_eventHasChoices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::InkpotStory_eventHasChoices_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_HasChoices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_HasChoices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics
	{
		struct InkpotStory_eventIsFlowAlive_Parms
		{
			FString FlowName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlowName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FlowName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_FlowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_FlowName = { "FlowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventIsFlowAlive_Parms, FlowName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_FlowName_MetaData), Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_FlowName_MetaData) };
	void Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InkpotStory_eventIsFlowAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventIsFlowAlive_Parms), &Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_FlowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "IsFlowAlive", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::InkpotStory_eventIsFlowAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::InkpotStory_eventIsFlowAlive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_IsFlowAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_IsFlowAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics
	{
		struct InkpotStory_eventLoadJSON_Parms
		{
			FString InJSON;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InJSON_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InJSON;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::NewProp_InJSON_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::NewProp_InJSON = { "InJSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventLoadJSON_Parms, InJSON), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::NewProp_InJSON_MetaData), Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::NewProp_InJSON_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::NewProp_InJSON,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "LoadJSON", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::InkpotStory_eventLoadJSON_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::InkpotStory_eventLoadJSON_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_LoadJSON()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_LoadJSON_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics
	{
		struct InkpotStory_eventRemoveFlow_Parms
		{
			FString FlowName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlowName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FlowName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::NewProp_FlowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::NewProp_FlowName = { "FlowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventRemoveFlow_Parms, FlowName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::NewProp_FlowName_MetaData), Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::NewProp_FlowName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::NewProp_FlowName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "RemoveFlow", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::InkpotStory_eventRemoveFlow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::InkpotStory_eventRemoveFlow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_RemoveFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_RemoveFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_SetBool_Statics
	{
		struct InkpotStory_eventSetBool_Parms
		{
			FString Variable;
			bool bValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetBool_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_Variable_MetaData), Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_Variable_MetaData) };
	void Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((InkpotStory_eventSetBool_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSetBool_Parms), &Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetBool_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetBool", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::InkpotStory_eventSetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetBool_Statics::InkpotStory_eventSetBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_SetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics
	{
		struct InkpotStory_eventSetEmpty_Parms
		{
			FString Variable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetEmpty_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_Variable_MetaData), Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_Variable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::NewProp_Variable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetEmpty", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::InkpotStory_eventSetEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::InkpotStory_eventSetEmpty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_SetEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_SetFloat_Statics
	{
		struct InkpotStory_eventSetFloat_Parms
		{
			FString Variable;
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetFloat_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Variable_MetaData), Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Variable_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetFloat", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::InkpotStory_eventSetFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::InkpotStory_eventSetFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_SetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_SetInt_Statics
	{
		struct InkpotStory_eventSetInt_Parms
		{
			FString Variable;
			int32 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetInt_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Variable_MetaData), Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Variable_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetInt_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetInt", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::InkpotStory_eventSetInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetInt_Statics::InkpotStory_eventSetInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_SetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics
	{
		struct InkpotStory_eventSetOnVariableChange_Parms
		{
			FScriptDelegate Delegate;
			FString Variable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Delegate_MetaData[] = {
		{ "DisplayName", "Event" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetOnVariableChange_Parms, Delegate), Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Delegate_MetaData), Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Delegate_MetaData) }; // 3107157274
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetOnVariableChange_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Variable_MetaData), Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Variable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::NewProp_Variable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetOnVariableChange", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::InkpotStory_eventSetOnVariableChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::InkpotStory_eventSetOnVariableChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_SetOnVariableChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetOnVariableChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_SetString_Statics
	{
		struct InkpotStory_eventSetString_Parms
		{
			FString Variable;
			FString Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetString_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Variable_MetaData), Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Variable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetString_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetString", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetString_Statics::InkpotStory_eventSetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetString_Statics::InkpotStory_eventSetString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_SetValue_Statics
	{
		struct InkpotStory_eventSetValue_Parms
		{
			FString Variable;
			FInkpotValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Variable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Variable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetValue_Parms, Variable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Variable_MetaData), Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Variable_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSetValue_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SetValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SetValue", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::InkpotStory_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SetValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SetValue_Statics::InkpotStory_eventSetValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics
	{
		struct InkpotStory_eventSwitchFlow_Parms
		{
			FString FlowName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlowName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FlowName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_FlowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_FlowName = { "FlowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventSwitchFlow_Parms, FlowName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_FlowName_MetaData), Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_FlowName_MetaData) };
	void Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InkpotStory_eventSwitchFlow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotStory_eventSwitchFlow_Parms), &Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_FlowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SwitchFlow", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::InkpotStory_eventSwitchFlow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::InkpotStory_eventSwitchFlow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_SwitchFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SwitchFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_SwitchToDefautFlow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_SwitchToDefautFlow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_SwitchToDefautFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "SwitchToDefautFlow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_SwitchToDefautFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_SwitchToDefautFlow_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInkpotStory_SwitchToDefautFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_SwitchToDefautFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics
	{
		struct InkpotStory_eventTagsForContentAtPath_Parms
		{
			FString Path;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventTagsForContentAtPath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_Path_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventTagsForContentAtPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "TagsForContentAtPath", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::InkpotStory_eventTagsForContentAtPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::InkpotStory_eventTagsForContentAtPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_ToJSON_Statics
	{
		struct InkpotStory_eventToJSON_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventToJSON_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "ToJSON", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::InkpotStory_eventToJSON_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::InkpotStory_eventToJSON_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_ToJSON()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_ToJSON_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics
	{
		struct InkpotStory_eventUnbindExternalFunction_Parms
		{
			FString FunctionName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStory_eventUnbindExternalFunction_Parms, FunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::NewProp_FunctionName_MetaData), Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::NewProp_FunctionName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::NewProp_FunctionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Story" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStory, nullptr, "UnbindExternalFunction", nullptr, nullptr, Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::InkpotStory_eventUnbindExternalFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::InkpotStory_eventUnbindExternalFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotStory);
	UClass* Z_Construct_UClass_UInkpotStory_NoRegister()
	{
		return UInkpotStory::StaticClass();
	}
	struct Z_Construct_UClass_UInkpotStory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventOnContinue_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnContinue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventOnMakeChoice_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnMakeChoice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventOnChoosePath_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnChoosePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventOnSwitchFlow_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnSwitchFlow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventOnStoryLoadJSON_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnStoryLoadJSON;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Choices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Choices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInkpotStory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInkpotStory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotStory_BindExternalFunction, "BindExternalFunction" }, // 3286536882
		{ &Z_Construct_UFunction_UInkpotStory_CanContinue, "CanContinue" }, // 3372277636
		{ &Z_Construct_UFunction_UInkpotStory_ChooseChoice, "ChooseChoice" }, // 1963034602
		{ &Z_Construct_UFunction_UInkpotStory_ChooseChoiceIndex, "ChooseChoiceIndex" }, // 1150940003
		{ &Z_Construct_UFunction_UInkpotStory_ChoosePath, "ChoosePath" }, // 738553122
		{ &Z_Construct_UFunction_UInkpotStory_ChoosePathString, "ChoosePathString" }, // 3014361489
		{ &Z_Construct_UFunction_UInkpotStory_ClearVariableChange, "ClearVariableChange" }, // 3859536894
		{ &Z_Construct_UFunction_UInkpotStory_Continue, "Continue" }, // 4030830142
		{ &Z_Construct_UFunction_UInkpotStory_ContinueMaximally, "ContinueMaximally" }, // 1987090317
		{ &Z_Construct_UFunction_UInkpotStory_ContinueMaximallyAtPath, "ContinueMaximallyAtPath" }, // 3229224209
		{ &Z_Construct_UFunction_UInkpotStory_GetAliveFlowCount, "GetAliveFlowCount" }, // 323612834
		{ &Z_Construct_UFunction_UInkpotStory_GetAliveFlowNames, "GetAliveFlowNames" }, // 1128162080
		{ &Z_Construct_UFunction_UInkpotStory_GetBool, "GetBool" }, // 1148583567
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentChoices, "GetCurrentChoices" }, // 2056844454
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentFlowName, "GetCurrentFlowName" }, // 383847702
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentLine, "GetCurrentLine" }, // 3480346681
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentTags, "GetCurrentTags" }, // 3570181803
		{ &Z_Construct_UFunction_UInkpotStory_GetCurrentText, "GetCurrentText" }, // 230139708
		{ &Z_Construct_UFunction_UInkpotStory_GetFloat, "GetFloat" }, // 1182361576
		{ &Z_Construct_UFunction_UInkpotStory_GetInt, "GetInt" }, // 1532110516
		{ &Z_Construct_UFunction_UInkpotStory_GetNamedContent, "GetNamedContent" }, // 4173415765
		{ &Z_Construct_UFunction_UInkpotStory_GetNamedContentForKnot, "GetNamedContentForKnot" }, // 1295121085
		{ &Z_Construct_UFunction_UInkpotStory_GetNamedContentForPath, "GetNamedContentForPath" }, // 2640855377
		{ &Z_Construct_UFunction_UInkpotStory_GetString, "GetString" }, // 3801696886
		{ &Z_Construct_UFunction_UInkpotStory_GetValue, "GetValue" }, // 3106955010
		{ &Z_Construct_UFunction_UInkpotStory_GlobalTags, "GlobalTags" }, // 1311592584
		{ &Z_Construct_UFunction_UInkpotStory_HasChoices, "HasChoices" }, // 312323096
		{ &Z_Construct_UFunction_UInkpotStory_IsFlowAlive, "IsFlowAlive" }, // 3656344633
		{ &Z_Construct_UFunction_UInkpotStory_LoadJSON, "LoadJSON" }, // 1082044589
		{ &Z_Construct_UFunction_UInkpotStory_RemoveFlow, "RemoveFlow" }, // 3729050345
		{ &Z_Construct_UFunction_UInkpotStory_SetBool, "SetBool" }, // 4273111697
		{ &Z_Construct_UFunction_UInkpotStory_SetEmpty, "SetEmpty" }, // 790143681
		{ &Z_Construct_UFunction_UInkpotStory_SetFloat, "SetFloat" }, // 2100452117
		{ &Z_Construct_UFunction_UInkpotStory_SetInt, "SetInt" }, // 1916350464
		{ &Z_Construct_UFunction_UInkpotStory_SetOnVariableChange, "SetOnVariableChange" }, // 3585148121
		{ &Z_Construct_UFunction_UInkpotStory_SetString, "SetString" }, // 954343005
		{ &Z_Construct_UFunction_UInkpotStory_SetValue, "SetValue" }, // 1878511383
		{ &Z_Construct_UFunction_UInkpotStory_SwitchFlow, "SwitchFlow" }, // 717729385
		{ &Z_Construct_UFunction_UInkpotStory_SwitchToDefautFlow, "SwitchToDefautFlow" }, // 4099750716
		{ &Z_Construct_UFunction_UInkpotStory_TagsForContentAtPath, "TagsForContentAtPath" }, // 2940530749
		{ &Z_Construct_UFunction_UInkpotStory_ToJSON, "ToJSON" }, // 3401975057
		{ &Z_Construct_UFunction_UInkpotStory_UnbindExternalFunction, "UnbindExternalFunction" }, // 3200396829
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inkpot/InkpotStory.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnContinue_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnContinue" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnContinue = { "EventOnContinue", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnContinue), Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnContinue_MetaData), Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnContinue_MetaData) }; // 330690143
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnMakeChoice_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnMakeChoice" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnMakeChoice = { "EventOnMakeChoice", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnMakeChoice), Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnMakeChoice_MetaData), Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnMakeChoice_MetaData) }; // 169869807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnChoosePath_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnChoosePath" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnChoosePath = { "EventOnChoosePath", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnChoosePath), Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnChoosePath_MetaData), Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnChoosePath_MetaData) }; // 2230022608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnSwitchFlow_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnSwitchFlow" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnSwitchFlow = { "EventOnSwitchFlow", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnSwitchFlow), Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnSwitchFlow_MetaData), Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnSwitchFlow_MetaData) }; // 2386810705
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnStoryLoadJSON_MetaData[] = {
		{ "Category", "Inkpot|Story" },
		{ "DisplayName", "OnStoryLoadJSON" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnStoryLoadJSON = { "EventOnStoryLoadJSON", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, EventOnStoryLoadJSON), Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnStoryLoadJSON_MetaData), Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnStoryLoadJSON_MetaData) }; // 3016775657
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices_Inner = { "Choices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInkpotChoice_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStory, Choices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices_MetaData), Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotStory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnContinue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnMakeChoice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnChoosePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnSwitchFlow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_EventOnStoryLoadJSON,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStory_Statics::NewProp_Choices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInkpotStory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotStory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotStory_Statics::ClassParams = {
		&UInkpotStory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInkpotStory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotStory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInkpotStory()
	{
		if (!Z_Registration_Info_UClass_UInkpotStory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotStory.OuterSingleton, Z_Construct_UClass_UInkpotStory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInkpotStory.OuterSingleton;
	}
	template<> INKPOT_API UClass* StaticClass<UInkpotStory>()
	{
		return UInkpotStory::StaticClass();
	}
	UInkpotStory::UInkpotStory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotStory);
	UInkpotStory::~UInkpotStory() {}
	struct Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotStory, UInkpotStory::StaticClass, TEXT("UInkpotStory"), &Z_Registration_Info_UClass_UInkpotStory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotStory), 3769493132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_1841119657(TEXT("/Script/Inkpot"),
		Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
