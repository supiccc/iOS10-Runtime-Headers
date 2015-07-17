/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUserActivity : NSObject {
    id _delegate;
    id _frameworkDelegate;
    id _internal;
}

@property (setter=_setFrameworkDelegate:) <NSUserActivityDelegate> *_frameworkDelegate;
@property (setter=_setFrameworkPayload:, copy) NSDictionary *_frameworkPayload;
@property (readonly, retain) LSUserActivity *_internalUserActivity;
@property (readonly, copy) NSDate *_lastActivityDate;
@property (setter=_setOptions:, copy) NSDictionary *_options;
@property (readonly) unsigned int _suggestedActionType;
@property (readonly, retain) NSUUID *_uniqueIdentifier;
@property (readonly, copy) NSString *activityType;
@property <NSUserActivityDelegate> *delegate;
@property BOOL needsSave;
@property BOOL supportsContinuationStreams;
@property (copy) NSString *title;
@property (copy) NSDictionary *userInfo;
@property (copy) NSURL *webpageURL;

+ (void)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_reportToCoreDuet:(id)arg1;
+ (id)_userFacingErrorForLaunchServicesError:(id)arg1 userInfo:(id)arg2;

- (id)_frameworkDelegate;
- (id)_frameworkPayload;
- (id)_initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned int)arg2 options:(id)arg3;
- (id)_internalUserActivity;
- (id)_lastActivityDate;
- (id)_options;
- (void)_removeFrameworkPayloadValueForKey:(id)arg1;
- (void)_removeUserInfoValueForKey:(id)arg1;
- (void)_resignCurrent;
- (void)_setFrameworkDelegate:(id)arg1;
- (void)_setFrameworkPayload:(id)arg1;
- (void)_setLastActivityDate:(id)arg1;
- (void)_setOptions:(id)arg1;
- (unsigned int)_suggestedActionType;
- (id)_uniqueIdentifier;
- (void)_updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2;
- (void)_updateUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)activityType;
- (void)addUserInfoEntriesFromDictionary:(id)arg1;
- (void)becomeCurrent;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;
- (void)didSynchronizeActivity;
- (void)getContinuationStreamsWithCompletionHandler:(id /* block */)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithActivityType:(id)arg1;
- (id)initWithInternalUserActivity:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;
- (BOOL)needsSave;
- (void)setDelegate:(id)arg1;
- (void)setNeedsSave:(BOOL)arg1;
- (void)setSupportsContinuationStreams:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWebPageURL:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (BOOL)supportsContinuationStreams;
- (id)title;
- (id)typeIdentifier;
- (id)userInfo;
- (id)webPageURL;
- (id)webpageURL;
- (void)willSynchronizeActivity;

@end
