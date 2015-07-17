/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPButton : UIButton {
    _UIBackdropView *_backdropView;
    BOOL _blursBackground;
    int _color;
    BOOL _roundsCorners;
    BOOL _usesOverlayBlendingForContents;
}

@property (nonatomic) BOOL blursBackground;
@property (nonatomic) BOOL roundsCorners;
@property (nonatomic) BOOL usesOverlayBlendingForContents;

+ (float)defaultHeight;
+ (float)defaultHeightForColor:(int)arg1;
+ (id)defaultStandardFont;
+ (float)defaultWidthForCenterButton;
+ (float)defaultWidthForSideButton;
+ (float)maxWidthForCenterButton;

- (void)_animationDidEnd;
- (void)_animationWillBegin;
- (BOOL)blursBackground;
- (int)buttonColor;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (BOOL)roundsCorners;
- (void)setBackgroundColor:(id)arg1;
- (void)setBlursBackground:(BOOL)arg1;
- (void)setButtonColor:(int)arg1;
- (void)setDisabledButtonColor:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIconVerticalOffset:(float)arg1;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setMinimumTitleFontSize:(float)arg1;
- (void)setMinimumTitleFontSize:(float)arg1 maximumTitleFontSize:(float)arg2;
- (void)setPlusSeparatedTitle:(id)arg1;
- (void)setRoundsCorners:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTitleImagePadding:(float)arg1;
- (void)setTitleVerticalOffset:(float)arg1;
- (void)setUsesOverlayBlendingForContents:(BOOL)arg1;
- (BOOL)usesOverlayBlendingForContents;

@end
