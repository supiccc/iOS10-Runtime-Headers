/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookLoginInfoViewController : UITableViewController {
    <SLFacebookLoginInfoViewControllerDelegate> *_delegate;
    SLFacebookLoginInfoFooter *_footerView;
}

@property (nonatomic) <SLFacebookLoginInfoViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_cancelTapped:(id)arg1;
- (void)_signInTapped:(id)arg1;
- (id)delegate;
- (id)init;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (void)viewDidLoad;

@end
