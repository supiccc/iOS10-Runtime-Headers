/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUProgressView : UIView {
    UIActivityIndicatorView *_spinner;
    int _style;
}

@property (readonly) int style;

- (void).cxx_destruct;
- (void)hideAnimated:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 afterDelay:(double)arg3;
- (int)style;

@end
