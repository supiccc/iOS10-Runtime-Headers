/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUSheetController : NSObject <UITableViewDataSource, UITableViewDelegate> {
    WebUIAlert *_alert;
    UIAlertController *_alertController;
    NSMutableArray *_alertInvocationQueue;
    id _delegate;
    BOOL _isDismissed;
    UITableView *_tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_alertDidDismissWithAction:(int)arg1;
- (void)_showSheetForAlert:(id)arg1 inView:(id)arg2 withClass:(Class)arg3;
- (void)hideSheet;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showSheetForAlert:(id)arg1;
- (void)showSheetForAlert:(id)arg1 inView:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
