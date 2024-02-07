// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkpot_init() {}
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature();
	INKPOT_API UFunction* Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Inkpot;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Inkpot()
	{
		if (!Z_Registration_Info_UPackage__Script_Inkpot.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Inkpot_InkpotExternalFunction__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Inkpot_OnChoosePath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Inkpot_OnInkpotVariableChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Inkpot_OnMakeChoice__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Inkpot_OnStoryBegin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Inkpot_OnStoryContinue__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Inkpot_OnStoryEnd__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Inkpot_OnStoryLoadJSON__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Inkpot_OnSwitchFlow__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Inkpot_OnVariableChangeMulti__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAsyncAction_WaitVariableChange_InkpotVariableChangeSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Inkpot",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAA096EBE,
				0xF4D38932,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Inkpot.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Inkpot.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Inkpot(Z_Construct_UPackage__Script_Inkpot, TEXT("/Script/Inkpot"), Z_Registration_Info_UPackage__Script_Inkpot, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAA096EBE, 0xF4D38932));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
