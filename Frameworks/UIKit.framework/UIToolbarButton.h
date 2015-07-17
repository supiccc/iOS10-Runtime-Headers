/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIToolbarButton : UIControl {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } __additionalSelectionInsets;
    Class _appearanceGuideClass;
    id _appearanceStorage;
    UIToolbarButtonBadge *_badge;
    BOOL _badgeAnimated;
    BOOL _barHeight;
    int _barStyle;
    BOOL _bezel;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _glowAdjust;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _hitRect;
    UIView *_info;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _infoInsets;
    BOOL _isAnimatedTrashButton;
    BOOL _isInTopBar;
    UILabel *_label;
    float _labelHeight;
    float _maximumWidth;
    float _minimumWidth;
    BOOL _onState;
    _UIPressedIndicatorView *_pressedIndicator;
    int _style;
    UIColor *_toolbarTintColor;
}

@property (setter=_setAdditionalSelectionInsets:, nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } _additionalSelectionInsets;
@property (setter=_setAppearanceGuideClass:, nonatomic) Class _appearanceGuideClass;
@property (setter=_setCreatedByBarButtonItem:, nonatomic) BOOL _createdByBarButtonItem;
@property (setter=_setTintColor:, nonatomic, retain) UIColor *_tintColor;
@property (getter=isAnimatedTrashButton, nonatomic) BOOL animatedTrashButton;

+ (id)_defaultLabelColor;
+ (id)_defaultLabelFont;

- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_additionalSelectionInsets;
- (void)_adjustPushButtonForMiniBar:(BOOL)arg1 isChangingBarHeight:(BOOL)arg2;
- (void)_adjustToolbarButtonInfo;
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)arg1;
- (void)_animateImage:(float)arg1 withButtonBar:(id)arg2;
- (void)_animateImage:(float)arg1 withButtonBar:(id)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (Class)_appearanceGuideClass;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_buttonBarHitRect;
- (BOOL)_canGetPadding;
- (BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_createdByBarButtonItem;
- (id)_customOrAccessibilityBackgroundImageForState:(unsigned int)arg1 style:(int)arg2 isMini:(BOOL)arg3;
- (id)_defaultTitleColorForState:(unsigned int)arg1;
- (id)_defaultTitleShadowColorForState:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })_defaultTitleShadowOffsetForState:(unsigned int)arg1;
- (id)_info;
- (BOOL)_infoIsButton;
- (BOOL)_isBordered;
- (BOOL)_isBorderedOtherThanAccessibility;
- (BOOL)_isOn;
- (id)_newButton;
- (float)_paddingForLeft:(BOOL)arg1;
- (void)_positionBadge;
- (void)_setAdditionalSelectionInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)_setBadgeAnimated:(BOOL)arg1;
- (void)_setBadgeValue:(id)arg1;
- (void)_setBarHeight:(float)arg1;
- (void)_setButtonBarHitRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setCreatedByBarButtonItem:(BOOL)arg1;
- (void)_setInTopBar:(BOOL)arg1;
- (void)_setInfoExtremityWidth:(float)arg1 isMin:(BOOL)arg2;
- (void)_setInfoFlexibleWidth:(BOOL)arg1;
- (void)_setInfoWidth:(float)arg1;
- (void)_setLastHighlightSuccessful:(BOOL)arg1;
- (void)_setOn:(BOOL)arg1;
- (void)_setPressed:(BOOL)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1 forBarMetrics:(int)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_setTouchHasHighlighted:(BOOL)arg1;
- (void)_setWantsBlendModeForAccessibilityBackgrounds:(BOOL)arg1;
- (void)_setWantsLetterpressContent;
- (BOOL)_shouldApplyPadding;
- (void)_showPressedIndicator:(BOOL)arg1;
- (BOOL)_showsAccessibilityBackgroundWhenEnabled;
- (void)_sizeView:(id)arg1 toPossibleTitles:(id)arg2 pressedTitle:(id)arg3;
- (id)_tintColor;
- (struct UIOffset { float x1; float x2; })_titlePositionAdjustmentForBarMetrics:(int)arg1;
- (id)_titleTextAttributesForState:(unsigned int)arg1;
- (void)_updateInfoTextColorsForState:(unsigned int)arg1;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned int)arg2;
- (BOOL)_useBarHeight;
- (BOOL)_useSilverLook;
- (BOOL)_wantsAccessibilityButtonShapes;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)dealloc;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithImage:(id)arg1 pressedImage:(id)arg2 label:(id)arg3 labelHeight:(float)arg4 withBarStyle:(int)arg5 withStyle:(int)arg6 withInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg7 possibleTitles:(id)arg8 possibleSystemItems:(id)arg9 withToolbarTintColor:(id)arg10 bezel:(BOOL)arg11 imageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg12 glowInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg13 landscape:(BOOL)arg14;
- (BOOL)isAnimatedTrashButton;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setAnimatedTrashButton:(BOOL)arg1;
- (void)setBarStyle:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setSizesToFitImage:(BOOL)arg1;
- (void)setToolbarTintColor:(id)arg1;
- (void)setUseSelectedImage:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
