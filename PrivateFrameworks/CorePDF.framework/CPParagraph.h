/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPParagraph : CPRegion {
    unsigned int alignment;
    BOOL below;
    id flowProperties;
    BOOL hasDropCap;
    CPListItem *listItem;
    BOOL noIndentation;
    float preformatWidth;
}

@property (nonatomic, retain) CPListItem *listItem;

- (void)accept:(id)arg1;
- (unsigned int)alignment;
- (BOOL)below;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)explode;
- (id)flowProperties;
- (BOOL)hasDropCap;
- (unsigned int)index;
- (id)init;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isImageRegion;
- (BOOL)isListItemRegion;
- (BOOL)isParagraphRegion;
- (BOOL)isPreformattedWithUnitWidth:(float*)arg1;
- (BOOL)isRowRegion;
- (BOOL)isShapeRegion;
- (BOOL)isTextRegion;
- (id)listItem;
- (BOOL)noIndentation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })reducedBounds;
- (float)selectionBottom;
- (void)setAlignment:(unsigned int)arg1;
- (void)setBelow:(BOOL)arg1;
- (void)setFlowProperties:(id)arg1;
- (void)setHasDropCap:(BOOL)arg1;
- (void)setIsImageRegion:(BOOL)arg1;
- (void)setIsTextRegion:(BOOL)arg1;
- (void)setListItem:(id)arg1;
- (void)setNoIndentation:(BOOL)arg1;

@end
