/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMEffectPreviewView : UICollectionViewCell {
    UIView *_dimmingView;
    UILabel *_nameLabel;
    struct CGSize { 
        float width; 
        float height; 
    } _thumbnailSize;
    UIView *_thumbnailView;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic) struct CGSize { float x1; float x2; } thumbnailSize;
@property (nonatomic, retain) UIView *thumbnailView;

+ (float)defaultSpacing;
+ (struct CGSize { float x1; float x2; })sizeForImageSize:(struct CGSize { float x1; float x2; })arg1;
+ (struct CGSize { float x1; float x2; })thumbnailSizeForImageSize:(struct CGSize { float x1; float x2; })arg1;

- (void).cxx_destruct;
- (void)_updateAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setThumbnailSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setThumbnailView:(id)arg1;
- (id)text;
- (struct CGSize { float x1; float x2; })thumbnailSize;
- (id)thumbnailView;

@end
