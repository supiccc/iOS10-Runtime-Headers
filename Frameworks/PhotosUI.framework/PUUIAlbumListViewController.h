/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUIAlbumListViewController : PUAlbumListViewController {
    unsigned int  __imagePickerAssetTypes;
    NSArray * __imagePickerMediaTypes;
    BOOL  _collectionsFetchResultIsValid;
    UIBarButtonItem * _imagePickerCancelButton;
}

@property (setter=_setImagePickerAssetTypes:, nonatomic) unsigned int _imagePickerAssetTypes;
@property (setter=_setImagePickerMediaTypes:, nonatomic, copy) NSArray *_imagePickerMediaTypes;

- (void).cxx_destruct;
- (void)_handleImagePickerCancel:(id)arg1;
- (unsigned int)_imagePickerAssetTypes;
- (id)_imagePickerMediaTypes;
- (void)_invalidateCollectionsFetchResult;
- (void)_setImagePickerAssetTypes:(unsigned int)arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)_updateCollectionsFetchResultIfNeeded;
- (id)assetsFilterPredicate;
- (int)estimatedCountForAssetCollection:(id)arg1;
- (id)init;
- (void)loadView;
- (id)newGridViewControllerForAllPhotos;
- (id)newGridViewControllerForAssetCollection:(id)arg1;
- (id)newGridViewControllerForFolder:(id)arg1;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)shouldAllowEmailInAlbumSubtitle;
- (BOOL)shouldHideEmptyCollections;
- (BOOL)shouldShowAllPhotosItem;
- (unsigned int)supportedInterfaceOrientations;
- (void)updateNavigationBarAnimated:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end