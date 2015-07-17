/* Generated by RuntimeBrowser.
 */

@protocol SBUIPasscodeLockView <NSObject>

@required

- (void)autofillForSuccessfulMesaAttemptWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (float)backgroundAlpha;
- (<SBFLegibilitySettingsProvider> *)backgroundLegibilitySettingsProvider;
- (unsigned int)biometricMatchMode;
- (UIColor *)customBackgroundColor;
- (<SBUIPasscodeLockViewDelegate> *)delegate;
- (BOOL)isScreenOn;
- (NSString *)passcode;
- (BOOL)playsKeypadSounds;
- (void)reset;
- (void)resetForFailedMesaAttemptWithStatusText:(NSString *)arg1 andSubtitle:(NSString *)arg2;
- (void)resetForFailedPasscode;
- (void)resetForScreenOff;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(BOOL)arg1;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setBackgroundLegibilitySettingsProvider:(id <SBFLegibilitySettingsProvider>)arg1;
- (void)setBiometricMatchMode:(unsigned int)arg1;
- (void)setCustomBackgroundColor:(UIColor *)arg1;
- (void)setDelegate:(id <SBUIPasscodeLockViewDelegate>)arg1;
- (void)setPlaysKeypadSounds:(BOOL)arg1;
- (void)setScreenOn:(BOOL)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (void)setShowsStatusField:(BOOL)arg1;
- (BOOL)showsEmergencyCallButton;
- (BOOL)showsStatusField;
- (int)style;
- (void)updateStatusText:(NSString *)arg1 subtitle:(NSString *)arg2 animated:(BOOL)arg3;

@end
