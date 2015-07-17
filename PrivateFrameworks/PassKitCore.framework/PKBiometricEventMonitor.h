/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKBiometricEventMonitor : NSObject <BiometricKitDelegate> {
    BiometricKit *_biometricKit;
    BOOL _fingerDetectionEnabled;
    BOOL _fingerDetectionStarted;
    unsigned int _lastEvent;
    NSHashTable *_observers;
    BOOL _paused;
    BOOL _shouldSendFingerOffNotification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFingerDetectionEnabled, nonatomic) BOOL fingerDetectionEnabled;
@property (getter=isFingerOn, nonatomic, readonly) BOOL fingerOn;
@property (readonly) unsigned int hash;
@property (getter=isPaused, nonatomic, readonly) BOOL paused;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)_startFingerDetection;
- (void)_stopFingerDetection;
- (void)_updateFingerDetection;
- (void)_updateHandlersForEvent:(unsigned int)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isFingerDetectionEnabled;
- (BOOL)isFingerOn;
- (BOOL)isPaused;
- (void)removeObserver:(id)arg1;
- (void)setFingerDetectionEnabled:(BOOL)arg1;
- (void)statusMessage:(unsigned int)arg1;

@end
