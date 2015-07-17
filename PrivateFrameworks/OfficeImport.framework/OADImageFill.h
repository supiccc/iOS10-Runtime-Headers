/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADImageFill : OADFill {
    OADBlipRef *mBlipRef;
    long mDpi;
    BOOL mIsBlipRefOverridden;
    BOOL mIsDpiOverridden;
    BOOL mIsRotateWithShapeOverridden;
    BOOL mIsSourceRectOverridden;
    BOOL mIsTechniqueOverridden;
    BOOL mRotateWithShape;
    OADRelativeRect *mSourceRect;
    OADImageFillTechnique *mTechnique;
}

+ (id)defaultProperties;

- (id)blipRef;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long)dpi;
- (unsigned int)hash;
- (id)initWithDefaults;
- (BOOL)isBlipRefOverridden;
- (BOOL)isDpiOverridden;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRotateWithShapeOverridden;
- (BOOL)isSourceRectOverridden;
- (BOOL)isTechniqueOverridden;
- (BOOL)rotateWithShape;
- (void)setBlipRef:(id)arg1;
- (void)setDpi:(long)arg1;
- (void)setParent:(id)arg1;
- (void)setRotateWithShape:(BOOL)arg1;
- (void)setSourceRect:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (void)setTechnique:(id)arg1;
- (id)sourceRect;
- (id)technique;

@end
