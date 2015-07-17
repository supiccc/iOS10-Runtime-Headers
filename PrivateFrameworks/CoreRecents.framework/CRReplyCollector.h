/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@interface CRReplyCollector : NSMutableDictionary {
    NSMutableDictionary *_dictionary;
    NSConditionLock *_lock;
}

- (void)addEntriesFromDictionary:(id)arg1;
- (unsigned int)condition;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (id)init;
- (id)initWithCondition:(unsigned int)arg1;
- (id)keyEnumerator;
- (void)lock;
- (BOOL)lockWhenCondition:(unsigned int)arg1 beforeDate:(id)arg2;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (BOOL)tryLock;
- (BOOL)tryLockWhenCondition:(int)arg1;
- (void)unlock;
- (void)unlockWithCondition:(unsigned int)arg1;

@end
