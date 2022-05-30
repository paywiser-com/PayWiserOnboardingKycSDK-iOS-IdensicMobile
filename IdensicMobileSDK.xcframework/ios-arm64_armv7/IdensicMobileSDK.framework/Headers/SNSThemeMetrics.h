//
//  SNSThemeMetrics.h
//  IdensicMobileSDK
//

#import "SNSThemeSection.h"

typedef NS_ENUM(NSUInteger, SNSCloseBarItemStyle) {

    /// Navigation bar item with 'sns_navigation_cancel' or 'sns_navigation_close' translations by context.
    SNSCloseBarItemStyle_Text,
    
    /// Navigation bar item with 'closeIcon' image.
    SNSCloseBarItemStyle_Icon,
};

typedef NS_ENUM(NSUInteger, SNSCloseBarItemAlignment) {

    /// Placing the close bar item in the right side of the navigation bar.
    SNSCloseBarItemAlignment_Right,
    
    /// Placing the close bar item in the left side of the navigation bar.
    SNSCloseBarItemAlignment_Left,
};

typedef NS_ENUM(NSUInteger, SNSCardStyle) {

    /// With `.plain` style neither border nor background will be rendered.
    SNSCardStyle_Plain,
    
    /// With `.filled` style the background will be filled out.
    SNSCardStyle_Filled,
    
    /// With `.bordered` style to a border will be rendered around the card.
    SNSCardStyle_Bordered,
};

@interface SNSThemeMetrics : SNSThemeSection

#pragma mark - Common

/// The status bar style on all the screens.
/// Default is `.default`.
@property (nonatomic) UIStatusBarStyle commonStatusBarStyle;

/// The loading spinner style.
/// Default is `.medium` for iOS 13+ and `.gray` for previous ones.
@property (nonatomic) UIActivityIndicatorViewStyle activityIndicatorStyle;

/// The preferred style of the close bar button. The options are `.icon` and `.text`.
/// Default is `.icon`.
@property (nonatomic) SNSCloseBarItemStyle preferredCloseBarItemStyle;

/// The preferred alignment of the close bar button. The options are `.right` and `.left`.
/// Default is `.right`.
@property (nonatomic) SNSCloseBarItemAlignment preferredCloseBarItemAlignment;


#pragma mark - Content

/// The horizontal margins of the screen content.
/// Default is 16pt.
@property (nonatomic) CGFloat screenHorizontalMargin;


#pragma mark - Buttons

/// The primary and secondary buttons height.
/// Default is 48pt.
@property (nonatomic) CGFloat buttonHeight;

/// The primary and secondary buttons corner radius.
/// Default is 8pt.
@property (nonatomic) CGFloat buttonCornerRadius;

/// The secondary button border width.
/// Default is 1pt.
///
/// @discussion
/// Bordered primary buttons are not supported at the moment.
@property (nonatomic) CGFloat buttonBorderWidth;


#pragma mark - Camera

/// The status bar style on the Camera Screen.
/// Default is `.default`.
@property (nonatomic) UIStatusBarStyle cameraStatusBarStyle;


#pragma mark - Fields

/// The input fields height.
/// Default is 48pt.
///
/// @discussion
/// Not used at the moment.
@property (nonatomic) CGFloat fieldHeight;

/// The input fields border width. Used for the search bar only at the moment.
/// Default is 0pt.
@property (nonatomic) CGFloat fieldBorderWidth;

/// The input fields corner radius. Used for the search bar only at the moment.
/// Default is 8pt.
@property (nonatomic) CGFloat fieldCornerRadius;


#pragma mark - Viewport

/// The selfie viewport border width.
/// Default is 8pt.
@property (nonatomic) CGFloat viewportBorderWidth;


#pragma mark - Bottom Sheet

/// The bottom sheet corners radius.
/// Default is 16pt.
@property (nonatomic) CGFloat bottomSheetCornerRadius;

/// The bottom sheet handle size.
/// Default is 36pt x 4pt.
@property (nonatomic) CGSize bottomSheetHandleSize;


#pragma mark - Card Style

/// The verification steps card style.
/// Default is `.filled`.
@property (nonatomic) SNSCardStyle verificationStepCardStyle;

/// The support items card style.
/// Default is `.bordered`.
@property (nonatomic) SNSCardStyle supportItemCardStyle;

/// The document types card style.
/// Default is `.filled`.
@property (nonatomic) SNSCardStyle documentTypeCardStyle;

/// The selected country card style.
/// Default is `.filled`.
@property (nonatomic) SNSCardStyle selectedCountryCardStyle;

/// The cards' corners radius.
/// Default is 8pt.
@property (nonatomic) CGFloat cardCornerRadius;

/// The cards' border width.
/// Default is 1pt.
///
/// @discussion
/// Used for the cards with the `.bordered` card style only.
@property (nonatomic) CGFloat cardBorderWidth;


#pragma mark - Alignment

/// The alignment for the screen headers.
/// Default is `.center`.
@property (nonatomic) NSTextAlignment screenHeaderAlignment;

/// The alignment for the section headers.
/// Default is `.natural`.
@property (nonatomic) NSTextAlignment sectionHeaderAlignment;
@property (nonatomic) NSTextAlignment listSectionTitleAlignment SNS_THEME_DEPRECATED("Use `metrics.sectionHeaderAlignment` instead.");


@end
