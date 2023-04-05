// Autogenerated from Pigeon (v9.1.0), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, PigeonSensorType) {
  /// A built-in wide-angle camera.
  ///
  /// The wide angle sensor is the default sensor for iOS
  PigeonSensorTypeWideAngle = 0,
  /// A built-in camera with a shorter focal length than that of the wide-angle camera.
  PigeonSensorTypeUltraWideAngle = 1,
  /// A built-in camera device with a longer focal length than the wide-angle camera.
  PigeonSensorTypeTelephoto = 2,
  /// A device that consists of two cameras, one Infrared and one YUV.
  ///
  /// iOS only
  PigeonSensorTypeTrueDepth = 3,
  PigeonSensorTypeUnknown = 4,
};

typedef NS_ENUM(NSUInteger, CamerAwesomePermission) {
  CamerAwesomePermissionStorage = 0,
  CamerAwesomePermissionCamera = 1,
  CamerAwesomePermissionLocation = 2,
  CamerAwesomePermissionRecord_audio = 3,
};

typedef NS_ENUM(NSUInteger, AnalysisImageFormat) {
  AnalysisImageFormatYuv_420 = 0,
  AnalysisImageFormatBgra8888 = 1,
  AnalysisImageFormatJpeg = 2,
  AnalysisImageFormatNv21 = 3,
  AnalysisImageFormatUnknown = 4,
};

typedef NS_ENUM(NSUInteger, AnalysisRotation) {
  AnalysisRotationRotation0deg = 0,
  AnalysisRotationRotation90deg = 1,
  AnalysisRotationRotation180deg = 2,
  AnalysisRotationRotation270deg = 3,
};

@class PreviewSize;
@class ExifPreferences;
@class VideoOptions;
@class PigeonSensorTypeDevice;
@class AndroidFocusSettings;
@class PlaneWrapper;
@class CropRectWrapper;
@class AnalysisImageWrapper;

@interface PreviewSize : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithWidth:(NSNumber *)width
    height:(NSNumber *)height;
@property(nonatomic, strong) NSNumber * width;
@property(nonatomic, strong) NSNumber * height;
@end

@interface ExifPreferences : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithSaveGPSLocation:(NSNumber *)saveGPSLocation;
@property(nonatomic, strong) NSNumber * saveGPSLocation;
@end

@interface VideoOptions : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithFileType:(NSString *)fileType
    codec:(NSString *)codec;
@property(nonatomic, copy) NSString * fileType;
@property(nonatomic, copy) NSString * codec;
@end

@interface PigeonSensorTypeDevice : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithSensorType:(PigeonSensorType)sensorType
    name:(NSString *)name
    iso:(NSNumber *)iso
    flashAvailable:(NSNumber *)flashAvailable
    uid:(NSString *)uid;
@property(nonatomic, assign) PigeonSensorType sensorType;
/// A localized device name for display in the user interface.
@property(nonatomic, copy) NSString * name;
/// The current exposure ISO value.
@property(nonatomic, strong) NSNumber * iso;
/// A Boolean value that indicates whether the flash is currently available for use.
@property(nonatomic, strong) NSNumber * flashAvailable;
/// An identifier that uniquely identifies the device.
@property(nonatomic, copy) NSString * uid;
@end

@interface AndroidFocusSettings : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithAutoCancelDurationInMillis:(NSNumber *)autoCancelDurationInMillis;
/// The auto focus will be canceled after the given [autoCancelDurationInMillis].
/// If [autoCancelDurationInMillis] is equals to 0 (or less), the auto focus
/// will **not** be canceled. A manual `focusOnPoint` call will be needed to
/// focus on an other point.
/// Minimal duration of [autoCancelDurationInMillis] is 1000 ms. If set
/// between 0 (exclusive) and 1000 (exclusive), it will be raised to 1000.
@property(nonatomic, strong) NSNumber * autoCancelDurationInMillis;
@end

@interface PlaneWrapper : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithBytes:(FlutterStandardTypedData *)bytes
    bytesPerRow:(NSNumber *)bytesPerRow
    bytesPerPixel:(nullable NSNumber *)bytesPerPixel
    width:(nullable NSNumber *)width
    height:(nullable NSNumber *)height;
@property(nonatomic, strong) FlutterStandardTypedData * bytes;
@property(nonatomic, strong) NSNumber * bytesPerRow;
@property(nonatomic, strong, nullable) NSNumber * bytesPerPixel;
@property(nonatomic, strong, nullable) NSNumber * width;
@property(nonatomic, strong, nullable) NSNumber * height;
@end

@interface CropRectWrapper : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithLeft:(NSNumber *)left
    top:(NSNumber *)top
    width:(NSNumber *)width
    height:(NSNumber *)height;
@property(nonatomic, strong) NSNumber * left;
@property(nonatomic, strong) NSNumber * top;
@property(nonatomic, strong) NSNumber * width;
@property(nonatomic, strong) NSNumber * height;
@end

@interface AnalysisImageWrapper : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithFormat:(AnalysisImageFormat)format
    bytes:(nullable FlutterStandardTypedData *)bytes
    width:(NSNumber *)width
    height:(NSNumber *)height
    planes:(nullable NSArray<PlaneWrapper *> *)planes
    cropRect:(nullable CropRectWrapper *)cropRect
    rotation:(AnalysisRotation)rotation;
