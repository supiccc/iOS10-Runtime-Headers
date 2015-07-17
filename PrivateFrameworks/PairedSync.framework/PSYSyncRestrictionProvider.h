/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYSyncRestrictionProvider : NSObject <PSYDeviceSyncStateObserver> {
    <PSYSyncRestrictionProviderDelegate> *_delegate;
    BOOL _hasReceivedStartSync;
    NSURL *_pairingDataURL;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_serviceDirectory;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _serviceDirectoryLock;
    NSString *_serviceName;
    unsigned int _syncRestriction;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSYSyncRestrictionProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *serviceName;
@property (readonly) Class superclass;
@property unsigned int syncRestriction;

- (void).cxx_destruct;
- (void)_createPairingDataDirectoryIfNeeded;
- (id)_dataFileName;
- (void)_didUpdatePairingDataStoreURL:(id)arg1;
- (id)_pairingDataURL;
- (void)_reloadPairingStorePath;
- (void)_reloadPersistentData;
- (unsigned int)_restrictionForCurrentState;
- (id)_serviceDirectory;
- (void)_setServiceDirectory:(id)arg1;
- (void)_updateSyncRestrictionIfNeeded;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)deviceSyncStateDidChange:(unsigned int)arg1;
- (id)init;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)keybagStateChanged;
- (id)pairingDataURL;
- (void)pairingUpdated;
- (void)registerForFirstKeybagUnlockNotification;
- (void)registerForNotifications;
- (id)serviceDirectory;
- (void)serviceHasReceivedStartSync;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)setSyncRestriction:(unsigned int)arg1;
- (unsigned int)syncRestriction;
- (void)unregisterForFirstKeybagUnlockNotification;
- (void)unregisterForNotifications;

@end
