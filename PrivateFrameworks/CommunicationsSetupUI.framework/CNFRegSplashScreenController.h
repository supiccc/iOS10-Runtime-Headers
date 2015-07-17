/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegSplashScreenController : PSViewController <CNFRegFirstRunExperience> {
    <CNFRegFirstRunDelegate> *_delegate;
    UIButton *_learnMoreButton;
    CNFRegController *_regController;
}

@property (nonatomic, readonly) int currentAppearanceStyle;
@property (nonatomic, retain) UIBarButtonItem *customLeftButton;
@property (nonatomic, retain) UIBarButtonItem *customRightButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNFRegFirstRunDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CNFRegController *regController;
@property (readonly) Class superclass;

- (void)_getStartedPressed:(id)arg1;
- (void)_learnMorePressed:(id)arg1;
- (int)currentAppearanceStyle;
- (id)customLeftButton;
- (id)customRightButton;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (void)loadView;
- (id)regController;
- (void)setCustomLeftButton:(id)arg1;
- (void)setCustomRightButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRegController:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)userInteractionColor;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willBecomeActive;

@end
