/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSegmentedControlTabBarView : UIView <MKStackingViewControllerSelectorView> {
    UIVisualEffectView *_blurView;
    id /* block */ _didChangeSelectedSegmentIndex;
    BOOL _isBlurred;
    UISegmentedControl *_segmentedControl;
    MKViewWithHairline *_separator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didChangeSelectedSegmentIndex;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isBlurred;
@property (nonatomic, readonly) UISegmentedControl *segmentedControl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_segmentSelectionDidChange;
- (void)dealloc;
- (id /* block */)didChangeSelectedSegmentIndex;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isBlurred;
- (void)layoutSubviews;
- (id)segmentedControl;
- (void)setContentFromViewController:(id)arg1;
- (void)setDidChangeSelectedSegmentIndex:(id /* block */)arg1;
- (void)setIsBlurred:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)updateSelectorView:(id)arg1;

@end
