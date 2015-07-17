/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCalloutBasedAnnotationCalloutController : MKAnnotationCalloutController {
    UICalloutView *_calloutView;
}

- (void).cxx_destruct;
- (void)_addCallout:(id)arg1 forAnnotationView:(id)arg2 anchorPoint:(struct CGPoint { float x1; float x2; })arg3 boundaryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 animated:(BOOL)arg5;
- (BOOL)_isShowingCallout;
- (void)_setDetailAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setRightAccessoryView:(id)arg1 animated:(BOOL)arg2;
- (void)_setSubtitle:(id)arg1 animated:(BOOL)arg2;
- (void)_setTitle:(id)arg1;
- (id)_subtitle;
- (BOOL)calloutContainsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)calloutView:(id)arg1 didMoveToAnchorPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (void)calloutView:(id)arg1 willMoveToAnchorPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (float)defaultCalloutHeight;
- (void)hideCalloutAnimated:(BOOL)arg1;
- (id)init;
- (BOOL)isCalloutExpanded;
- (void)showCalloutForAnnotationView:(id)arg1 animated:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;

@end
