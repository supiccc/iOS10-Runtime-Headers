/* Generated by RuntimeBrowser.
 */

@protocol _UISearchControllerPresenting <NSObject>

@required

- (UIPresentationController<_UISearchControllerPresenting> *)adaptivePresentationController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalFrameForContainerView;
- (float)resultsControllerContentOffset;
- (UIView *)searchBarContainerView;
- (BOOL)searchBarToBecomeTopAttached;
- (void)setContentVisible:(BOOL)arg1;
- (BOOL)shouldAccountForStatusBar;
- (float)statusBarAdjustment;

@end
