/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXAccessQueue : NSObject {
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    unsigned int _specialBehaviors;
    NSString *_threadLocalStorageKey;
}

@property (nonatomic, readonly) BOOL behavesAsMainQueue;
@property (nonatomic, readonly) BOOL behavesWithoutErrorReporting;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic) unsigned int specialBehaviors;
@property (nonatomic, copy) NSString *threadLocalStorageKey;

+ (id)backgroundAccessQueue;
+ (id)mainAccessQueue;

- (unsigned int)_accessQueueContextInCurrentExecutionThread;
- (id)_initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2 specialBehaviors:(unsigned int)arg3;
- (void)_performBlock:(id /* block */)arg1 withDispatchFunction:(int (*)arg2 synchronously:(BOOL)arg3 accessQueueContext:(unsigned int)arg4;
- (void)afterDelay:(double)arg1 processReadingBlock:(id /* block */)arg2;
- (void)afterDelay:(double)arg1 processWritingBlock:(id /* block */)arg2;
- (BOOL)behavesAsMainQueue;
- (BOOL)behavesWithoutErrorReporting;
- (BOOL)canOnlyReadInCurrentExecutionThread;
- (BOOL)canReadInCurrentExecutionThread;
- (BOOL)canWriteInCurrentExecutionThread;
- (id)concurrentQueue;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2;
- (id)initWithParentClass:(Class)arg1 description:(id)arg2 appendUUIDToLabel:(BOOL)arg3;
- (id)label;
- (void)performAsynchronousReadingBlock:(id /* block */)arg1;
- (void)performAsynchronousWritingBlock:(id /* block */)arg1;
- (void)performSynchronousReadingBlock:(id /* block */)arg1;
- (void)performSynchronousWritingBlock:(id /* block */)arg1;
- (void)setConcurrentQueue:(id)arg1;
- (void)setSpecialBehaviors:(unsigned int)arg1;
- (void)setThreadLocalStorageKey:(id)arg1;
- (unsigned int)specialBehaviors;
- (id)threadLocalStorageKey;

@end
