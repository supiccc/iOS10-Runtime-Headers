/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFViewController : NSObject {
    PDFViewControllerPrivate * _private;
}

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toPageView:(id)arg2;
- (void)_prepareHandleSelection;
- (void)_updateHandleSelection;
- (void)_updateWordSelectionForPage:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)clearSelectionState;
- (int)didTapSelectionHandlersForGesture:(id)arg1;
- (id)initWithView:(id)arg1;
- (bool)isSelectingText;
- (void)scrollViewDidEndDecelerating;
- (void)showMenu:(bool)arg1;
- (void)touchLongDown:(id)arg1;
- (void)touchLongMoved:(id)arg1;
- (void)touchLongUp:(id)arg1;
- (void)touchPan:(id)arg1;
- (void)touchSwipe:(id)arg1;
- (void)touchTap:(id)arg1;

@end
