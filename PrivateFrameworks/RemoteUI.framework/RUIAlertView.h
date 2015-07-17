/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIAlertView : RUIElement {
    UIAlertController *_alertController;
    int _buttonIndex;
    id /* block */ _completion;
    NSString *_message;
    RUIObjectModel<RUIAlertViewDelegate> *_objectModel;
    NSString *_title;
}

@property (nonatomic, retain) NSDictionary *attributes;
@property (nonatomic, readonly) int buttonIndex;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) RUIObjectModel<RUIAlertViewDelegate> *objectModel;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)addButtonWithTitle:(id)arg1 URL:(id)arg2 destructive:(BOOL)arg3 attributes:(id)arg4;
- (id)alertController;
- (int)buttonIndex;
- (id /* block */)completion;
- (void)dealloc;
- (id)init;
- (id)message;
- (id)objectModel;
- (void)runAlertInController:(id)arg1 completion:(id /* block */)arg2;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setMessage:(id)arg1;
- (void)setObjectModel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
