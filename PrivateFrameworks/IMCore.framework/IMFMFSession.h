/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMFMFSession : NSObject <FMFSessionDelegate> {
    FMFDevice *_activeDevice;
    NSString *_establishingAccountID;
    FMFSession *_session;
}

@property (nonatomic, retain) FMFDevice *activeDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL disableLocationSharing;
@property (nonatomic, retain) NSString *establishingAccountID;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL restrictLocationSharing;
@property (nonatomic, retain) FMFSession *session;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (Class)__FMFSessionClass;
- (id)_bestAccountForAddresses:(id)arg1;
- (id)_callerIDForChat:(id)arg1;
- (void)_postNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_postRelationshipStatusDidChangeNotificationWithHandle:(id)arg1;
- (void)_updateActiveDevice;
- (id)activeDevice;
- (BOOL)allChatParticipantsFollowingMyLocation:(id)arg1;
- (BOOL)allChatParticipantsSharingLocationWithMe:(id)arg1;
- (id)allSiblingFMFHandlesForChat:(id)arg1;
- (BOOL)chatHasParticipantsFollowingMyLocation:(id)arg1;
- (BOOL)chatHasParticipantsSharingLocationWithMe:(id)arg1;
- (BOOL)chatHasSiblingParticipantsSharingLocationWithMe:(id)arg1;
- (void)dealloc;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didReceiveLocation:(id)arg1;
- (void)didStartAbilityToGetLocationForHandle:(id)arg1;
- (void)didStartSharingMyLocationWithHandle:(id)arg1;
- (void)didStopAbilityToGetLocationForHandle:(id)arg1;
- (void)didStopSharingMyLocationWithHandle:(id)arg1;
- (void)didUpdateHidingStatus:(BOOL)arg1;
- (BOOL)disableLocationSharing;
- (id)establishingAccountID;
- (id)fmfGroupIdGroup;
- (id)fmfGroupIdOneToOne;
- (BOOL)fmfHandleIsFollowingMyLocation:(id)arg1;
- (BOOL)fmfHandleIsSharingLocationWithMe:(id)arg1;
- (id)fmfHandlesForChat:(id)arg1;
- (void)friendshipRequestReceived:(id)arg1;
- (void)friendshipWasRemoved:(id)arg1;
- (BOOL)handleIsFollowingMyLocation:(id)arg1;
- (BOOL)handleIsSharingLocationWithMe:(id)arg1;
- (id)init;
- (id)locationForFMFHandle:(id)arg1;
- (id)locationForHandle:(id)arg1;
- (id)locationForHandleOrSibling:(id)arg1;
- (void)makeThisDeviceActiveDevice;
- (void)refreshLocationForChat:(id)arg1;
- (void)refreshLocationForHandle:(id)arg1 inChat:(id)arg2;
- (BOOL)restrictLocationSharing;
- (void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (id)session;
- (void)setActiveDevice:(id)arg1;
- (void)setEstablishingAccountID:(id)arg1;
- (void)setSession:(id)arg1;
- (void)startSharingWithChat:(id)arg1 untilDate:(id)arg2;
- (void)startTrackingLocationForChat:(id)arg1;
- (void)startTrackingLocationForHandle:(id)arg1;
- (void)stopSharingWithChat:(id)arg1;
- (void)stopTrackingLocationForChat:(id)arg1;
- (void)stopTrackingLocationForHandle:(id)arg1;
- (id)timedOfferExpirationForChat:(id)arg1;

@end
