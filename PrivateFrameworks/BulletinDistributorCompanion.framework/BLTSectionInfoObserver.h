/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSectionInfoObserver : NSObject <BBObserverDelegate> {
    <BLTSectionInfoObserverDelegate> *_delegate;
    BBObserver *_observer;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _reloadSectionInfoCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTSectionInfoObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getBBSectionInfoExtendedProperties:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_reconnectObserver;
- (void)_reloadSectionInfosWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)reloadWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateSectionInfoBySectionIDs:(id)arg1;

@end
