/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBBackgroundView : UIKBSplitImageView <UIKBCacheableView> {
    BOOL _centerFilled;
    NSObject *_geometryCacheKey;
    BOOL _hasCandidateKeys;
    UITextInputTraits *_inputTraits;
    BOOL _isSplit;
    UIKBTree *_keyplane;
    UIKBRenderConfig *_renderConfig;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _splitLeftCacheRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _splitLeftRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _splitRightCacheRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _splitRightRect;
    int _topCorners;
    int _visualStyle;
}

@property (nonatomic, readonly) BOOL cacheDeferable;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) float cachedWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject *geometryCacheKey;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL keepNonPersistent;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (readonly) Class superclass;

- (BOOL)cacheDeferable;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (float)cachedWidth;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)geometryCacheKey;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)keepNonPersistent;
- (void)layoutSubviews;
- (void)refreshStyleForKeyplane:(id)arg1 inputTraits:(id)arg2;
- (id)renderConfig;
- (void)setGeometryCacheKey:(id)arg1;
- (void)setRenderConfig:(id)arg1;

@end
