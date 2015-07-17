/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverBulletinAttachmentInfo : NSObject {
    NSMutableDictionary *_imageSizePairs;
    BOOL _imagesFetched;
    NSString *_imagesRecordID;
    BOOL _sizesFetched;
    NSString *_sizesRecordID;
}

@property (nonatomic) BOOL imagesFetched;
@property (nonatomic, copy) NSString *imagesRecordID;
@property (nonatomic) BOOL sizesFetched;
@property (nonatomic, copy) NSString *sizesRecordID;

- (id)_pairForKey:(id)arg1 create:(BOOL)arg2;
- (void)dealloc;
- (id)imageForKey:(id)arg1;
- (BOOL)imagesFetched;
- (id)imagesRecordID;
- (id)init;
- (BOOL)isImagesFetchedForRecordID:(id)arg1;
- (BOOL)isSizesFetchedForRecordID:(id)arg1;
- (void)noteImagesFetchedForRecordID:(id)arg1;
- (void)noteSizesFetchedForRecordID:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)setImagesFetched:(BOOL)arg1;
- (void)setImagesRecordID:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1 forKey:(id)arg2;
- (void)setSizesFetched:(BOOL)arg1;
- (void)setSizesRecordID:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForKey:(id)arg1;
- (BOOL)sizesFetched;
- (id)sizesRecordID;

@end
