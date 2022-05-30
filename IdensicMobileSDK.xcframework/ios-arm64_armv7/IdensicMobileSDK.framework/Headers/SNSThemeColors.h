//
//  SNSThemeColors.h
//  IdensicMobileSDK
//

#import "SNSThemeSection.h"

@interface SNSThemeColors : SNSThemeSection

#pragma mark - Common

/// Navigation bar items tinting color. Used for the close button only at the moment.
/// Default is #94A0B8 and #FFFFFF with alpha 40% for the dark appearance.
@property (nonatomic, nonnull) UIColor *navigationBarItem;

/// Used for the system alert actions and the toolbar buttons.
/// Default is #1693E9 and #1485D1 for the dark appearance.
@property (nonatomic, nonnull) UIColor *alertTint;


#pragma mark - Backgrounds

/// Used for almost all the screens as the background color (the exception is the Camera Screen, see `cameraBackground`).
/// Default is #FFFFFF and #1E232E for the dark appearance.
@property (nonatomic, nonnull) UIColor *backgroundCommon;

/// Used as a background state color for the verification steps and as a main background color for the `.filled`-style cards.
/// Default is #F6F7F9 and #FFFFFF with alpha 7% for the dark appearance.
@property (nonatomic, nonnull) UIColor *backgroundNeutral;

/// Not used at the moment.
/// Default is #E8F4FD and #072F4B for the dark appearance.
@property (nonatomic, nonnull) UIColor *backgroundInfo;

/// Used as a background state color for the verification steps and as a background color for the auto-generated `images.pictureSuccess`.
/// Default is #18B494 with alpha 12% and #18B494 with alpha 30% for the dark appearance.
@property (nonatomic, nonnull) UIColor *backgroundSuccess;

/// Used as a background state color for the verification steps and as a background color for the auto-generated `images.pictureWarning` and `images.pictureSubmitted`.
/// Default is #F2AA0D with alpha 13% and #F2AA0D with alpha 30% for the dark appearance.
@property (nonatomic, nonnull) UIColor *backgroundWarning;

/// Used as a background state color for the verification steps and as a background color for the auto-generated `images.pictureFailure`.
/// Default is #F05C5C with alpha 12% and #F05C5C with alpha 30% for the dark appearance.
@property (nonatomic, nonnull) UIColor *backgroundCritical;


#pragma mark - Content

/// Used for the text links.
/// Default is #1693E9 and #1485D1 for the dark appearance.
@property (nonatomic, nonnull) UIColor *contentLink;

/// Used as a foreground color for the headlines and some subtitles.
/// Default is #333C4D and #FFFFFF with alpha 85% for the dark appearance.
@property (nonatomic, nonnull) UIColor *contentStrong;

/// Used as a foreground color for the text body, some subtitles and the accessory elements.
/// Default is #5C6B8A and #FFFFFF with alpha 60% for the dark appearance.
@property (nonatomic, nonnull) UIColor *contentNeutral;

/// Used as a foreground color for the minor captions and the light accessory elements.
/// Default is #94A0B8 and #FFFFFF with alpha 40% for the dark appearance.
@property (nonatomic, nonnull) UIColor *contentWeak;

/// Used for the Video Screen's viewport border only at the moment.
/// Default is #1693E9 and #1485D1 for the dark appearance.
@property (nonatomic, nonnull) UIColor *contentInfo;

/// Used as a foreground state color for the verification steps and as a foreground color for the auto-generated `images.pictureSuccess`.
/// Default is #18B494.
@property (nonatomic, nonnull) UIColor *contentSuccess;

/// Used as a foreground state color for the verification steps and as a foreground color for the auto-generated `images.pictureWarning` and `images.pictureSubmitted`.
/// Default is #E6A00B.
@property (nonatomic, nonnull) UIColor *contentWarning;

/// Used as a foreground state color for the verification steps and as a foreground color for the auto-generated `images.pictureFailure`.
/// Default is #F05C5C.
@property (nonatomic, nonnull) UIColor *contentCritical;


#pragma mark - Primary Button

/// The primary button background color in the normal state.
/// Default is #1693E9 and #1485D1 for the dark appearance.
@property (nonatomic, nonnull) UIColor *primaryButtonBackground;

/// The primary button background color in the highlighted state.
/// Default is #1485D1 and #0B4A75 for the dark appearance.
@property (nonatomic, nonnull) UIColor *primaryButtonBackgroundHighlighted;

/// The primary button background color in the disabled state.
/// Default is #A1D2F7 and #072F4B for the dark appearance.
@property (nonatomic, nonnull) UIColor *primaryButtonBackgroundDisabled;

