/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKLocationShareBalloonView : CKImageBalloonView {
    UIImageView *_chevron;
    UIView *_horizontalSeparator;
    UIButton *_ignoreButton;
    UILabel *_locationLabel;
    NSString *_locationString;
    int _offerState;
    UIButton *_startSharingButton;
    UILabel *_titleLabel;
    NSString *_titleString;
    UIView *_verticalSeparator;
}

@property (nonatomic, retain) UIImageView *chevron;
@property (nonatomic) <CKLocationShareBalloonViewDelegate> *delegate;
@property (nonatomic, retain) UIView *horizontalSeparator;
@property (nonatomic, retain) UIButton *ignoreButton;
@property (nonatomic, retain) UILabel *locationLabel;
@property (nonatomic, copy) NSString *locationString;
@property (nonatomic) int offerState;
@property (nonatomic, retain) UIButton *startSharingButton;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, copy) NSString *titleString;
@property (nonatomic, retain) UIView *verticalSeparator;

- (void)_ignoreButtonHit:(id)arg1;
- (void)_shareButtonHit:(id)arg1;
- (id)chevron;
- (void)configureForLocationShareOfferChatItem:(id)arg1;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)horizontalSeparator;
- (id)ignoreButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)locationLabel;
- (id)locationString;
- (int)offerState;
- (void)prepareForDisplay;
- (void)setChevron:(id)arg1;
- (void)setHorizontalSeparator:(id)arg1;
- (void)setIgnoreButton:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setLocationString:(id)arg1;
- (void)setOfferState:(int)arg1;
- (void)setStartSharingButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)setVerticalSeparator:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (id)startSharingButton;
- (id)titleLabel;
- (id)titleString;
- (id)verticalSeparator;

@end