@property(nonatomic, assign) AnalysisImageFormat format;
@property(nonatomic, strong, nullable) FlutterStandardTypedData * bytes;
@property(nonatomic, strong) NSNumber * width;
@property(nonatomic, strong) NSNumber * height;
@property(nonatomic, strong, nullable) NSArray<PlaneWrapper *> * planes;
@property(nonatomic, strong, nullable) CropRectWrapper * cropRect;
@property(nonatomic, assign) AnalysisRotation rotation;
@end

/// The codec used by AnalysisImageUtils.
NSObject<FlutterMessageCodec> *AnalysisImageUtilsGetCodec(void);

@protocol AnalysisImageUtils
- (void)nv21toJpegNv21Image:(AnalysisImageWrapper *)nv21Image jpegQuality:(NSNumber *)jpegQuality completion:(void (^)(AnalysisImageWrapper *_Nullable, FlutterError *_Nullable))completion;
- (void)yuv420toJpegYuvImage:(AnalysisImageWrapper *)yuvImage jpegQuality:(NSNumber *)jpegQuality completion:(void (^)(AnalysisImageWrapper *_Nullable, FlutterError *_Nullable))completion;
- (void)yuv420toNv21YuvImage:(AnalysisImageWrapper *)yuvImage completion:(void (^)(AnalysisImageWrapper *_Nullable, FlutterError *_Nullable))completion;
- (void)bgra8888toJpegBgra8888image:(AnalysisImageWrapper *)bgra8888image jpegQuality:(NSNumber *)jpegQuality completion:(void (^)(AnalysisImageWrapper *_Nullable, FlutterError *_Nullable))completion;
@end

extern void AnalysisImageUtilsSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<AnalysisImageUtils> *_Nullable api);

/// The codec used by CameraInterface.
NSObject<FlutterMessageCodec> *CameraInterfaceGetCodec(void);

@protocol CameraInterface
- (void)setupCameraSensor:(NSString *)sensor aspectRatio:(NSString *)aspectRatio zoom:(NSNumber *)zoom mirrorFrontCamera:(NSNumber *)mirrorFrontCamera enablePhysicalButton:(NSNumber *)enablePhysicalButton flashMode:(NSString *)flashMode captureMode:(NSString *)captureMode enableImageStream:(NSNumber *)enableImageStream exifPreferences:(ExifPreferences *)exifPreferences completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
/// @return `nil` only when `error != nil`.
- (nullable NSArray<NSString *> *)checkPermissionsWithError:(FlutterError *_Nullable *_Nonnull)error;
/// Returns given [CamerAwesomePermission] list (as String). Location permission might be
/// refused but the app should still be able to run.
- (void)requestPermissionsSaveGpsLocation:(NSNumber *)saveGpsLocation completion:(void (^)(NSArray<NSString *> *_Nullable, FlutterError *_Nullable))completion;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)getPreviewTextureIdWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)takePhotoPath:(NSString *)path completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)recordVideoPath:(NSString *)path options:(nullable VideoOptions *)options completion:(void (^)(FlutterError *_Nullable))completion;
- (void)pauseVideoRecordingWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)resumeVideoRecordingWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)receivedImageFromStreamWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)stopRecordingVideoWithCompletion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
/// @return `nil` only when `error != nil`.
- (nullable NSArray<PigeonSensorTypeDevice *> *)getFrontSensorsWithError:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSArray<PigeonSensorTypeDevice *> *)getBackSensorsWithError:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)startWithError:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)stopWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)setFlashModeMode:(NSString *)mode error:(FlutterError *_Nullable *_Nonnull)error;
- (void)handleAutoFocusWithError:(FlutterError *_Nullable *_Nonnull)error;
/// Starts auto focus on a point at ([x], [y]).
///
/// On Android, you can control after how much time you want to switch back
/// to passive focus mode with [androidFocusSettings].
- (void)focusOnPointPreviewSize:(PreviewSize *)previewSize x:(NSNumber *)x y:(NSNumber *)y androidFocusSettings:(nullable AndroidFocusSettings *)androidFocusSettings error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setZoomZoom:(NSNumber *)zoom error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setMirrorFrontCameraMirror:(NSNumber *)mirror error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setSensorSensor:(NSString *)sensor deviceId:(nullable NSString *)deviceId error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setCorrectionBrightness:(NSNumber *)brightness error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)getMaxZoomWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)setCaptureModeMode:(NSString *)mode error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setRecordingAudioModeEnableAudio:(NSNumber *)enableAudio completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
/// @return `nil` only when `error != nil`.
- (nullable NSArray<PreviewSize *> *)availableSizesWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)refreshWithError:(FlutterError *_Nullable *_Nonnull)error;
- (nullable PreviewSize *)getEffectivPreviewSizeWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)setPhotoSizeSize:(PreviewSize *)size error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setPreviewSizeSize:(PreviewSize *)size error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setAspectRatioAspectRatio:(NSString *)aspectRatio error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setupImageAnalysisStreamFormat:(NSString *)format width:(NSNumber *)width maxFramesPerSecond:(nullable NSNumber *)maxFramesPerSecond autoStart:(NSNumber *)autoStart error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setExifPreferencesExifPreferences:(ExifPreferences *)exifPreferences completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)startAnalysisWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)stopAnalysisWithError:(FlutterError *_Nullable *_Nonnull)error;
- (void)setFilterMatrix:(NSArray<NSNumber *> *)matrix error:(FlutterError *_Nullable *_Nonnull)error;
- (void)isVideoRecordingAndImageAnalysisSupportedSensor:(NSString *)sensor completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
@end

extern void CameraInterfaceSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<CameraInterface> *_Nullable api);

NS_ASSUME_NONNULL_END
