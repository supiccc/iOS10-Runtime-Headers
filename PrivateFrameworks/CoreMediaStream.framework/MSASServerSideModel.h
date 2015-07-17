/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASServerSideModel : MSASModelBase <MSASModel, MSASStateMachineDelegate> {
    MSASServerSideModelGroupedCommandQueue *_commandQueue;
    MSASStateMachine *_counterpartInstance;
    MSAlbumSharingDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSCountedSet *_observers;
    MSASPendingChanges *_pendingChanges;
}

@property (nonatomic) MSASStateMachine *MSASCounterpartInstance;
@property (nonatomic, retain) MSASServerSideModelGroupedCommandQueue *commandQueue;
@property (nonatomic) MSAlbumSharingDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *eventQueue;
@property (readonly) unsigned int hash;
@property (nonatomic) int maxGroupedCallbackEventBatchCount;
@property (nonatomic) double maxGroupedCallbackEventIdleInterval;
@property (nonatomic) double maxGroupedCallbackEventStaleness;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, retain) NSCountedSet *observers;
@property (nonatomic, retain) MSASPendingChanges *pendingChanges;
@property (nonatomic, readonly, retain) NSString *personID;
@property (nonatomic, readonly) MSASStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)MSASCounterpartInstance;
- (void)MSASStateMachine:(id)arg1 didFindAccessControlChangesForAlbumGUIDS:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFindAlbumChanges:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFindAlbumSyncedState:(id)arg2 forAlbum:(id)arg3 info:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFindAssetCollectionChanges:(id)arg2 forAlbum:(id)arg3 info:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFindAssetCollectionSyncedState:(id)arg2 forAssetCollectionGUID:(id)arg3 inAlbum:(id)arg4 assetCollectionStateCtag:(id)arg5 info:(id)arg6;
- (void)MSASStateMachine:(id)arg1 didFindChangesInAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFindCommentChanges:(id)arg2 inAssetCollectionWithGUID:(id)arg3 inAlbumWithGUID:(id)arg4 info:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFindNewURLString:(id)arg2 forAlbumWithGUID:(id)arg3 info:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFindSyncedKeyValueChangesForAlbumGUIDS:(id)arg2 albumChanges:(id)arg3 accessControlChangesForAlbumGUIDS:(id)arg4 info:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFindSyncedKeyValueChangesForAlbumGUIDS:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFinishAddingAssetCollection:(id)arg2 toAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishAddingComment:(id)arg2 toAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)MSASStateMachine:(id)arg1 didFinishAddingSharingRelationships:(id)arg2 toOwnedAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForAlbumSyncedStateChangesInAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 newAlbumStateCtag:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForChangesInfo:(id)arg2 error:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForCommentChangesInAssetCollectionWithGUID:(id)arg2 largestCommentID:(int)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForUpdatesInAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishCheckingForUpdatesInAlbums:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFinishCreatingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishDeletingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishDeletingAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishDeletingComment:(id)arg2 inAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)MSASStateMachine:(id)arg1 didFinishEnqueueingAssetsForDownload:(id)arg2 inAlbumWithGUID:(id)arg3;
- (void)MSASStateMachine:(id)arg1 didFinishGettingAccessControls:(id)arg2 forAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishRemovingSharingRelationship:(id)arg2 fromOwnedAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishRetrievingAsset:(id)arg2 inAlbum:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishSendingInvitationByPhone:(id)arg2 toOwnedAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishSettingSyncedStateForAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 newAlbumStateCtag:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFinishSettingSyncedStateForAssetCollection:(id)arg2 inAlbum:(id)arg3 assetStateCtag:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)MSASStateMachine:(id)arg1 didFinishSubscribingToAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishUnsubscribingFromAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishUpdatingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)MSASStateMachine:(id)arg1 didFinishUpdatingAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
- (void)MSASStateMachine:(id)arg1 didFireScheduledEvent:(id)arg2 forAssetCollectionGUID:(id)arg3 albumGUID:(id)arg4 info:(id)arg5;
- (BOOL)MSASStateMachine:(id)arg1 didQueryIsAssetCollectionWithGUIDInModel:(id)arg2;
- (void)MSASStateMachine:(id)arg1 didRequestAssetsForAddingAssetCollections:(id)arg2 inAlbum:(id)arg3 specifications:(id)arg4 info:(id)arg5;
- (void)MSASStateMachine:(id)arg1 willCheckForAlbumSyncedStateChangesInAlbum:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 willCheckForUpdatesInAlbum:(id)arg2 info:(id)arg3;
- (void)MSASStateMachine:(id)arg1 willUpdateAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
- (void)MSASStateMachineDidFindGlobalResetSync:(id)arg1 info:(id)arg2;
- (id)MSASStateMachineDidRequestAlbumStateCtagForAlbumWithGUID:(id)arg1 info:(id)arg2;
- (id)MSASStateMachineDidRequestAlbumURLStringForAlbumWithGUID:(id)arg1 info:(id)arg2;
- (id)MSASStateMachineDidRequestAlbumWithGUID:(id)arg1;
- (id)MSASStateMachineDidRequestAssetCollectionStateCtagForAssetCollectionWithGUID:(id)arg1 info:(id)arg2;
- (void)MSASStateMachineDidStart:(id)arg1;
- (void)MSASStateMachineDidUpdateServerCommunicationBackoffDate:(id)arg1;
- (id)_invalidAccessControlGUIDErrorwithGUID:(id)arg1;
- (id)_invalidAssetCollectionGUIDErrorwithGUID:(id)arg1;
- (id)_invalidInvitationGUIDErrorWithGUID:(id)arg1;
- (id)_protocolErrorForUnderlyingError:(id)arg1;
- (void)_reconstruct;
- (void)acceptInvitationWithGUID:(id)arg1;
- (void)acceptInvitationWithGUID:(id)arg1 info:(id)arg2;
- (void)acceptInvitationWithToken:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)acceptInvitationWithToken:(id)arg1 info:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)accessControlGUIDsForAlbumWithGUID:(id)arg1;
- (id)accessControlWithGUID:(id)arg1;
- (id)accessControlsForAlbumWithGUID:(id)arg1;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 info:(id)arg3;
- (void)addAlbum:(id)arg1;
- (void)addAlbum:(id)arg1 info:(id)arg2;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 info:(id)arg3;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 info:(id)arg3;
- (void)addObserver:(id)arg1;
- (id)albumGUIDs;
- (id)albumWithGUID:(id)arg1;
- (id)albums;
- (id)assetCollectionGUIDsInAlbumWithGUID:(id)arg1;
- (id)assetCollectionWithGUID:(id)arg1;
- (id)assetCollectionsInAlbumWithGUID:(id)arg1;
- (int)assetsInDownloadQueueCount;
- (void)cancel;
- (id)captionForAssetCollectionWithGUID:(id)arg1;
- (int)commandCount;
- (id)commandQueue;
- (id)commentWithGUID:(id)arg1;
- (id)commentsForAssetCollectionWithGUID:(id)arg1;
- (id)daemon;
- (id)dbQueueAccessControlGUIDsForAlbumWithGUID:(id)arg1;
- (BOOL)dbQueueAccessControlWithGUID:(id)arg1 outObject:(id*)arg2 outAlbumGUID:(id*)arg3 outEmail:(id*)arg4 outUserInfoData:(id*)arg5;
- (id)dbQueueAccessControlsForAlbumWithGUID:(id)arg1;
- (void)dbQueueAddCommentCheckOperation:(id)arg1;
- (id)dbQueueAlbumGUIDs;
- (BOOL)dbQueueAlbumMetadataWithAlbumGUID:(id)arg1 key:(id)arg2 outValue:(id*)arg3;
- (BOOL)dbQueueAlbumWithGUID:(id)arg1 outObject:(id*)arg2 outName:(id*)arg3 outCtag:(id*)arg4 outForeignCtag:(id*)arg5 outURLString:(id*)arg6 outUserInfoData:(id*)arg7;
- (BOOL)dbQueueAssetCollectionContainsCommentsFromMeAssetCollectionGUID:(id)arg1;
- (id)dbQueueAssetCollectionGUIDsInAlbumWithGUID:(id)arg1;
- (BOOL)dbQueueAssetCollectionMetadataWithAssetCollectionGUID:(id)arg1 key:(id)arg2 outValue:(id*)arg3;
- (BOOL)dbQueueAssetCollectionWithGUID:(id)arg1 outObject:(id*)arg2 outCtag:(id*)arg3 outAlbumGUID:(id*)arg4 outBatchDate:(id*)arg5 outPhotoDate:(id*)arg6 outPhotoNumber:(long long*)arg7 outUserInfoData:(id*)arg8;
- (BOOL)dbQueueCheckToClearUnviewedStateOnAlbumWithGUID:(id)arg1 info:(id)arg2;
- (BOOL)dbQueueCheckToClearUnviewedStateOnAssetCollectionWithGUID:(id)arg1 info:(id)arg2;
- (BOOL)dbQueueCommentWithGUID:(id)arg1 outObject:(id*)arg2 outID:(unsigned int*)arg3 outTimestamp:(id*)arg4 outAssetCollectionGUID:(id*)arg5 outIsCaption:(BOOL*)arg6 outUserInfoData:(id*)arg7;
- (BOOL)dbQueueCommentWithID:(int)arg1 assetCollectionGUID:(id)arg2 outObject:(id*)arg3 outGUID:(id*)arg4 outTimestamp:(id*)arg5 outIsCaption:(BOOL*)arg6 outUserInfoData:(id*)arg7;
- (id)dbQueueCommentsForAssetCollectionWithGUID:(id)arg1;
- (int)dbQueueCountOfUnviewedAssetCollectionsInAlbumWithGUID:(id)arg1;
- (void)dbQueueDeleteAccessControlWithGUID:(id)arg1 info:(id)arg2;
- (void)dbQueueDeleteAlbumMetadataAlbumGUID:(id)arg1 key:(id)arg2 info:(id)arg3;
- (void)dbQueueDeleteAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)dbQueueDeleteAllAlbumMetadataForAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)dbQueueDeleteAllAssetCollectionMetadataForAssetCollectionWithGUID:(id)arg1 info:(id)arg2;
- (void)dbQueueDeleteAllPendingCommentCheckOperations;
- (void)dbQueueDeleteAssetCollectionMetadataAssetCollectionGUID:(id)arg1 key:(id)arg2 info:(id)arg3;
- (void)dbQueueDeleteAssetCollectionWithGUID:(id)arg1 info:(id)arg2;
- (void)dbQueueDeleteCommentWithGUID:(id)arg1 info:(id)arg2;
- (void)dbQueueDeleteInvitationForAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)dbQueueDeleteInvitationWithGUID:(id)arg1 info:(id)arg2;
- (void)dbQueueFlushAllPendingCommentCheckOperations;
- (id)dbQueueInvitationForAlbumWithGUID:(id)arg1;
- (BOOL)dbQueueInvitationWithAlbumGUID:(id)arg1 outObject:(id*)arg2 outInvitationGUID:(id*)arg3 outEmail:(id*)arg4 outUserInfoData:(id*)arg5;
- (BOOL)dbQueueInvitationWithGUID:(id)arg1 outObject:(id*)arg2 outAlbumGUID:(id*)arg3 outEmail:(id*)arg4 outUserInfoData:(id*)arg5;
- (id)dbQueueLookupOrCreateAlbumWithGUID:(id)arg1;
- (id)dbQueueLookupOrCreateAssetCollectionWithGUID:(id)arg1 outAlbum:(id*)arg2;
- (id)dbQueueLookupOrCreateCommentWithGUID:(id)arg1 outAssetCollection:(id*)arg2 outAlbum:(id*)arg3;
- (id)dbQueueMaximumCommentIDForAssetCollectionWithGUID:(id)arg1;
- (id)dbQueueMaximumPhotoNumberForAlbumWithGUID:(id)arg1;
- (id)dbQueuePendingCommentCheckOperations;
- (void)dbQueueSetAccessControl:(id)arg1 info:(id)arg2;
- (void)dbQueueSetAlbum:(id)arg1 info:(id)arg2;
- (void)dbQueueSetAlbumMetadataAlbumGUID:(id)arg1 key:(id)arg2 value:(id)arg3 info:(id)arg4;
- (void)dbQueueSetAssetCollection:(id)arg1 inAlbumWithGUID:(id)arg2 info:(id)arg3;
- (void)dbQueueSetAssetCollectionMetadataAssetCollectionGUID:(id)arg1 key:(id)arg2 value:(id)arg3 info:(id)arg4;
- (void)dbQueueSetComment:(id)arg1 forAssetCollectionWithGUID:(id)arg2 info:(id)arg3;
- (void)dbQueueSetInvitation:(id)arg1 info:(id)arg2;
- (void)dbQueueSetUnviewedState:(BOOL)arg1 onAlbumWithGUID:(id)arg2 info:(id)arg3;
- (void)dbQueueSetUnviewedState:(BOOL)arg1 onAssetCollectionWithGUID:(id)arg2 info:(id)arg3;
- (int)dbQueueUnviewedAlbumCount;
- (int)dbQueueUnviewedAssetCollectionCountForAlbumWithGUID:(id)arg1;
- (void)dbQueueUpdateAlbumCtag:(id)arg1;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (void)dealloc;
- (void)deleteAlbumWithGUID:(id)arg1;
- (void)deleteAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)deleteAssetCollectionWithGUID:(id)arg1;
- (void)deleteAssetCollectionWithGUID:(id)arg1 info:(id)arg2;
- (void)deleteAssetCollectionsWithGUIDs:(id)arg1;
- (void)deleteCommentWithGUID:(id)arg1;
- (void)deleteCommentWithGUID:(id)arg1 info:(id)arg2;
- (id)earliestUnviewedAssetCollectionGUIDInAlbumWithGUID:(id)arg1;
- (void)enqueueCommand:(id)arg1;
- (BOOL)errorIsCancellation:(id)arg1;
- (id)eventQueue;
- (void)eventQueueNotifyObserversOfUpdatedUnviewedCountInAlbum:(id)arg1 unviewedCount:(int)arg2 info:(id)arg3;
- (void)eventQueuePerformBlockOnObservers:(id /* block */)arg1;
- (void)flushAllPendingCommentCheckOperations;
- (id)focusAssetCollectionGUID;
- (void)forgetEverything;
- (void)forgetEverythingInfo:(id)arg1;
- (void)forgetEverythingInfo:(id)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)hasCommandsInGroupedCommandQueue;
- (BOOL)hasEnqueuedActivities;
- (id)initWithPersonID:(id)arg1;
- (id)initWithPersonID:(id)arg1 databasePath:(id)arg2;
- (id)initWithPersonID:(id)arg1 databasePath:(id)arg2 eventQueue:(id)arg3;
- (id)invitationForAlbumWithGUID:(id)arg1;
- (id)invitationGUIDs;
- (id)invitationWithGUID:(id)arg1;
- (id)invitations;
- (BOOL)isAlbumWithGUIDMarkedAsUnviewed:(id)arg1;
- (BOOL)isAssetCollectionWithGUIDMarkedAsUnviewed:(id)arg1;
- (id)isPublicAccessEnabledForAlbumWithGUID:(id)arg1;
- (id)lastViewedCommentDateForAssetCollectionWithGUID:(id)arg1;
- (void)markAlbumGUIDAsViewed:(id)arg1;
- (void)markAlbumGUIDAsViewed:(id)arg1 info:(id)arg2;
- (void)markAlbumGUIDAsViewed:(id)arg1 moveLastViewedAssetCollectionMarker:(BOOL)arg2 info:(id)arg3;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 info:(id)arg3;
- (int)maxGroupedCallbackEventBatchCount;
- (double)maxGroupedCallbackEventIdleInterval;
- (double)maxGroupedCallbackEventStaleness;
- (id)memberQueue;
- (void)modifyAlbumMetadata:(id)arg1;
- (void)modifyAlbumMetadata:(id)arg1 info:(id)arg2;
- (id)nextCommandGroupMaxCount:(int)arg1 outCommand:(id*)arg2 outLastCommandIndex:(long long*)arg3;
- (id)observers;
- (id)pendingChanges;
- (void)performBlockOnObservers:(id /* block */)arg1;
- (void)reconstruct;
- (void)refreshAccessControlListForAlbumWithGUID:(id)arg1;
- (void)refreshAccessControlListForAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(BOOL)arg2;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(BOOL)arg2 info:(id)arg3;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(BOOL)arg2;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(BOOL)arg2 info:(id)arg3;
- (void)refreshResetSync:(BOOL)arg1;
- (void)refreshResetSync:(BOOL)arg1 info:(id)arg2;
- (void)rejectInvitationWithGUID:(id)arg1;
- (void)rejectInvitationWithGUID:(id)arg1 info:(id)arg2;
- (void)releaseBusy;
- (void)removeAccessControlEntryWithGUID:(id)arg1;
- (void)removeAccessControlEntryWithGUID:(id)arg1 info:(id)arg2;
- (void)removeCommandsUpToCommandIndex:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)retainBusy;
- (void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2;
- (void)retrieveAssetsFromAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2;
- (id)serverCommunicationBackoffDate;
- (id)serverSideConfiguration;
- (void)setCommandQueue:(id)arg1;
- (void)setDaemon:(id)arg1;
- (void)setEventQueue:(id)arg1;
- (void)setFocusAlbumGUID:(id)arg1;
- (void)setFocusAssetCollectionGUID:(id)arg1;
- (void)setMSASCounterpartInstance:(id)arg1;
- (void)setMaxGroupedCallbackEventBatchCount:(int)arg1;
- (void)setMaxGroupedCallbackEventIdleInterval:(double)arg1;
- (void)setMaxGroupedCallbackEventStaleness:(double)arg1;
- (void)setMemberQueue:(id)arg1;
- (void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 info:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setObservers:(id)arg1;
- (void)setPendingChanges:(id)arg1;
- (void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(id)arg2 info:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setUserInfo:(id)arg1 forAccessControlWithGUID:(id)arg2;
- (void)setUserInfo:(id)arg1 forAlbumWithGUID:(id)arg2;
- (void)setUserInfo:(id)arg1 forAssetCollectionWithGUID:(id)arg2;
- (void)setUserInfo:(id)arg1 forCommentWithGUID:(id)arg2;
- (void)setUserInfo:(id)arg1 forInvitationWithGUID:(id)arg2;
- (void)shutDown;
- (void)shutDownForDestruction:(BOOL)arg1 completionBlock:(id /* block */)arg2;
- (void)start;
- (id)stateMachine;
- (void)subscribeToAlbumWithGUID:(id)arg1;
- (void)subscribeToAlbumWithGUID:(id)arg1 info:(id)arg2;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 info:(id)arg2;
- (int)unviewedAlbumCount;
- (int)unviewedAssetCollectionCountForAlbumWithGUID:(id)arg1;
- (id)userInfoForAccessControlWithGUID:(id)arg1;
- (id)userInfoForAlbumWithGUID:(id)arg1;
- (id)userInfoForAssetCollectionWithGUID:(id)arg1;
- (id)userInfoForCommentWithGUID:(id)arg1;
- (id)userInfoForInvitationWithGUID:(id)arg1;
- (void)videoURLForAssetCollectionWithGUID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)videoURLsForAssetCollectionWithGUID:(id)arg1 forMediaAssetType:(unsigned int)arg2 completionBlock:(id /* block */)arg3;

@end
