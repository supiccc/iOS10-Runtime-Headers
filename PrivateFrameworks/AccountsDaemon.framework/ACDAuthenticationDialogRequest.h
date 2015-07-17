/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAuthenticationDialogRequest : NSObject {
    ACAccount *_account;
    NSString *_authDelegateClassBundlePath;
    NSString *_authDelegateClassName;
    id /* block */ _completion;
    BOOL _confirmationRequired;
    NSURL *_url;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, copy) NSString *authDelegateClassBundlePath;
@property (nonatomic, copy) NSString *authDelegateClassName;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) BOOL confirmationRequired;
@property (nonatomic, copy) NSURL *url;

- (void).cxx_destruct;
- (id)account;
- (id)authDelegateClassBundlePath;
- (id)authDelegateClassName;
- (id /* block */)completion;
- (BOOL)confirmationRequired;
- (void)setAccount:(id)arg1;
- (void)setAuthDelegateClassBundlePath:(id)arg1;
- (void)setAuthDelegateClassName:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setConfirmationRequired:(BOOL)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
