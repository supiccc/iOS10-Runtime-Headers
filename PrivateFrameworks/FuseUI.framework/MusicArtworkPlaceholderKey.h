/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicArtworkPlaceholderKey : NSObject <NSCopying> {
    int _integerHeight;
    int _integerScale;
    int _integerWidth;
    float _scale;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
}

@property (nonatomic, readonly) float scale;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } size;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (float)scale;
- (struct CGSize { float x1; float x2; })size;

@end
