/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching> {
    CALayer *mBlackBackgroundLayer;
    BOOL mFillCanApplyToCALayer;
    BOOL mLayerNeedsUpdate;
}

@property (readonly) KNSlideBackgroundInfo *slideBackgroundInfo;

+ (id)magicMoveMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureContext:(id)arg3;

- (id)additionalLayersUnderLayer;
- (void)dealloc;
- (void)didUpdateLayer:(id)arg1;
- (BOOL)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)isOpaque;
- (id)slideBackgroundInfo;
- (id)textureForContext:(id)arg1;
- (BOOL)wantsToDistortWithImagerContext;

@end
