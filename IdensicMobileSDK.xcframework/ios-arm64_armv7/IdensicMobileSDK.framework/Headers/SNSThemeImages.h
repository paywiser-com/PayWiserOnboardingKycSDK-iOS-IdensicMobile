//
//  SNSThemeImages.h
//  IdensicMobileSDK
//

#import "SNSThemeSection.h"

@interface SNSThemeImages : SNSThemeSection

#pragma mark - Icons (templates)

/// Used for the close bar button across all the screens.
/// Default is a cross icon.
@property (nonatomic, nonnull) UIImage *iconClose;

/// Used for the back bar button.
/// Default is a back arrow icon. Setting to `nil` forces the system back button to be used instead.
@property (nonatomic, nullable) UIImage *iconBack;

/// Used for the search bar.
/// Default is a magnifying glass icon.
@property (nonatomic, nonnull) UIImage *iconSearch;

/// Used to indicate the disclosability.
/// Default is a simple disclosing arrow icon.
@property (nonatomic, nonnull) UIImage *iconDisclosure;

/// Used for the turned-on flashlight button on the Camera Screen.
/// Default is a filled flash icon.
@property (nonatomic, nonnull) UIImage *iconTorchOn;

/// Used for the turned-off flashlight button on the Camera Screen.
/// Default is an outlined flash icon.
@property (nonatomic, nonnull) UIImage *iconTorchOff;

/// Used for the gallery button on the Camera Screen.
/// Default is a photos stack icon.
@property (nonatomic, nonnull) UIImage *iconGallery;

/// Used for the rotation bar button on the Preview Screen.
/// Default is a photo rotation icon.
@property (nonatomic, nonnull) UIImage *iconRotate;

/// Used for the default E-Mail support item.
/// Default is a letter icon.
@property (nonatomic, nonnull) UIImage *iconMail;

/// Used the play button on the Preview screen.
/// Default is a play icon in the circle.
@property (nonatomic, nonnull) UIImage *iconPlay;

/// Used to compose the auto-generated `pictureSuccess`.
/// Default is a checkmark icon.
@property (nonatomic, nonnull) UIImage *iconSuccess;

/// Used for the warnings bottom sheet and to compose the auto-generated `pictureWarning`.
/// Default is an exclamation mark in the triangle.
@property (nonatomic, nonnull) UIImage *iconWarning;

/// Used to compose the auto-generated `pictureFailure`.
/// Default is a cross icon.
@property (nonatomic, nonnull) UIImage *iconFailure;

/// Used to compose the auto-generated `pictureSubmitted`.
/// Default is an uploading-to-the-cloud icon.
@property (nonatomic, nonnull) UIImage *iconSubmitted;


#pragma mark - Pictures

/// The "success" image. Could be used if you'd like to override the auto-generated one.
/// Default is `nil`
///
/// @discussion
/// The auto-generated image looks like the `iconSuccess` icon in the circles composed on the basis of the `colors.contentSuccess` and `colors.backgroundSuccess` colors.
@property (nonatomic, nullable) UIImage *pictureSuccess;

/// The "warning" image. Could be used if you'd like to override the auto-generated one.
/// Default is `nil`
///
/// @discussion
/// The auto-generated image looks like the `iconWarning` icon in the circles composed on the basis of the `colors.contentWarning` and `colors.backgroundWarning` colors.
@property (nonatomic, nullable) UIImage *pictureWarning;

/// The "failure" image. Could be used if you'd like to override the auto-generated one.
/// Default is `nil`
///
/// @discussion
/// The auto-generated image looks like the `iconFailure` icon in the circles composed on the basis of the `colors.contentCritical` and `colors.backgroundFailure` colors.
@property (nonatomic, nullable) UIImage *pictureFailure;

/// The "submitted" image. Could be used if you'd like to override the auto-generated one.
/// Default is `nil`
///
/// @discussion
/// The auto-generated image looks like the `iconSubmitted` icon in the circles composed on the basis of the `colors.contentWarning` and `colors.backgroundWarning` colors.
@property (nonatomic, nullable) UIImage *pictureSubmitted;


#pragma mark - Verification Steps

/// Verification steps icons.
///
/// Default icons are defined for the following keys: `.identity`, `.selfie`, `.proofOfResidence` and `.applicantData`.
/// Also the `.default` key is filled with the `.identity` icon.
@property (nonatomic, nonnull) NSDictionary<SNSVerificationStepKey, UIImage *> *verificationStepIcons;

- (void)setIcon:(UIImage * _Nullable)icon forVerificationStep:(SNSVerificationStepKey _Nonnull)step NS_SWIFT_UNAVAILABLE("Use .verificationStepIcons instead.");


#pragma mark - Documents

/// Document types icons.
///
/// Default icons are defined for the following keys: `.idCard`, `.passport`, `.drivers` and `.residencePermit`.
/// Also the `.default` key is filled with the `.idCard` icon.
@property (nonatomic, nonnull) NSDictionary<SNSDocumentTypeKey, UIImage *> *documentTypeIcons;

- (void)setIcon:(UIImage * _Nullable)icon forDocumentType:(SNSDocumentTypeKey _Nonnull)documentType NS_SWIFT_UNAVAILABLE("Use .documentTypeIcons instead.");


#pragma mark - Instructions

/// Instruction pictures.
///
/// When an image is referred with one of the following text keys:
///
/// @textblock
/// - `sns_step_{STEP}_{scene}_instructions_image`
/// - `sns_step_{STEP}_{scene}_instructions_doImage`
/// - `sns_step_{STEP}_{scene}_instructions_dontImage`
/// @/textblock
///
/// the sdk will look through `instructionsImages` for the corresponding image object.
/// At that it takes the value of the text key and uses it as a key for `instructionsImages` dictionary.
///
/// Feel free to add your own pictures or use the predefined ones:
///
/// @textblock
/// - `default/facescan`
/// - `default/do_idCard`
/// - `default/dont_idCard`
/// - `default/do_passport`
/// - `default/dont_passport`
/// - `default/do_idCard_backSide`
/// - `default/dont_idCard_backSide`
/// @/textblock
///
@property (nonatomic, nonnull) NSDictionary<NSString *, UIImage *> *instructionsImages;

- (void)setInstructionsImage:(UIImage * _Nullable)image forKey:(NSString * _Nonnull)imageKey NS_SWIFT_UNAVAILABLE("Use .documentTypeIcons instead.");

@end
