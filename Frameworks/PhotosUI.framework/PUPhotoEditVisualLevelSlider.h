/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditVisualLevelSlider : PUPhotoEditLevelSlider <UICollectionViewDataSource> {
    <PUPhotoEditVisualLevelSliderDataSource> *_dataSource;
    struct CGSize { 
        float width; 
        float height; 
    } _thumbnailSize;
    UICollectionView *_thumbnailsStripCollectionView;
    UICollectionViewFlowLayout *_thumbnailsStripFlowLayout;
}

@property (nonatomic) <PUPhotoEditVisualLevelSliderDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize { float x1; float x2; } thumbnailSize;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 thumbnailIndex:(int)arg2 animated:(BOOL)arg3;
- (int)_intensityIndexForThumbnailIndex:(int)arg1;
- (int)_thumbIndexForIntensityIndex:(int)arg1;
- (void)_updateCollectionViewLayout;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)dataSource;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)preferredSliderContentView;
- (void)reloadAllThumbnails;
- (void)reloadThumbnailForIntensityIndex:(int)arg1 animated:(BOOL)arg2;
- (void)setDataSource:(id)arg1;
- (void)setThumbnailSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setupWithLayoutOrientation:(int)arg1;
- (struct CGSize { float x1; float x2; })thumbnailSize;
- (BOOL)wantsLevelIndicator;

@end
