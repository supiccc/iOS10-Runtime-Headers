/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedAlbum : _PLManagedAlbum <PLUserEditableAlbumProtocol> {
    BOOL _albumShouldBeAutomaticallyDeleted;
    BOOL _needsPersistenceUpdate;
    BOOL _resolvingConflicts;
}

@property (nonatomic) BOOL albumShouldBeAutomaticallyDeleted;
@property (nonatomic, readonly) unsigned int approximateCount;
@property (nonatomic, retain) NSSet *assetOrders;
@property (nonatomic, retain) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned int assetsCount;
@property (nonatomic) unsigned int batchSize;
@property (nonatomic, readonly) BOOL canContributeToCloudSharedAlbum;
@property (nonatomic, readonly) BOOL canShowAvalancheStacks;
@property (nonatomic, readonly) BOOL canShowComments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSDate *endDate;
@property (nonatomic, readonly, retain) NSURL *groupURL;
@property (nonatomic) BOOL hasUnseenContentBoolValue;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *importSessionID;
@property (nonatomic, readonly) BOOL isCameraAlbum;
@property (nonatomic, readonly) BOOL isCloudSharedAlbum;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) BOOL isFamilyCloudSharedAlbum;
@property (nonatomic, readonly) BOOL isFolder;
@property (nonatomic, readonly) BOOL isInTrash;
@property (nonatomic, readonly) BOOL isLibrary;
@property (nonatomic, readonly) BOOL isMultipleContributorCloudSharedAlbum;
@property (nonatomic, readonly) BOOL isOwnedCloudSharedAlbum;
@property (nonatomic, readonly) BOOL isPanoramasAlbum;
@property (nonatomic, readonly) BOOL isPendingPhotoStreamAlbum;
@property (nonatomic, readonly) BOOL isPhotoStreamAlbum;
@property (nonatomic, readonly) BOOL isRecentlyAddedAlbum;
@property (nonatomic, readonly) BOOL isStandInAlbum;
@property (nonatomic, readonly) BOOL isUserLibraryAlbum;
@property (nonatomic, readonly) BOOL isWallpaperAlbum;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, readonly, retain) NSNumber *kind;
@property (nonatomic, readonly) int kindValue;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, retain) NSMutableOrderedSet *mutableAssets;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) BOOL needsPersistenceUpdate;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (nonatomic, readonly) unsigned int photosCount;
@property (nonatomic, readonly, retain) UIImage *posterImage;
@property (nonatomic) BOOL resolvingConflicts;
@property (nonatomic, retain) PLManagedAsset *secondaryKeyAsset;
@property (nonatomic, readonly) BOOL shouldDeleteWhenEmpty;
@property (nonatomic, retain) NSDictionary *slideshowSettings;
@property (nonatomic, readonly, copy) id /* block */ sortingComparator;
@property (nonatomic, readonly, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, readonly, retain) NSString *title;
@property (nonatomic, readonly, retain) NSMutableOrderedSet *userEditableAssets;
@property (nonatomic, readonly, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned int videosCount;

+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)assetOrderByAbumUUIDs;
+ (id)baseSearchIndexPredicate;
+ (id)childKeyForOrdering;
+ (void)clearAssetOrderByAbumUUIDs;
+ (id)keyPathsForValuesAffectingApproximateCount;
+ (id)keyPathsForValuesAffectingPhotosCount;
+ (id)keyPathsForValuesAffectingVideosCount;
+ (id)pathToAssetAlbumOrderStructure;

- (unsigned int)_albumStandInCount;
- (id)_assetOrderByAssetUUID;
- (unsigned int)_cachedCountForMigration;
- (id)_expectedKeyAssets:(id)arg1;
- (id)_keysToBeObserved;
- (id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2;
- (void)_recalculateCachedCounts;
- (BOOL)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1;
- (void)_updateCountsIfNeeded:(id)arg1;
- (void)_updateKeyAssetsAndCountsIfNeeded;
- (void)_updateKeyAssetsIfNeeded:(id)arg1;
- (void)addAssetUsingiTunesAlbumOrder:(id)arg1;
- (BOOL)albumShouldBeAutomaticallyDeleted;
- (unsigned int)approximateCount;
- (unsigned int)assetsCount;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (id)childKeyForOrdering;
- (unsigned int)countOfInternalUserEditableAssets;
- (id)descriptionOfAssetOrderValues;
- (void)didSave;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)getInternalUserEditableAssets:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexInInternalUserEditableAssetsOfObject:(id)arg1;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
- (id)internalUserEditableAssetsAtIndexes:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isValidKindForPersistence;
- (id)migration_newOrderKeyChild:(id)arg1;
- (id)migration_sortedOrderKeysForChildrenUsingMap:(id)arg1;
- (id)mutableAssets;
- (BOOL)needsPersistenceUpdate;
- (id)objectInInternalUserEditableAssetsAtIndex:(unsigned int)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)persistMetadataToFileSystem;
- (unsigned int)photosCount;
- (void)prepareForDeletion;
- (void)refreshAssets;
- (void)registerForChanges;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)removeInternalUserEditableAssetsAtIndexes:(id)arg1;
- (void)removePersistedFileSystemData;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (BOOL)resolvingConflicts;
- (id)searchIndexContents;
- (void)setAlbumShouldBeAutomaticallyDeleted:(BOOL)arg1;
- (void)setNeedsPersistenceUpdate:(BOOL)arg1;
- (void)setResolvingConflicts:(BOOL)arg1;
- (void)sortAssetsUsingiTunesAlbumOrder;
- (BOOL)supportsAssetOrderKeys;
- (void)unregisterForChanges;
- (id)userEditableAssets;
- (unsigned int)videosCount;
- (void)willSave;

@end