/// The primary button foreground color in the normal state.
/// Default is #FFFFFF and #FFFFFF with alpha 85% for the dark appearance.
@property (nonatomic, nonnull) UIColor *primaryButtonContent;

/// The primary button foreground color in the highlighted state.
/// Default is #FFFFFF and #FFFFFF with alpha 85% for the dark appearance.
@property (nonatomic, nonnull) UIColor *primaryButtonContentHighlighted;

/// The primary button foreground color in the disabled state.
/// Default is #FFFFFF and #0B4A75 for the dark appearance.
@property (nonatomic, nonnull) UIColor *primaryButtonContentDisabled;


#pragma mark - Secondary Button

/// The secondary button background color in the normal state.
/// Default is the clear color.
@property (nonatomic, nonnull) UIColor *secondaryButtonBackground;

/// The secondary button background color in the highlighted state.
/// Default is #E8F4FD and #072F4B for the dark appearance.
@property (nonatomic, nonnull) UIColor *secondaryButtonBackgroundHighlighted;

/// The secondary button background color in the disabled state.
/// Default is the clear color.
@property (nonatomic, nonnull) UIColor *secondaryButtonBackgroundDisabled;

/// The secondary button foreground color in the normal state.
/// Default is #1693E9 and #1485D1 for the dark appearance.
@property (nonatomic, nonnull) UIColor *secondaryButtonContent;

/// The secondary button foreground color in the highlighted state.
/// Default is #1693E9 and #1485D1 for the dark appearance.
@property (nonatomic, nonnull) UIColor *secondaryButtonContentHighlighted;

/// The secondary button foreground color in the disabled state.
/// Default is #A1D2F7 and #0B4A75 for the dark appearance.
@property (nonatomic, nonnull) UIColor *secondaryButtonContentDisabled;


#pragma mark - Card

/// Used as a background color for the cards with `.plain` card style.
/// Default is `nil`.
@property (nonatomic, nullable) UIColor *cardPlainBackground;

/// Used as a background color for the cards with `.bordered` card style.
/// Default is `nil`.
@property (nonatomic, nullable) UIColor *cardBorderedBackground;


#pragma mark - Camera

/// The Camera Screen background color.
/// Default is #1E232E.
@property (nonatomic, nonnull) UIColor *cameraBackground;

/// Used as a tint color for the elements placed on the Camera Screen such as the gallery button, the touch button, etc.
/// Default is #FFFFFF.
@property (nonatomic, nonnull) UIColor *cameraContent;


#pragma mark - Field

/// The background color of the input fields. Used for text fields.
/// Default is #F6F7F9 and #FFFFFF with alpha 7% for the dark appearance.
@property (nonatomic, nonnull) UIColor *fieldBackground;

/// The border color of the input fields. Used for text fields.
/// Default is the clear color.
@property (nonatomic, nonnull) UIColor *fieldBorder;

/// The placeholder color of the input fields. Used for text fields.
/// Default is #94A0B8 and #FFFFFF with alpha 40% for the dark appearance.
@property (nonatomic, nonnull) UIColor *fieldPlaceholder;

/// The content color of the input fields. Used for text fields.
/// Default is #333C4D and #FFFFFF with alpha 85% for the dark appearance.
@property (nonatomic, nonnull) UIColor *fieldContent;

/// The tint color of the input fields. Used for text fields, checkboxes and radio buttons.
/// Default is #1693E9 and #1485D1 for the dark appearance.
@property (nonatomic, nonnull) UIColor *fieldTint;


#pragma mark - List

/// The list separator color.
/// Default is #D1D6E1 and #FFFFFF with alpha 20% for the dark appearance.
@property (nonatomic, nonnull) UIColor *listSeparator;

/// The background color of the selected list item.
/// Default is #F6F7F9 and #FFFFFF with alpha 7% for the dark appearance.
@property (nonatomic, nonnull) UIColor *listSelectedItemBackground;


#pragma mark - Bottom Sheet

/// The foreground color of the bottom sheet handle.
/// Default is #D1D6E1 and #FFFFFF with alpha 20% for the dark appearance.
///
/// @discussion
/// Note that the handle can be both inside (on `bottomSheetBackground` color) and outside (on the `backgroundCommon` color) of the bottom sheet.
@property (nonatomic, nonnull) UIColor *bottomSheetHandle;

/// The background color of the bottom sheet.
/// Default is #FFFFFF and #333C4D for the dark appearance.
@property (nonatomic, nonnull) UIColor *bottomSheetBackground;

@end
