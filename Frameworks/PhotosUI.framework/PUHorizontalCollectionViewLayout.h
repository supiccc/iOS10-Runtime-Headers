/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUHorizontalCollectionViewLayout : UICollectionViewLayout {
    NSArray *_cachedItemLayoutAttributes;
    NSArray *_cachedSectionFrames;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    <PUHorizontalCollectionViewLayoutDelegate> *_delegate;
    float _interitemSpacing;
    struct CGSize { 
        float width; 
        float height; 
    } _itemSize;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _itemsContentInset;
    NSArray *_lastRequestedLayoutAttributesInRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _lastRequestedRect;
}

@property (nonatomic) <PUHorizontalCollectionViewLayoutDelegate> *delegate;
@property (nonatomic) float interitemSpacing;
@property (nonatomic) struct CGSize { float x1; float x2; } itemSize;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } itemsContentInset;

+ (Class)invalidationContextClass;

- (void).cxx_destruct;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1;
- (BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (id)delegate;
- (id)init;
- (float)interitemSpacing;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })itemSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })itemsContentInset;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (void)setDelegate:(id)arg1;
- (void)setInteritemSpacing:(float)arg1;
- (void)setItemSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setItemsContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
