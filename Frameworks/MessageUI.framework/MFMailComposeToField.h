/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeToField : MFMailComposeRecipientView {
    MFComposeSMIMELockButton *_smimeButton;
    BOOL _smimeButtonVisible;
    <MFMailComposeToFieldDelegate> *_toFieldDelegate;
}

@property (nonatomic, readonly) MFComposeSMIMELockButton *SMIMEButton;
@property (nonatomic) BOOL smimeButtonVisible;
@property (nonatomic) <MFMailComposeToFieldDelegate> *toFieldDelegate;

- (id)SMIMEButton;
- (void)_setSMIMEButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_tappedSMIMEButton:(id)arg1;
- (id)_textContainerExclusionPathsWithAddButton:(BOOL)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setExpanded:(BOOL)arg1;
- (void)setSmimeButtonVisible:(BOOL)arg1;
- (void)setToFieldDelegate:(id)arg1;
- (BOOL)smimeButtonVisible;
- (id)toFieldDelegate;

@end
