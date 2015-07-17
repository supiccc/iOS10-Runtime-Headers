/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKAuthorizationPresentationController : NSObject <HKHealthPrivacyHostViewControllerDelegate, _HKAuthorizationPresentationController> {
    BOOL _didPresent;
    HKHealthPrivacyHostViewController *_hostViewController;
    _UIAsyncInvocation *_requestCancellationInvocation;
    UIWindow *_savedKeyWindow;
    UIWindow *_window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPresent;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HKHealthPrivacyHostViewController *hostViewController;
@property (nonatomic, retain) _UIAsyncInvocation *requestCancellationInvocation;
@property (nonatomic, retain) UIWindow *savedKeyWindow;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (void)_didFinishDismissing;
- (void)_dismissViewControllerAnimated:(BOOL)arg1;
- (void)_presentRemoteViewController:(id)arg1;
- (void)_presentWithSessionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (BOOL)didPresent;
- (void)healthPrivacyHostViewController:(id)arg1 didFinishWithError:(id)arg2;
- (id)hostViewController;
- (void)presentWithSessionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)requestCancellationInvocation;
- (id)savedKeyWindow;
- (void)setDidPresent:(BOOL)arg1;
- (void)setHostViewController:(id)arg1;
- (void)setRequestCancellationInvocation:(id)arg1;
- (void)setSavedKeyWindow:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)window;

@end
