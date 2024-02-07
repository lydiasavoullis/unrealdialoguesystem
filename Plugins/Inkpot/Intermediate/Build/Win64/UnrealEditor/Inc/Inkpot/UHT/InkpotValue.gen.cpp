// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inkpot/Public/Inkpot/InkpotValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpotValue() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotLibrary();
	INKPOT_API UClass* Z_Construct_UClass_UInkpotLibrary_NoRegister();
	INKPOT_API UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue();
	UPackage* Z_Construct_UPackage__Script_Inkpot();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InkpotValue;
class UScriptStruct* FInkpotValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InkpotValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InkpotValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInkpotValue, (UObject*)Z_Construct_UPackage__Script_Inkpot(), TEXT("InkpotValue"));
	}
	return Z_Registration_Info_UScriptStruct_InkpotValue.OuterSingleton;
}
template<> INKPOT_API UScriptStruct* StaticStruct<FInkpotValue>()
{
	return FInkpotValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInkpotValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkpotValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInkpotValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInkpotValue>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInkpotValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
		nullptr,
		&NewStructOps,
		"InkpotValue",
		nullptr,
		0,
		sizeof(FInkpotValue),
		alignof(FInkpotValue),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkpotValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInkpotValue_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInkpotValue()
	{
		if (!Z_Registration_Info_UScriptStruct_InkpotValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InkpotValue.InnerSingleton, Z_Construct_UScriptStruct_FInkpotValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InkpotValue.InnerSingleton;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execInkpotArrayValueAsList)
	{
		P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UInkpotLibrary::InkpotArrayValueAsList(Z_Param_Out_Values,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execInkpotValueAsList)
	{
		P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UInkpotLibrary::InkpotValueAsList(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execMakeInkpotList)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkpotValue*)Z_Param__Result=UInkpotLibrary::MakeInkpotList(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execInkpotArrayValueAsString)
	{
		P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UInkpotLibrary::InkpotArrayValueAsString(Z_Param_Out_Values,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execInkpotValueAsString)
	{
		P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UInkpotLibrary::InkpotValueAsString(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execMakeStringInkpotValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkpotValue*)Z_Param__Result=UInkpotLibrary::MakeStringInkpotValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execInkpotArrayValueAsFloat)
	{
		P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UInkpotLibrary::InkpotArrayValueAsFloat(Z_Param_Out_Values,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execInkpotValueAsFloat)
	{
		P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UInkpotLibrary::InkpotValueAsFloat(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execMakeFloatInkpotValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkpotValue*)Z_Param__Result=UInkpotLibrary::MakeFloatInkpotValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execInkpotArrayValueAsInt)
	{
		P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UInkpotLibrary::InkpotArrayValueAsInt(Z_Param_Out_Values,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execInkpotValueAsInt)
	{
		P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UInkpotLibrary::InkpotValueAsInt(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execMakeIntInkpotValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkpotValue*)Z_Param__Result=UInkpotLibrary::MakeIntInkpotValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execInkpotArrayValueAsBool)
	{
		P_GET_TARRAY_REF(FInkpotValue,Z_Param_Out_Values);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInkpotLibrary::InkpotArrayValueAsBool(Z_Param_Out_Values,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execInkpotValueAsBool)
	{
		P_GET_STRUCT_REF(FInkpotValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInkpotLibrary::InkpotValueAsBool(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execMakeBoolInkpotValue)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkpotValue*)Z_Param__Result=UInkpotLibrary::MakeBoolInkpotValue(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkpotLibrary::execDefaultInkpotValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkpotValue*)Z_Param__Result=UInkpotLibrary::DefaultInkpotValue();
		P_NATIVE_END;
	}
	void UInkpotLibrary::StaticRegisterNativesUInkpotLibrary()
	{
		UClass* Class = UInkpotLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DefaultInkpotValue", &UInkpotLibrary::execDefaultInkpotValue },
			{ "InkpotArrayValueAsBool", &UInkpotLibrary::execInkpotArrayValueAsBool },
			{ "InkpotArrayValueAsFloat", &UInkpotLibrary::execInkpotArrayValueAsFloat },
			{ "InkpotArrayValueAsInt", &UInkpotLibrary::execInkpotArrayValueAsInt },
			{ "InkpotArrayValueAsList", &UInkpotLibrary::execInkpotArrayValueAsList },
			{ "InkpotArrayValueAsString", &UInkpotLibrary::execInkpotArrayValueAsString },
			{ "InkpotValueAsBool", &UInkpotLibrary::execInkpotValueAsBool },
			{ "InkpotValueAsFloat", &UInkpotLibrary::execInkpotValueAsFloat },
			{ "InkpotValueAsInt", &UInkpotLibrary::execInkpotValueAsInt },
			{ "InkpotValueAsList", &UInkpotLibrary::execInkpotValueAsList },
			{ "InkpotValueAsString", &UInkpotLibrary::execInkpotValueAsString },
			{ "MakeBoolInkpotValue", &UInkpotLibrary::execMakeBoolInkpotValue },
			{ "MakeFloatInkpotValue", &UInkpotLibrary::execMakeFloatInkpotValue },
			{ "MakeInkpotList", &UInkpotLibrary::execMakeInkpotList },
			{ "MakeIntInkpotValue", &UInkpotLibrary::execMakeIntInkpotValue },
			{ "MakeStringInkpotValue", &UInkpotLibrary::execMakeStringInkpotValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue_Statics
	{
		struct InkpotLibrary_eventDefaultInkpotValue_Parms
		{
			FInkpotValue ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventDefaultInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Deafult value for returning from functions */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deafult value for returning from functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "DefaultInkpotValue", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue_Statics::InkpotLibrary_eventDefaultInkpotValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue_Statics::InkpotLibrary_eventDefaultInkpotValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics
	{
		struct InkpotLibrary_eventInkpotArrayValueAsBool_Parms
		{
			TArray<FInkpotValue> Values;
			int32 Index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotArrayValueAsBool_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values_MetaData), Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values_MetaData) }; // 3181431869
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotArrayValueAsBool_Parms, Index), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InkpotLibrary_eventInkpotArrayValueAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotLibrary_eventInkpotArrayValueAsBool_Parms), &Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Cast Ink array value to a boolean */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cast Ink array value to a boolean" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "InkpotArrayValueAsBool", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::InkpotLibrary_eventInkpotArrayValueAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::InkpotLibrary_eventInkpotArrayValueAsBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics
	{
		struct InkpotLibrary_eventInkpotArrayValueAsFloat_Parms
		{
			TArray<FInkpotValue> Values;
			int32 Index;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotArrayValueAsFloat_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values_MetaData), Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values_MetaData) }; // 3181431869
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotArrayValueAsFloat_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotArrayValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Cast Ink array value to a float */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cast Ink array value to a float" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "InkpotArrayValueAsFloat", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::InkpotLibrary_eventInkpotArrayValueAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::InkpotLibrary_eventInkpotArrayValueAsFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics
	{
		struct InkpotLibrary_eventInkpotArrayValueAsInt_Parms
		{
			TArray<FInkpotValue> Values;
			int32 Index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotArrayValueAsInt_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values_MetaData), Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values_MetaData) }; // 3181431869
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotArrayValueAsInt_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotArrayValueAsInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Cast Ink array value to an integer */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cast Ink array value to an integer" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "InkpotArrayValueAsInt", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::InkpotLibrary_eventInkpotArrayValueAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::InkpotLibrary_eventInkpotArrayValueAsInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics
	{
		struct InkpotLibrary_eventInkpotArrayValueAsList_Parms
		{
			TArray<FInkpotValue> Values;
			int32 Index;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotArrayValueAsList_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::NewProp_Values_MetaData), Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::NewProp_Values_MetaData) }; // 3181431869
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotArrayValueAsList_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotArrayValueAsList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Cast Ink array value to a list */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cast Ink array value to a list" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "InkpotArrayValueAsList", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::InkpotLibrary_eventInkpotArrayValueAsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::InkpotLibrary_eventInkpotArrayValueAsList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics
	{
		struct InkpotLibrary_eventInkpotArrayValueAsString_Parms
		{
			TArray<FInkpotValue> Values;
			int32 Index;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotArrayValueAsString_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::NewProp_Values_MetaData), Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::NewProp_Values_MetaData) }; // 3181431869
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotArrayValueAsString_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotArrayValueAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Cast Ink array value to a string */" },
#endif
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cast Ink array value to a string" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "InkpotArrayValueAsString", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::InkpotLibrary_eventInkpotArrayValueAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::InkpotLibrary_eventInkpotArrayValueAsString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics
	{
		struct InkpotLibrary_eventInkpotValueAsBool_Parms
		{
			FInkpotValue Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotValueAsBool_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::NewProp_Value_MetaData) }; // 3181431869
	void Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InkpotLibrary_eventInkpotValueAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotLibrary_eventInkpotValueAsBool_Parms), &Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Cast Ink value to a boolean */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cast Ink value to a boolean" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "InkpotValueAsBool", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::InkpotLibrary_eventInkpotValueAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::InkpotLibrary_eventInkpotValueAsBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics
	{
		struct InkpotLibrary_eventInkpotValueAsFloat_Parms
		{
			FInkpotValue Value;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotValueAsFloat_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::NewProp_Value_MetaData) }; // 3181431869
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Cast Ink value to a float*/" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cast Ink value to a float" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "InkpotValueAsFloat", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::InkpotLibrary_eventInkpotValueAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::InkpotLibrary_eventInkpotValueAsFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics
	{
		struct InkpotLibrary_eventInkpotValueAsInt_Parms
		{
			FInkpotValue Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotValueAsInt_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::NewProp_Value_MetaData) }; // 3181431869
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotValueAsInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Cast Ink value to an integer*/" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cast Ink value to an integer" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "InkpotValueAsInt", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::InkpotLibrary_eventInkpotValueAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::InkpotLibrary_eventInkpotValueAsInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics
	{
		struct InkpotLibrary_eventInkpotValueAsList_Parms
		{
			FInkpotValue Value;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotValueAsList_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::NewProp_Value_MetaData) }; // 3181431869
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotValueAsList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Get an array of strings from an Ink List */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an array of strings from an Ink List" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "InkpotValueAsList", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::InkpotLibrary_eventInkpotValueAsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::InkpotLibrary_eventInkpotValueAsList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics
	{
		struct InkpotLibrary_eventInkpotValueAsString_Parms
		{
			FInkpotValue Value;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotValueAsString_Parms, Value), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::NewProp_Value_MetaData) }; // 3181431869
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventInkpotValueAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Cast Ink value to a string*/" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cast Ink value to a string" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "InkpotValueAsString", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::InkpotLibrary_eventInkpotValueAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::InkpotLibrary_eventInkpotValueAsString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics
	{
		struct InkpotLibrary_eventMakeBoolInkpotValue_Parms
		{
			bool bValue;
			FInkpotValue ReturnValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((InkpotLibrary_eventMakeBoolInkpotValue_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InkpotLibrary_eventMakeBoolInkpotValue_Parms), &Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventMakeBoolInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::NewProp_bValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Create an Ink Value from a boolean */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create an Ink Value from a boolean" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "MakeBoolInkpotValue", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::InkpotLibrary_eventMakeBoolInkpotValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::InkpotLibrary_eventMakeBoolInkpotValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics
	{
		struct InkpotLibrary_eventMakeFloatInkpotValue_Parms
		{
			float Value;
			FInkpotValue ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventMakeFloatInkpotValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventMakeFloatInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Create an Ink Value from a float */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create an Ink Value from a float" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "MakeFloatInkpotValue", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::InkpotLibrary_eventMakeFloatInkpotValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::InkpotLibrary_eventMakeFloatInkpotValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics
	{
		struct InkpotLibrary_eventMakeInkpotList_Parms
		{
			TArray<FString> Value;
			FInkpotValue ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventMakeInkpotList_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventMakeInkpotList_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::NewProp_Value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Create an Ink List from an array of Strings */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create an Ink List from an array of Strings" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "MakeInkpotList", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::InkpotLibrary_eventMakeInkpotList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::InkpotLibrary_eventMakeInkpotList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics
	{
		struct InkpotLibrary_eventMakeIntInkpotValue_Parms
		{
			int32 Value;
			FInkpotValue ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventMakeIntInkpotValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventMakeIntInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Create an Ink Value from an integer */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create an Ink Value from an integer" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "MakeIntInkpotValue", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::InkpotLibrary_eventMakeIntInkpotValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::InkpotLibrary_eventMakeIntInkpotValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics
	{
		struct InkpotLibrary_eventMakeStringInkpotValue_Parms
		{
			FString Value;
			FInkpotValue ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventMakeStringInkpotValue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InkpotLibrary_eventMakeStringInkpotValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkpotValue, METADATA_PARAMS(0, nullptr) }; // 3181431869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inkpot|Value" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Create an Ink Value from a string */" },
#endif
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create an Ink Value from a string" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkpotLibrary, nullptr, "MakeStringInkpotValue", nullptr, nullptr, Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::InkpotLibrary_eventMakeStringInkpotValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::InkpotLibrary_eventMakeStringInkpotValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkpotLibrary);
	UClass* Z_Construct_UClass_UInkpotLibrary_NoRegister()
	{
		return UInkpotLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UInkpotLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInkpotLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Inkpot,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInkpotLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkpotLibrary_DefaultInkpotValue, "DefaultInkpotValue" }, // 4031311785
		{ &Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsBool, "InkpotArrayValueAsBool" }, // 3743765172
		{ &Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsFloat, "InkpotArrayValueAsFloat" }, // 3219590337
		{ &Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsInt, "InkpotArrayValueAsInt" }, // 2828406531
		{ &Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsList, "InkpotArrayValueAsList" }, // 458713964
		{ &Z_Construct_UFunction_UInkpotLibrary_InkpotArrayValueAsString, "InkpotArrayValueAsString" }, // 1308439018
		{ &Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsBool, "InkpotValueAsBool" }, // 704802635
		{ &Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsFloat, "InkpotValueAsFloat" }, // 2631779679
		{ &Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsInt, "InkpotValueAsInt" }, // 1900793717
		{ &Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsList, "InkpotValueAsList" }, // 53529427
		{ &Z_Construct_UFunction_UInkpotLibrary_InkpotValueAsString, "InkpotValueAsString" }, // 3682039621
		{ &Z_Construct_UFunction_UInkpotLibrary_MakeBoolInkpotValue, "MakeBoolInkpotValue" }, // 3838894987
		{ &Z_Construct_UFunction_UInkpotLibrary_MakeFloatInkpotValue, "MakeFloatInkpotValue" }, // 1847269776
		{ &Z_Construct_UFunction_UInkpotLibrary_MakeInkpotList, "MakeInkpotList" }, // 518403846
		{ &Z_Construct_UFunction_UInkpotLibrary_MakeIntInkpotValue, "MakeIntInkpotValue" }, // 2475407110
		{ &Z_Construct_UFunction_UInkpotLibrary_MakeStringInkpotValue, "MakeStringInkpotValue" }, // 4088655678
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkpotLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inkpot/InkpotValue.h" },
		{ "ModuleRelativePath", "Public/Inkpot/InkpotValue.h" },
		{ "ScriptName", "InkpotLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInkpotLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkpotLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkpotLibrary_Statics::ClassParams = {
		&UInkpotLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInkpotLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInkpotLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInkpotLibrary()
	{
		if (!Z_Registration_Info_UClass_UInkpotLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkpotLibrary.OuterSingleton, Z_Construct_UClass_UInkpotLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInkpotLibrary.OuterSingleton;
	}
	template<> INKPOT_API UClass* StaticClass<UInkpotLibrary>()
	{
		return UInkpotLibrary::StaticClass();
	}
	UInkpotLibrary::UInkpotLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInkpotLibrary);
	UInkpotLibrary::~UInkpotLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValue_h_Statics::ScriptStructInfo[] = {
		{ FInkpotValue::StaticStruct, Z_Construct_UScriptStruct_FInkpotValue_Statics::NewStructOps, TEXT("InkpotValue"), &Z_Registration_Info_UScriptStruct_InkpotValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInkpotValue), 3181431869U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInkpotLibrary, UInkpotLibrary::StaticClass, TEXT("UInkpotLibrary"), &Z_Registration_Info_UClass_UInkpotLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkpotLibrary), 1547251709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValue_h_3623671597(TEXT("/Script/Inkpot"),
		Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValue_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotValue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
