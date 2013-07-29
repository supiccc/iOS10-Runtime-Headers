/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UILabel;

@interface UIPickerContentView : UIView  {
    UILabel *_titleLabel;
    UIImageView *_checkView;
    struct { 
        unsigned int checked : 1; 
        unsigned int highlighted : 1; 
    } _pickerContentViewFlags;
}

@property(getter=isChecked) BOOL checked;
@property(readonly) UILabel * titleLabel;

+ (float)_checkmarkOffset;

- (void)dealloc;
- (id)checkedColor;
- (BOOL)isChecked;
- (float)labelWidthForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_isSelectable;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)titleLabel;
- (void)setChecked:(BOOL)arg1;
- (void)layoutSubviews;

@end