// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Inkpot/InkpotStoryHistory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotStoryHistory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotChoice_NoRegister();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotStory_NoRegister();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryHistory();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotStoryHistory_NoRegister();
	INKPOT_API UEnum* Z_Construct_UEnum_Inkpot_EInkpotStoryEventType();
	INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent();
	UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInkpotStoryEventType;
	static UEnum* EInkpotStoryEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInkpotStoryEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInkpotStoryEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Inkpot_EInkpotStoryEventType, (UObject*)Z_Construct_UPackage__Script_Inkpot(), TEXT("EInkpotStoryEventType"));
		}
		return Z_Registration_Info_UEnum_EInkpotStoryEventType.OuterSingleton;
	}
	template<> INKPOT_API UEnum* StaticEnum<EInkpotStoryEventType>()
	{
		return EInkpotStoryEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics::Enumerators[] = {
		{ "EInkpotStoryEventType::None", (int64)EInkpotStoryEventType::None },
		{ "EInkpotStoryEventType::Continue", (int64)EInkpotStoryEventType::Continue },
		{ "EInkpotStoryEventType::Choice", (int64)EInkpotStoryEventType::Choice },
		{ "EInkpotStoryEventType::SwitchFlow", (int64)EInkpotStoryEventType::SwitchFlow },
		{ "EInkpotStoryEventType::ChoosePath", (int64)EInkpotStoryEventType::ChoosePath },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics::Enum_MetaDataParams[] = {
		{ "Choice.Name", "EInkpotStoryEventType::Choice" },
		{ "ChoosePath.Name", "EInkpotStoryEventType::ChoosePath" },
		{ "Continue.Name", "EInkpotStoryEventType::Continue" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
		{ "None.Name", "EInkpotStoryEventType::None" },
		{ "SwitchFlow.Name", "EInkpotStoryEventType::SwitchFlow" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Inkpot,
		nullptr,
		"EInkpotStoryEventType",
		"EInkpotStoryEventType",
		Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Inkpot_EInkpotStoryEventType()
	{
		if (!Z_Registration_Info_UEnum_EInkpotStoryEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInkpotStoryEventType.InnerSingleton, Z_Construct_UEnum_Inkpot_EInkpotStoryEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInkpotStoryEventType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InkpotStoryHistoryEvent;
class UScriptStruct* FInkpotStoryHistoryEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InkpotStoryHistoryEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InkpotStoryHistoryEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent, (UObject*)Z_Construct_UPackage__Script_Inkpot(), TEXT("InkpotStoryHistoryEvent"));
	}
	return Z_Registration_Info_UScriptStruct_InkpotStoryHistoryEvent.OuterSingleton;
}
template<> INKPOT_API UScriptStruct* StaticStruct<FInkpotStoryHistoryEvent>()
{
	return FInkpotStoryHistoryEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Choice_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Choice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInkpotStoryHistoryEvent>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInkpotStoryHistoryEvent, Type), Z_Construct_UEnum_Inkpot_EInkpotStoryEventType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Type_MetaData) }; // 1398252788
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Choice_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInkpotStoryHistoryEvent, Choice), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Choice_MetaData), Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Choice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInkpotStoryHistoryEvent, Data), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Choice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
		nullptr,
		&NewStructOps,
		"InkpotStoryHistoryEvent",
		Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::PropPointers),
		sizeof(FInkpotStoryHistoryEvent),
		alignof(FInkpotStoryHistoryEvent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_InkpotStoryHistoryEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InkpotStoryHistoryEvent.InnerSingleton, Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InkpotStoryHistoryEvent.InnerSingleton;
	}
	DEFINE_FUNCTION(UInkpotStoryHistory::execOnStoryChoosePath)
	{
		P_GET_OBJECT(UInkpotStory,Z_Param_Story);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStoryChoosePath(Z_Param_Story,Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStoryHistory::execOnStorySwitchFlow)
	{
		P_GET_OBJECT(UInkpotStory,Z_Param_Story);
		P_GET_PROPERTY(FStrProperty,Z_Param_Flow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStorySwitchFlow(Z_Param_Story,Z_Param_Flow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStoryHistory::execOnStoryChoice)
	{
		P_GET_OBJECT(UInkpotStory,Z_Param_Story);
		P_GET_OBJECT(UInkpotChoice,Z_Param_Choice);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStoryChoice(Z_Param_Story,Z_Param_Choice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotStoryHistory::execOnStoryContinue)
	{
		P_GET_OBJECT(UInkpotStory,Z_Param_Story);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStoryContinue(Z_Param_Story);
		P_NATIVE_END;
	}
	void UInkpotStoryHistory::StaticRegisterNativesUInkpotStoryHistory()
	{
		UClass* Class = UInkpotStoryHistory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStoryChoice", &UInkpotStoryHistory::execOnStoryChoice },
			{ "OnStoryChoosePath", &UInkpotStoryHistory::execOnStoryChoosePath },
			{ "OnStoryContinue", &UInkpotStoryHistory::execOnStoryContinue },
			{ "OnStorySwitchFlow", &UInkpotStoryHistory::execOnStorySwitchFlow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics
	{
		struct InkpotStoryHistory_eventOnStoryChoice_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryHistory_eventOnStoryChoice_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::NewProp_Choice = { "Choice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryHistory_eventOnStoryChoice_Parms, Choice), Z_Construct_UClass_UInkpotChoice_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::NewProp_Story,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::NewProp_Choice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStoryHistory, nullptr, "OnStoryChoice", nullptr, nullptr, Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::InkpotStoryHistory_eventOnStoryChoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::InkpotStoryHistory_eventOnStoryChoice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics
	{
		struct InkpotStoryHistory_eventOnStoryChoosePath_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryHistory_eventOnStoryChoosePath_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryHistory_eventOnStoryChoosePath_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::NewProp_Path_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::NewProp_Story,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStoryHistory, nullptr, "OnStoryChoosePath", nullptr, nullptr, Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::InkpotStoryHistory_eventOnStoryChoosePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::InkpotStoryHistory_eventOnStoryChoosePath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics
	{
		struct InkpotStoryHistory_eventOnStoryContinue_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryHistory_eventOnStoryContinue_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::NewProp_Story,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStoryHistory, nullptr, "OnStoryContinue", nullptr, nullptr, Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::InkpotStoryHistory_eventOnStoryContinue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::InkpotStoryHistory_eventOnStoryContinue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics
	{
		struct InkpotStoryHistory_eventOnStorySwitchFlow_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::NewProp_Story = { "Story", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryHistory_eventOnStorySwitchFlow_Parms, Story), Z_Construct_UClass_UInkpotStory_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::NewProp_Flow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::NewProp_Flow = { "Flow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotStoryHistory_eventOnStorySwitchFlow_Parms, Flow), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::NewProp_Flow_MetaData), Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::NewProp_Flow_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::NewProp_Story,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::NewProp_Flow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotStoryHistory, nullptr, "OnStorySwitchFlow", nullptr, nullptr, Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::InkpotStoryHistory_eventOnStorySwitchFlow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::InkpotStoryHistory_eventOnStorySwitchFlow_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotStoryHistory);
	UClass* Z_Construct_UClass_UInkpotStoryHistory_NoRegister()
	{
		return UInkpotStoryHistory::StaticClass();
	}
	struct Z_Construct_UClass_UInkpotStoryHistory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandSeed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInReplay_MetaData[];
#endif
		static void NewProp_bInReplay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReplay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInkpotStoryHistory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryHistory_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInkpotStoryHistory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoice, "OnStoryChoice" }, // 3481838047
		{ &Z_Construct_UFunction_UInkpotStoryHistory_OnStoryChoosePath, "OnStoryChoosePath" }, // 3656204795
		{ &Z_Construct_UFunction_UInkpotStoryHistory_OnStoryContinue, "OnStoryContinue" }, // 4006718061
		{ &Z_Construct_UFunction_UInkpotStoryHistory_OnStorySwitchFlow, "OnStorySwitchFlow" }, // 717741429
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryHistory_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStoryHistory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inkpot/InkpotStoryHistory.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_RandSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_RandSeed = { "RandSeed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryHistory, RandSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_RandSeed_MetaData), Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_RandSeed_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent, METADATA_PARAMS(0, nullptr) }; // 2857322586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_Events_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInkpotStoryHistory, Events), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_Events_MetaData), Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_Events_MetaData) }; // 2857322586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_bInReplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inkpot/InkpotStoryHistory.h" },
	};
#endif
	void Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_bInReplay_SetBit(void* Obj)
	{
		((UInkpotStoryHistory*)Obj)->bInReplay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_bInReplay = { "bInReplay", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInkpotStoryHistory), &Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_bInReplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_bInReplay_MetaData), Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_bInReplay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInkpotStoryHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_RandSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_Events_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_Events,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInkpotStoryHistory_Statics::NewProp_bInReplay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInkpotStoryHistory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotStoryHistory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotStoryHistory_Statics::ClassParams = {
		&UInkpotStoryHistory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInkpotStoryHistory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryHistory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryHistory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotStoryHistory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotStoryHistory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInkpotStoryHistory()
	{
		if (!Z_Registration_Info_UClass_UInkpotStoryHistory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotStoryHistory.OuterSingleton, Z_Construct_UClass_UInkpotStoryHistory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInkpotStoryHistory.OuterSingleton;
	}
	template<> INKPOT_API UClass* StaticClass<UInkpotStoryHistory>()
	{
		return UInkpotStoryHistory::StaticClass();
	}
	UInkpotStoryHistory::UInkpotStoryHistory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotStoryHistory);
	UInkpotStoryHistory::~UInkpotStoryHistory() {}
	struct Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_Statics::EnumInfo[] = {
		{ EInkpotStoryEventType_StaticEnum, TEXT("EInkpotStoryEventType"), &Z_Registration_Info_UEnum_EInkpotStoryEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1398252788U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_Statics::ScriptStructInfo[] = {
		{ FInkpotStoryHistoryEvent::StaticStruct, Z_Construct_UScriptStruct_FInkpotStoryHistoryEvent_Statics::NewStructOps, TEXT("InkpotStoryHistoryEvent"), &Z_Registration_Info_UScriptStruct_InkpotStoryHistoryEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInkpotStoryHistoryEvent), 2857322586U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotStoryHistory, UInkpotStoryHistory::StaticClass, TEXT("UInkpotStoryHistory"), &Z_Registration_Info_UClass_UInkpotStoryHistory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotStoryHistory), 625592619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_2730967098(TEXT("/Script/Inkpot"),
		Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStoryHistory_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
