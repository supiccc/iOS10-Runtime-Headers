/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerNavigationBridgeController : UINavigationController <_UIDocumentPickerExtensionViewController> {
    BOOL _hasSetInitialNavigationItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)_documentPickerDidDismiss;
- (void)_doneButton:(id)arg1;
- (void)_locationsMenu:(id)arg1;
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setPickableTypes:(id)arg1;
- (void)_setPickerMode:(unsigned int)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_updateNavigationItem;
- (id)hostingViewController;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;

@end
