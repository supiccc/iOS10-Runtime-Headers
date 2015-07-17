/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentPassTableCell : UITableViewCell {
    UIActivityIndicatorView *_activityIndicator;
    UIColor *_highlightColor;
    UILabel *_mainLabel;
    UIColor *_mainLabelColor;
    PKPaymentPass *_pass;
    UILabel *_passStateLabel;
    PKPaymentApplication *_paymentApplication;
    UILabel *_secondaryLabel;
    BOOL _showState;
    UIImageView *_snapshotView;
    UIColor *_subTextLabelColor;
}

@property (nonatomic) UIColor *highlightColor;
@property (nonatomic) UIColor *mainLabelColor;
@property (nonatomic) UIColor *subTextLabelColor;

- (id)_stringForPassState:(unsigned int)arg1;
- (id)_textColorForPassState:(unsigned int)arg1;
- (void)dealloc;
- (id)highlightColor;
- (id)initWithPass:(id)arg1 secureElementIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)mainLabelColor;
- (void)setHighlightColor:(id)arg1;
- (void)setMainLabelColor:(id)arg1;
- (void)setShowPassState:(BOOL)arg1;
- (void)setSubTextLabelColor:(id)arg1;
- (id)subTextLabelColor;

@end
