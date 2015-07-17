/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKInterfaceDevice : NSObject {
    NSString *_preferredContentSizeCategory;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _screenBounds;
    float _screenScale;
}

@property (nonatomic, readonly) NSDictionary *cachedImages;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } screenBounds;
@property (nonatomic) float screenScale;

+ (id)currentDevice;

- (void).cxx_destruct;
- (BOOL)addCachedImage:(id)arg1 name:(id)arg2;
- (BOOL)addCachedImageWithData:(id)arg1 name:(id)arg2;
- (id)cachedImages;
- (id)preferredContentSizeCategory;
- (void)removeAllCachedImages;
- (void)removeCachedImageWithName:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })screenBounds;
- (float)screenScale;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScreenScale:(float)arg1;

@end
