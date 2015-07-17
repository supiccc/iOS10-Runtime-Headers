/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFSubject : SBFObservable <SBFObserver> {
    NSMutableArray *_observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)_observers;
- (void)dealloc;
- (id)init;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (id)subscribe:(id)arg1;

@end
