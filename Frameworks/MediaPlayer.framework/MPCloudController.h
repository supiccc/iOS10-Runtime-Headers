/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCloudController : NSObject {
    NSObject<HSCloudAvailability> *_cloudAvailabilityController;
    HSCloudClient *_cloudClient;
    SSVMediaContentTasteController *_contentTasteController;
    BOOL _isCloudEnabled;
    BOOL _isInitialImport;
    BOOL _isUpdateInProgress;
    BOOL _jaliscoGeniusEnabled;
    int _preferencesChangedNotifyToken;
    BOOL _preferencesChangedNotifyTokenIsValid;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) BOOL canDefaultMediaLibraryShowCloudContent;
@property (nonatomic, readonly) BOOL canShowCloudDownloadButtons;
@property (nonatomic, readonly) BOOL canShowCloudMusic;
@property (nonatomic, readonly) BOOL canShowCloudVideo;
@property (nonatomic, readonly) HSCloudClient *cloudClient;
@property (nonatomic, readonly) BOOL enablingJaliscoGeniusRequiresTerms;
@property (nonatomic, readonly) BOOL hasCloudLockerAccount;
@property (nonatomic, readonly) BOOL hasPurchaseHistoryAccount;
@property (nonatomic, readonly) BOOL isCloudEnabled;
@property (nonatomic, readonly) BOOL isGeniusEnabled;
@property (nonatomic, readonly) BOOL isInitialImport;
@property (nonatomic, readonly) BOOL isUpdateInProgress;
@property (getter=isJaliscoGeniusEnabled, nonatomic, readonly) BOOL jaliscoGeniusEnabled;

+ (BOOL)isMediaApplication;
+ (void)migrateCellularDataPreferencesIfNeeded;
+ (id)sharedCloudController;

- (void).cxx_destruct;
- (void)_initializeUpdateInProgressState;
- (void)acceptJaliscGeniusTermsAndConditionsVersion:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)becomeActive;
- (void)becomeActiveAndWaitUntilDone:(BOOL)arg1;
- (BOOL)canDefaultMediaLibraryShowCloudContent;
- (BOOL)canShowCloudDownloadButtons;
- (void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (BOOL)canShowCloudMusic;
- (void)canShowCloudTracksDidChangeNotification:(id)arg1;
- (BOOL)canShowCloudVideo;
- (id)cloudClient;
- (void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (void)disableCloudLibraryWithCompletionHandler:(id /* block */)arg1;
- (void)enableCloudLibraryWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)enablingJaliscoGeniusRequiresTerms;
- (void)evaluateKeepLocalRulesWithCompletionHandler:(id /* block */)arg1;
- (void)fetchRecommendedContentWithSeedTrackID:(long long)arg1 seedTrackIDType:(int)arg2 count:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (BOOL)hasCloudLockerAccount;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)hasPurchaseHistoryAccount;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (BOOL)isCellularDataRestricted;
- (void)isCellularDataRestrictedDidChangeNotification:(id)arg1;
- (BOOL)isCloudEnabled;
- (BOOL)isCloudLibraryEnabled;
- (BOOL)isGeniusEnabled;
- (BOOL)isInitialImport;
- (BOOL)isJaliscoGeniusEnabled;
- (BOOL)isUpdateInProgress;
- (void)loadArtworkForEntityPersistentID:(long long)arg1 entityType:(int)arg2 artworkType:(int)arg3 artworkSourceType:(int)arg4 completionHandler:(id /* block */)arg5;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadJaliscoGeniusTermsAndConditionsWithCompletionHandler:(id /* block */)arg1;
- (void)loadUpdateProgressWithCompletionHandler:(id /* block */)arg1;
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resignActive;
- (void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(int)arg3 completionHandler:(id /* block */)arg4;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)setLikedState:(int)arg1 forAlbumWithStoreID:(long long)arg2;
- (void)setLikedState:(int)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned int)arg3;
- (void)setLikedState:(int)arg1 forPlaylistWithGlobalID:(id)arg2;
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistWithPersistentID:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (void)updateSubscribedPlaylistWithSagaID:(unsigned long long)arg1 ignoreMinRefreshInterval:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)uploadArtworkForPlaylist:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)uploadCloudItemProperties;
- (void)uploadCloudPlaylistProperties;

@end
