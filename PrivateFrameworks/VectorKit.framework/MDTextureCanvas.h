/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface MDTextureCanvas : NSObject <MDRenderTarget> {
    float _contentScale;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    struct CGSize { 
        float width; 
        float height; 
    } _sizeInPixels;
}

@property (nonatomic, readonly) float averageFPS;
@property (nonatomic, readonly) float contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } size;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } sizeInPixels;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (float)contentScale;
- (void)dealloc;
- (id)description;
- (void)didDrawView;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (struct CGSize { float x1; float x2; })size;
- (struct CGSize { float x1; float x2; })sizeInPixels;
- (void)willDrawView;

@end
