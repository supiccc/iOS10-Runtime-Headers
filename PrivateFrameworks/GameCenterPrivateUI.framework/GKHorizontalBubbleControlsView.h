/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKHorizontalBubbleControlsView : UIView {
    NSArray *_bubbleTokens;
    NSArray *_bubbles;
    float _overlap;
}

@property (nonatomic, retain) NSArray *bubbleTokens;
@property (nonatomic, retain) NSArray *bubbles;
@property (nonatomic) float overlap;

- (id)bubbleTokens;
- (id)bubbles;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (float)overlap;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBubbleTokens:(id)arg1;
- (void)setBubbles:(id)arg1;
- (void)setOverlap:(float)arg1;

@end
