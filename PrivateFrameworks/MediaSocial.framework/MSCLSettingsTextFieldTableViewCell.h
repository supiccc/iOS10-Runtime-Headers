/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLSettingsTextFieldTableViewCell : UITableViewCell {
    <UITextFieldDelegate> *_delegate;
    BOOL _enabled;
    int _layoutStyle;
    UITextField *_textField;
}

@property (nonatomic) <UITextFieldDelegate> *delegate;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic) int layoutStyle;
@property (nonatomic, readonly) UITextField *textField;

- (void).cxx_destruct;
- (id)delegate;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isEnabled;
- (int)layoutStyle;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setLayoutStyle:(int)arg1;
- (id)textField;

@end
