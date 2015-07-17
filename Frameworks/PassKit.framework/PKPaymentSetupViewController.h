/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentSetupViewController : UIViewController <PKPaymentSetupPrivacyFooterViewDelegate> {
    ACAccountStore *_accountStore;
    int _context;
    <PKPaymentSetupViewControllerDelegate> *_delegate;
    NSArray *_eligibleCards;
    PKPaymentWebService *_webService;
}

@property (nonatomic) int context;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSArray *eligibleCards;
@property (nonatomic, retain) PKPaymentWebService *webService;

- (id)_contextSpecificStringForAggdKey:(id)arg1;
- (id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1;
- (void)_next:(id)arg1;
- (void)_pushCardDetailsViewControllerForCredential:(id)arg1;
- (void)_pushCardEntryViewController;
- (void)_pushCardList:(id)arg1;
- (int)context;
- (void)dealloc;
- (id)delegate;
- (void)dismissAboutView:(id)arg1;
- (unsigned int)edgesForExtendedLayout;
- (id)eligibleCards;
- (id)initWithPaymentWebService:(id)arg1 eligibleCards:(id)arg2 context:(int)arg3 delegate:(id)arg4;
- (void)loadView;
- (void)privacyFooterLinkTapped:(id)arg1;
- (void)setContext:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEligibleCards:(id)arg1;
- (void)setWebService:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)webService;

@end
