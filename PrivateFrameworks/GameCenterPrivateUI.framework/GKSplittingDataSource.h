/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSplittingDataSource : GKCollectionViewDataSource {
    NSMutableDictionary *_sectionToSectionInfo;
    GKBasicCollectionViewDataSource *_underlyingDataSource;
}

@property (nonatomic, readonly) int sectionCount;
@property (nonatomic, retain) NSMutableDictionary *sectionToSectionInfo;
@property (nonatomic, retain) GKBasicCollectionViewDataSource *underlyingDataSource;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)addSectionWithTitle:(id)arg1 sortDescriptors:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)configureDataSource;
- (void)dealloc;
- (id)filteredItemsForRawItems:(id)arg1;
- (id)indexPathsForItem:(id)arg1;
- (id)init;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemsForSection:(int)arg1;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)refreshAdditionalInfoForDataType:(unsigned int)arg1 updateNotifier:(id)arg2;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)removeAllSections;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeSection:(int)arg1;
- (int)sectionCount;
- (id)sectionInfoForSection:(int)arg1;
- (id)sectionToSectionInfo;
- (void)setFilterPredicate:(id)arg1 forSection:(int)arg2;
- (void)setItems:(id)arg1 forSection:(int)arg2;
- (void)setSectionToSectionInfo:(id)arg1;
- (void)setSortDescriptors:(id)arg1 forSection:(int)arg2;
- (void)setUnderlyingDataSource:(id)arg1;
- (id)titleForSection:(int)arg1;
- (id)underlyingDataSource;
- (void)willUpdateSectionsWithItems:(id)arg1;

@end
