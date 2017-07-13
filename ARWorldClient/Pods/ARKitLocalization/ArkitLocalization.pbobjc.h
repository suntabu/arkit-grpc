// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: arkit_localization.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class ARLARKitCameraPos;
@class ARLARKitImage;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - ARLArkitLocalizationRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface ARLArkitLocalizationRoot : GPBRootObject
@end

#pragma mark - ARLARInfo

typedef GPB_ENUM(ARLARInfo_FieldNumber) {
  ARLARInfo_FieldNumber_ArImage = 1,
  ARLARInfo_FieldNumber_ArWorldTransform = 2,
};

@interface ARLARInfo : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ARLARKitImage *arImage;
/** Test to see if @c arImage has been set. */
@property(nonatomic, readwrite) BOOL hasArImage;

@property(nonatomic, readwrite, strong, null_resettable) ARLARKitCameraPos *arWorldTransform;
/** Test to see if @c arWorldTransform has been set. */
@property(nonatomic, readwrite) BOOL hasArWorldTransform;

@end

#pragma mark - ARLARKitImage

typedef GPB_ENUM(ARLARKitImage_FieldNumber) {
  ARLARKitImage_FieldNumber_PixeBuffer = 1,
  ARLARKitImage_FieldNumber_Timestamp = 2,
};

/**
 * captured image provided by ARFrame
 **/
@interface ARLARKitImage : GPBMessage

/** CVPixelBuffer presented in byte[] format */
@property(nonatomic, readwrite, copy, null_resettable) NSData *pixeBuffer;

/** time stamp of when the image is captured */
@property(nonatomic, readwrite) double timestamp;

@end

#pragma mark - ARLARKitCameraPos

typedef GPB_ENUM(ARLARKitCameraPos_FieldNumber) {
  ARLARKitCameraPos_FieldNumber_MArray = 1,
};

@interface ARLARKitCameraPos : GPBMessage

/** 4*4 matrix */
@property(nonatomic, readwrite, strong, null_resettable) GPBFloatArray *mArray;
/** The number of items in @c mArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger mArray_Count;

@end

#pragma mark - ARLARWorld2World

typedef GPB_ENUM(ARLARWorld2World_FieldNumber) {
  ARLARWorld2World_FieldNumber_MArray = 1,
};

@interface ARLARWorld2World : GPBMessage

/** 4*4 matrix */
@property(nonatomic, readwrite, strong, null_resettable) GPBFloatArray *mArray;
/** The number of items in @c mArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger mArray_Count;

@end

#pragma mark - ARLServerResponse

typedef GPB_ENUM(ARLServerResponse_FieldNumber) {
  ARLServerResponse_FieldNumber_Succeed = 1,
};

@interface ARLServerResponse : GPBMessage

@property(nonatomic, readwrite) int32_t succeed;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
