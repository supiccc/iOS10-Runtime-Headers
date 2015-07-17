/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBannerItem : NSObject <SBUIQuietModePlayability>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id /* block */)action;
- (id)actionWithIdentifier:(id)arg1;
- (BOOL)canShowInAssistant;
- (BOOL)canShowWhileLocked;
- (id)defaultActionWithContext:(id)arg1;
- (BOOL)hasSubActions;
- (BOOL)inertWhenLocked;
- (BOOL)isCritical;
- (BOOL)isSticky;
- (id)lockScreenActionContextWithContext:(id)arg1;
- (id)message;
- (BOOL)overridesQuietMode;
- (unsigned int)priority;
- (id)pullDownNotification;
- (BOOL)shouldPlayLightsAndSirens;
- (BOOL)shouldShowModalSubActions;
- (id)sortDate;
- (id)sound;
- (id)subActionLabels;
- (id)subActions;
- (id)title;

@end
