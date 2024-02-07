// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inkpot/InkpotStory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInkpotChoice;
class UInkpotLine;
class UInkpotStory;
class UObject;
struct FInkpotValue;
#ifdef INKPOT_InkpotStory_generated_h
#error "InkpotStory.generated.h already included, missing '#pragma once' in InkpotStory.h"
#endif
#define INKPOT_InkpotStory_generated_h

#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_10_DELEGATE \
INKPOT_API void FOnStoryContinue_DelegateWrapper(const FMulticastScriptDelegate& OnStoryContinue, UInkpotStory* Story);


#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_11_DELEGATE \
INKPOT_API void FOnMakeChoice_DelegateWrapper(const FMulticastScriptDelegate& OnMakeChoice, UInkpotStory* Story, UInkpotChoice* Choice);


#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_12_DELEGATE \
INKPOT_API void FOnChoosePath_DelegateWrapper(const FMulticastScriptDelegate& OnChoosePath, UInkpotStory* Story, const FString& Path);


#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_13_DELEGATE \
INKPOT_API void FOnSwitchFlow_DelegateWrapper(const FMulticastScriptDelegate& OnSwitchFlow, UInkpotStory* Story, const FString& Flow);


#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_14_DELEGATE \
INKPOT_API void FOnInkpotVariableChange_DelegateWrapper(const FScriptDelegate& OnInkpotVariableChange, UInkpotStory* Story, const FString& Variable, FInkpotValue const& NewValue);


#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_15_DELEGATE \
INKPOT_API FInkpotValue FInkpotExternalFunction_DelegateWrapper(const FScriptDelegate& InkpotExternalFunction, TArray<FInkpotValue> const& Values);


#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_16_DELEGATE \
INKPOT_API void FOnStoryLoadJSON_DelegateWrapper(const FMulticastScriptDelegate& OnStoryLoadJSON, UInkpotStory* Story);


#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_SPARSE_DATA
#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadJSON); \
	DECLARE_FUNCTION(execToJSON); \
	DECLARE_FUNCTION(execUnbindExternalFunction); \
	DECLARE_FUNCTION(execBindExternalFunction); \
	DECLARE_FUNCTION(execGetNamedContentForPath); \
	DECLARE_FUNCTION(execGetNamedContentForKnot); \
	DECLARE_FUNCTION(execGetNamedContent); \
	DECLARE_FUNCTION(execClearVariableChange); \
	DECLARE_FUNCTION(execSetOnVariableChange); \
	DECLARE_FUNCTION(execSetEmpty); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execGetInt); \
	DECLARE_FUNCTION(execSetInt); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execChoosePathString); \
	DECLARE_FUNCTION(execChoosePath); \
	DECLARE_FUNCTION(execTagsForContentAtPath); \
	DECLARE_FUNCTION(execGlobalTags); \
	DECLARE_FUNCTION(execGetCurrentTags); \
	DECLARE_FUNCTION(execGetAliveFlowCount); \
	DECLARE_FUNCTION(execGetAliveFlowNames); \
	DECLARE_FUNCTION(execIsFlowAlive); \
	DECLARE_FUNCTION(execSwitchToDefautFlow); \
	DECLARE_FUNCTION(execGetCurrentFlowName); \
	DECLARE_FUNCTION(execRemoveFlow); \
	DECLARE_FUNCTION(execSwitchFlow); \
	DECLARE_FUNCTION(execChooseChoiceIndex); \
	DECLARE_FUNCTION(execChooseChoice); \
	DECLARE_FUNCTION(execGetCurrentChoices); \
	DECLARE_FUNCTION(execHasChoices); \
	DECLARE_FUNCTION(execGetCurrentLine); \
	DECLARE_FUNCTION(execGetCurrentText); \
	DECLARE_FUNCTION(execCanContinue); \
	DECLARE_FUNCTION(execContinueMaximallyAtPath); \
	DECLARE_FUNCTION(execContinueMaximally); \
	DECLARE_FUNCTION(execContinue);


#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_ACCESSORS
#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkpotStory(); \
	friend struct Z_Construct_UClass_UInkpotStory_Statics; \
public: \
	DECLARE_CLASS(UInkpotStory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inkpot"), NO_API) \
	DECLARE_SERIALIZER(UInkpotStory)


#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInkpotStory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInkpotStory(UInkpotStory&&); \
	NO_API UInkpotStory(const UInkpotStory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkpotStory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkpotStory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkpotStory) \
	NO_API virtual ~UInkpotStory();


#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_18_PROLOG
#define FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_SPARSE_DATA \
	FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_ACCESSORS \
	FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INKPOT_API UClass* StaticClass<class UInkpotStory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_savou_OneDrive_Music_Documents_Unreal_Projects_InkpotDemo_release_InkpotDemo_release_InkpotDemo_Plugins_Inkpot_Source_Inkpot_Public_Inkpot_InkpotStory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
