// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OCEANPLUGIN_InfiniteSystemComponent_generated_h
#error "InfiniteSystemComponent.generated.h already included, missing '#pragma once' in InfiniteSystemComponent.h"
#endif
#define OCEANPLUGIN_InfiniteSystemComponent_generated_h

#define VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_RPC_WRAPPERS
#define VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUInfiniteSystemComponent(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_UInfiniteSystemComponent(); \
	public: \
	DECLARE_CLASS(UInfiniteSystemComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(UInfiniteSystemComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_INCLASS \
	private: \
	static void StaticRegisterNativesUInfiniteSystemComponent(); \
	friend OCEANPLUGIN_API class UClass* Z_Construct_UClass_UInfiniteSystemComponent(); \
	public: \
	DECLARE_CLASS(UInfiniteSystemComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(UInfiniteSystemComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInfiniteSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInfiniteSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfiniteSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfiniteSystemComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UInfiniteSystemComponent(const UInfiniteSystemComponent& InCopy); \
public:


#define VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInfiniteSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UInfiniteSystemComponent(const UInfiniteSystemComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfiniteSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfiniteSystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInfiniteSystemComponent)


#define VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_39_PROLOG
#define VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_RPC_WRAPPERS \
	VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_INCLASS \
	VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_INCLASS_NO_PURE_DECLS \
	VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InfiniteSystemComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRSeaBattle_Plugins_OceanPlugin_Source_OceanPlugin_Classes_InfiniteSystemComponent_h


#define FOREACH_ENUM_EFOLLOWMETHOD(op) \
	op(LookAtLocation) \
	op(FollowCamera) \
	op(FollowPawn) \
	op(Stationary) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
