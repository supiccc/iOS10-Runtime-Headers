/* Generated by RuntimeBrowser.
 */

@protocol CAMCameraRollControllerPresentationDelegate <NSObject>

@required

- (UIViewController *)cameraRollControllerPresentingViewController:(CAMCameraRollController *)arg1;

@optional

- (void)cameraRollController:(CAMCameraRollController *)arg1 shouldHideSourceAsset:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cameraRollControllerSourceAssetRect:(CAMCameraRollController *)arg1;

@end