/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSStatusBarStyleOverridesAssertion : NSObject {
    SBSStatusBarStyleOverridesAssertionData *_assertionData;
    id /* block */ _invalidationHandler;
    NSRecursiveLock *_invalidationLock;
    NSObject<OS_dispatch_queue> *_invalidationQueue;
}

@property (nonatomic, retain) SBSStatusBarStyleOverridesAssertionData *assertionData;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) NSRecursiveLock *invalidationLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *invalidationQueue;
@property (nonatomic, readonly) BOOL isExclusive;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) int statusBarStyleOverrides;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (id)assertionWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3;
+ (id)backgroundLocationAssertionForPID:(int)arg1;

- (void)_callInvalidationHandler;
- (void)acquireWithHandler:(id /* block */)arg1 onQueue:(id)arg2;
- (id)assertionData;
- (void)dealloc;
- (unsigned int)hash;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3;
- (id)initWithStatusBarStyleOverridesAssertionData:(id)arg1;
- (void)invalidate;
- (void)invalidateFromServer;
- (id /* block */)invalidationHandler;
- (id)invalidationLock;
- (id)invalidationQueue;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExclusive;
- (int)pid;
- (void)setAssertionData:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setInvalidationLock:(id)arg1;
- (void)setInvalidationQueue:(id)arg1;
- (int)statusBarStyleOverrides;
- (id)uniqueIdentifier;

@end
