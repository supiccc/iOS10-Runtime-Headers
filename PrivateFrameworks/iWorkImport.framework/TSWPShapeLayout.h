/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPShapeLayout : TSDShapeLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver> {
    TSDWrapSegments *_cachedInteriorWrapSegments;
    TSWPLayout *_containedLayout;
    <TSWPShapeLayoutDelegate> *_delegate;
    BOOL _observingStorage;
}

@property (nonatomic, readonly) BOOL alwaysStartsNewTarget;
@property (nonatomic, readonly) BOOL autosizes;
@property (nonatomic, readonly) unsigned int columnCount;
@property (nonatomic, readonly) BOOL columnsAreLeftToRight;
@property (nonatomic, readonly) TSWPLayout *containedLayout;
@property <TSWPShapeLayoutDelegate> *delegate;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) BOOL shrinkTextToFit;
@property (nonatomic, readonly) float textScaleFactor;

- (void)addChild:(id)arg1;
- (struct CGSize { float x1; float x2; })adjustedInsetsForTarget:(id)arg1;
- (BOOL)alwaysStartsNewTarget;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (struct CGPoint { float x1; float x2; })autosizePositionOffset;
- (struct CGPoint { float x1; float x2; })autosizePositionOffsetForFixedWidth:(BOOL)arg1 height:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })autosizedTransform;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })autosizedTransformForInfoGeometry:(id)arg1;
- (BOOL)autosizes;
- (id)children;
- (unsigned int)columnCount;
- (BOOL)columnsAreLeftToRight;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })computeLayoutTransform;
- (id)containedLayout;
- (void)createContainedLayoutForEditing;
- (void)createContainedLayoutForInstructionalText;
- (unsigned int)cropLine:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 lineSegmentRects:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (id)delegate;
- (id)dependentLayouts;
- (id)dependentsOfTextLayout:(id)arg1;
- (float)gapForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (id)initWithInfo:(id)arg1;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (id)interiorClippingPath;
- (id)interiorWrapPath;
- (id)interiorWrapSegments;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (void)invalidatePath;
- (void)invalidateSize;
- (BOOL)isInvisibleAutosizingShape;
- (id)layoutMargins;
- (float)maxAutoGrowWidthForTextLayout:(id)arg1;
- (float)maxAutoGrowWidthForTextLayout:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })nonAutosizedFrameForTextLayout:(id)arg1;
- (BOOL)parentAutosizes;
- (id)pathSource;
- (float)positionForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2 target:(id)arg3 outWidth:(float*)arg4 outGap:(float*)arg5;
- (void)processChangedProperty:(int)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)setChildren:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGeometry:(id)arg1;
- (BOOL)shrinkTextToFit;
- (BOOL)textLayoutShouldLayoutVertically:(id)arg1;
- (BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)arg1;
- (id)textWrapper;
- (void)updateChildrenFromInfo;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (float)widthForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;

@end
