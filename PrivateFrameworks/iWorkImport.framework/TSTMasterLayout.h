/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMasterLayout : NSObject <TSTTableHiddenRowColumnProviding> {
    BOOL mBandedFillIsValid;
    TSDFill *mBandedFillObject;
    NSPointerArray *mBottomRowStrokes;
    unsigned int mCachedMaxNumberOfColumns;
    unsigned int mCachedMaxNumberOfRows;
    unsigned short mCachedNumberOfFooterRows;
    unsigned short mCachedNumberOfHeaderColumns;
    unsigned short mCachedNumberOfHeaderRows;
    float mCachedTableNameHeight;
    TSTWPColumnCache *mCellIDToWPColumnCache;
    TSTCellRegion *mCellRegionForClearedMergeStrokes;
    NSMutableArray *mChangeDescriptors;
    TSKChangeNotifier *mChangeNotifier;
    TSTStrokeWidthCache *mColumnToStrokeWidthCache;
    TSTDupContentCache *mDupContentCache;
    float mDynamicAddOrRemoveColumnElementSize;
    float mDynamicAddOrRemoveRowElementSize;
    BOOL mDynamicBandedFill;
    BOOL mDynamicBandedFillSetting;
    <TSTLayoutDynamicCellFillProtocol> *mDynamicCellFillDelegate;
    int mDynamicColumnAdjustment;
    <TSTLayoutDynamicColumnMoveProtocol> *mDynamicColumnMoveDelegate;
    float mDynamicColumnTabSize;
    <TSTLayoutDynamicContentProtocol> *mDynamicContentDelegate;
    TSUColor *mDynamicFontColor;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDynamicFontColorCellRange;
    float mDynamicHeightResize;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDynamicHidingContent;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDynamicHidingRowsCols;
    int mDynamicHidingRowsColsDirection;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDynamicHidingText;
    TSDInfoGeometry *mDynamicInfoGeometry;
    NSMutableSet *mDynamicLayouts;
    BOOL mDynamicRepResize;
    BOOL mDynamicRepressFrozenHeader;
    TSTLayoutDynamicResizeInfo *mDynamicResizeInfo;
    float mDynamicResizingColumnAdjustment;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDynamicResizingColumnRange;
    BOOL mDynamicResizingColumns;
    float mDynamicResizingRowAdjustment;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDynamicResizingRowRange;
    BOOL mDynamicResizingRows;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDynamicRevealingRowsCols;
    int mDynamicRevealingRowsColsDirection;
    int mDynamicRowAdjustment;
    <TSTLayoutDynamicRowMoveProtocol> *mDynamicRowMoveDelegate;
    float mDynamicRowTabSize;
    TSDLayoutGeometry *mDynamicSavedLayoutGeometry;
    TSTCellSelection *mDynamicSelection;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mDynamicSuppressingConditionalStylesCellID;
    float mDynamicTableNameResize;
    float mDynamicWidthResize;
    BOOL mEmptyFilteredTable;
    BOOL mHeaderColumnsFrozen;
    BOOL mHeaderColumnsRepeat;
    BOOL mHeaderRowsFrozen;
    BOOL mHeaderRowsRepeat;
    TSTHiddenRowsColumnsCache *mHiddenRowsColumnsCache;
    BOOL mInDynamicLayoutMode;
    NSObject<OS_dispatch_group> *mLayoutInFlight;
    TSUWidthLimitedQueue *mLayoutQueue;
    NSPointerArray *mLeftColumnStrokes;
    NSLock *mLock;
    unsigned int mMaxConcurrentTasks;
    struct CGSize { 
        float width; 
        float height; 
    } mMaximumPartitionSize;
    TSTMergeRangeSortedSet *mMergeRanges;
    unsigned int mNumCellsPerTask;
    TSTRWRetainedPointerKeyDictionary *mParaStyleToHeightCache;
    BOOL mProcessHiddenRowsForExport;
    int mReferenceCount;
    NSPointerArray *mRightColumnStrokes;
    TSTStrokeWidthCache *mRowToStrokeHeightCache;
    TSTConcurrentMutableIndexSet *mSpillStrokeColumns;
    TSTStrokeDefaultVendor *mStrokesDefaultVendor;
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    } mStrokesRWLock;
    float mTableDefaultFontHeightForArea;
    BOOL mTableDefaultFontHeightsAreValid;
    int mTableEnvironment;
    TSTTableInfo *mTableInfo;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mTableNameBounds;
    BOOL mTableNameEnabled;
    int mTableRowsBehavior;
    TSTWPColumnCache *mTempWPColumnCache;
    NSPointerArray *mTopRowStrokes;
    BOOL mUseBandedFill;
    TSTWidthHeightCache *mWidthHeightCache;
}

@property (nonatomic, readonly) TSDFill *bandedFillObject;
@property (nonatomic, readonly) TSTWPColumnCache *cellIDToWPColumnCache;
@property (nonatomic, readonly) NSMutableArray *changeDescriptors;
@property (nonatomic) TSKChangeNotifier *changeNotifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSTDupContentCache *dupContentCache;
@property (nonatomic, readonly) float dynamicAddOrRemoveColumnElementSize;
@property (nonatomic, readonly) float dynamicAddOrRemoveRowElementSize;
@property (nonatomic, readonly) BOOL dynamicBandedFill;
@property (nonatomic, readonly) BOOL dynamicBandedFillSetting;
@property (nonatomic, readonly) <TSTLayoutDynamicCellFillProtocol> *dynamicCellFillDelegate;
@property (nonatomic, readonly) int dynamicColumnAdjustment;
@property (nonatomic, readonly) <TSTLayoutDynamicColumnMoveProtocol> *dynamicColumnMoveDelegate;
@property (nonatomic, readonly) float dynamicColumnTabSize;
@property (nonatomic, readonly) <TSTLayoutDynamicContentProtocol> *dynamicContentDelegate;
@property (nonatomic, readonly) TSUColor *dynamicFontColor;
@property (nonatomic, readonly) struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dynamicFontColorCellRange;
@property (nonatomic) float dynamicHeightResize;
@property (nonatomic, readonly) TSDInfoGeometry *dynamicInfoGeometry;
@property (nonatomic, readonly) TSTLayout *dynamicLayout;
@property (nonatomic, readonly) NSMutableSet *dynamicLayouts;
@property (nonatomic) BOOL dynamicRepResize;
@property (nonatomic, readonly) float dynamicResizingColumnAdjustment;
@property (nonatomic, readonly) struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dynamicResizingColumnRange;
@property (nonatomic, readonly) BOOL dynamicResizingColumns;
@property (nonatomic, readonly) float dynamicResizingRowAdjustment;
@property (nonatomic, readonly) struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dynamicResizingRowRange;
@property (nonatomic, readonly) BOOL dynamicResizingRows;
@property (nonatomic, readonly) int dynamicRowAdjustment;
@property (nonatomic, readonly) <TSTLayoutDynamicRowMoveProtocol> *dynamicRowMoveDelegate;
@property (nonatomic, readonly) float dynamicRowTabSize;
@property (nonatomic, copy) TSDLayoutGeometry *dynamicSavedLayoutGeometry;
@property (nonatomic, readonly) TSTCellSelection *dynamicSelection;
@property (nonatomic, readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } dynamicSuppressingConditionalStylesCellID;
@property (nonatomic, readonly) float dynamicTableNameResize;
@property (nonatomic) float dynamicWidthResize;
@property (nonatomic, readonly) BOOL emptyFilteredTable;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSIndexSet *hiddenColumnIndices;
@property (nonatomic, readonly) NSIndexSet *hiddenRowIndices;
@property (nonatomic, readonly) TSTHiddenRowsColumnsCache *hiddenRowsColumnsCache;
@property (nonatomic, readonly) BOOL inDynamicLayoutMode;
@property (nonatomic, readonly) BOOL isGrouped;
@property (nonatomic) unsigned int maxConcurrentTasks;
@property (nonatomic) struct CGSize { float x1; float x2; } maximumPartitionSize;
@property (nonatomic) TSTMergeRangeSortedSet *mergeRanges;
@property (nonatomic) unsigned int numCellsPerTask;
@property (nonatomic) BOOL processHiddenRowsForExport;
@property (nonatomic, readonly) TSTStrokeDefaultVendor *strokesDefaultVendor;
@property (readonly) Class superclass;
@property (nonatomic) int tableEnvironment;
@property (nonatomic) TSTTableInfo *tableInfo;
@property (nonatomic, readonly) TSTTableModel *tableModel;
@property (nonatomic, readonly) int tableRowsBehavior;
@property (nonatomic, readonly) TSTWPColumnCache *tempWPColumnCache;
@property (nonatomic, readonly) BOOL useBandedFill;
@property (nonatomic, readonly) NSIndexSet *visibleColumnIndices;
@property (nonatomic, readonly) NSIndexSet *visibleRowIndices;
@property (nonatomic, readonly) TSTWidthHeightCache *widthHeightCache;

+ (float)effectiveTableNameHeightForModel:(id)arg1;
+ (id)tableNameTextEngine:(id)arg1;
+ (struct CGSize { float x1; float x2; })tableNameTextSize:(id)arg1;

- (id).cxx_construct;
- (id)accountingParagraphStylePropertyMapForCell:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)addChangeDescriptor:(id)arg1;
- (void)addChangeDescriptorWithType:(int)arg1 andCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (void)addChangeDescriptorWithType:(int)arg1 andCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 andStrokeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3;
- (BOOL)adjustGridColumnForVisibility:(unsigned int*)arg1 isLeft:(BOOL)arg2;
- (BOOL)adjustGridRowForVisibility:(unsigned int*)arg1 isTop:(BOOL)arg2;
- (BOOL)anyColumnsHiddenInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)anyRowsHiddenInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)anyRowsUserHiddenInCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)bandedFillObject;
- (float)calculatedTableNameHeight;
- (float)calculatedTableNameHeightIncludingDynamicResize:(BOOL)arg1;
- (void)captureDynamicResizeInfo;
- (BOOL)cell:(id*)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)cellIDToWPColumnCache;
- (id)changeDescriptors;
- (id)changeNotifier;
- (void)clearDynamicStrokesForCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)clearModelHeightWidthCacheForCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)containsAnyContentInRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)customStrokeProvider;
- (void)dealloc;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })defaultPaddingForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)description;
- (id)dupContentCache;
- (float)dynamicAddOrRemoveColumnElementSize;
- (float)dynamicAddOrRemoveRowElementSize;
- (BOOL)dynamicBandedFill;
- (BOOL)dynamicBandedFillSetting;
- (id)dynamicCellFillDelegate;
- (int)dynamicColumnAdjustment;
- (id)dynamicColumnMoveDelegate;
- (float)dynamicColumnTabSize;
- (id)dynamicContentDelegate;
- (id)dynamicFontColor;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dynamicFontColorCellRange;
- (float)dynamicHeightResize;
- (id)dynamicInfoGeometry;
- (id)dynamicLayout;
- (id)dynamicLayouts;
- (BOOL)dynamicRepResize;
- (float)dynamicResizingColumnAdjustment;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dynamicResizingColumnRange;
- (BOOL)dynamicResizingColumns;
- (float)dynamicResizingRowAdjustment;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dynamicResizingRowRange;
- (BOOL)dynamicResizingRows;
- (int)dynamicRowAdjustment;
- (id)dynamicRowMoveDelegate;
- (float)dynamicRowTabSize;
- (id)dynamicSavedLayoutGeometry;
- (id)dynamicSelection;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })dynamicSuppressingConditionalStylesCellID;
- (float)dynamicTableNameResize;
- (float)dynamicWidthResize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsetsFromPadding:(id)arg1;
- (BOOL)emptyFilteredTable;
- (void)enumerateMergedStrokesAndCapsForGridColumn:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateMergedStrokesAndCapsForGridRow:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateMergedStrokesForGridColumn:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateMergedStrokesForGridRow:(unsigned int)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 usingBlock:(id /* block */)arg4;
- (struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })expandCellRangeToVisibleNeighbors:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (unsigned short)firstEmptyBodyRow;
- (float)fontHeightOfParagraphStyle:(id)arg1;
- (id)hiddenColumnIndices;
- (id)hiddenRowIndices;
- (id)hiddenRowsColumnsCache;
- (BOOL)hintIsValid:(id)arg1;
- (BOOL)inDynamicLayoutMode;
- (id)initWithInfo:(id)arg1;
- (void)invalidateBandedFill;
- (void)invalidateDefaultFontHeights;
- (void)invalidateDynamicResizeInfo;
- (void)invalidateStrokeDefaults;
- (void)invalidateStrokeSpills;
- (void)invalidateTableNameHeight;
- (BOOL)isColumnHidden:(unsigned char)arg1;
- (BOOL)isDynamicallyChangingCellFill;
- (BOOL)isDynamicallyChangingColumnCount;
- (BOOL)isDynamicallyChangingContent;
- (BOOL)isDynamicallyChangingFontColorOfCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)isDynamicallyChangingInfoGeometry;
- (BOOL)isDynamicallyChangingRowCount;
- (BOOL)isDynamicallyChangingRowOrColumnCount;
- (BOOL)isDynamicallyChangingSelection;
- (BOOL)isDynamicallyColumnTabResizing;
- (BOOL)isDynamicallyHidingContentOfCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)isDynamicallyHidingRowsCols;
- (BOOL)isDynamicallyHidingRowsCols:(int)arg1 rowColIndex:(unsigned short)arg2;
- (BOOL)isDynamicallyHidingRowsColsCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)isDynamicallyHidingTextOfCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)isDynamicallyMovingColumns;
- (BOOL)isDynamicallyMovingRows;
- (BOOL)isDynamicallyRepressingFrozenHeaders;
- (BOOL)isDynamicallyResizing:(int)arg1;
- (BOOL)isDynamicallyResizing:(int)arg1 rowColIndex:(unsigned short)arg2;
- (BOOL)isDynamicallyResizingCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)isDynamicallyResizingTableName;
- (BOOL)isDynamicallyRevealingRowsCols;
- (BOOL)isDynamicallyRevealingRowsCols:(int)arg1 rowColIndex:(unsigned short)arg2;
- (BOOL)isDynamicallyRowTabResizing;
- (BOOL)isDynamicallySettingBandedFill;
- (BOOL)isEntireCellRangeHidden:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (BOOL)isGrouped;
- (BOOL)isRowHidden:(unsigned short)arg1;
- (BOOL)isRowUserHidden:(unsigned short)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })layoutCellIDForModelCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (unsigned char)layoutColumnForModelColumn:(unsigned char)arg1;
- (unsigned short)layoutRowForModelRow:(unsigned short)arg1;
- (unsigned int)maxConcurrentTasks;
- (struct CGSize { float x1; float x2; })maximumPartitionSize;
- (void)measureTextForLayoutState:(id)arg1;
- (id)mergeRanges;
- (id)mergedStrokesForGridColumn:(unsigned int)arg1;
- (id)mergedStrokesForGridRow:(unsigned int)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })modelCellIDForLayoutCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (unsigned char)modelColumnForLayoutColumn:(unsigned char)arg1;
- (unsigned short)modelRowForLayoutRow:(unsigned short)arg1;
- (id)newLayoutHint;
- (id)newTextEngineForCell:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (unsigned short)nonUserHiddenRowAfterAndIncludingRow:(unsigned short)arg1;
- (unsigned int)numCellsPerTask;
- (void)p_clearStrokesForMergesInCellRegion:(id)arg1;
- (void)p_invalidateClearedStrokesForCellRegion:(id)arg1;
- (void)p_setDynamicStroke:(id)arg1 strokeOrder:(int)arg2 forGridColumn:(unsigned int)arg3 isLeft:(BOOL)arg4 beginRow:(unsigned int)arg5 endRow:(unsigned int)arg6;
- (void)p_setDynamicStroke:(id)arg1 strokeOrder:(int)arg2 forGridRow:(unsigned int)arg3 isTop:(BOOL)arg4 beginColumn:(unsigned int)arg5 endColumn:(unsigned int)arg6;
- (id)p_strokesForGridColumn:(unsigned int)arg1 isLeft:(BOOL)arg2 takeStrokeWriteLock:(BOOL)arg3;
- (id)p_strokesForGridRow:(unsigned int)arg1 isTop:(BOOL)arg2 takeStrokeWriteLock:(BOOL)arg3;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })p_validateFittingInfoForEmptyCellsBetween:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 inRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3 widthHeightCollection:(id)arg4;
- (void)p_validateFittingInfoForEmptyCellsOnSingleRowBetween:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 andEndCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 widthHeightCollection:(id)arg3;
- (void)p_validateFittingInfoForEmptyMergeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)p_validateStrokesForRegion:(id)arg1;
- (id)p_validationFittingCellRegionForColumnsDeleted:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForColumnsInserted:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForRowsDeleted:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingCellRegionForRowsInserted:(id)arg1 currentRegionToValidate:(id)arg2;
- (id)p_validationFittingForChangeDescriptorType:(int)arg1 regionFromChangeDescriptor:(id)arg2 currentRegionToValidate:(id)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })paddingForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)processHiddenRowsForExport;
- (void)processLayoutTask:(id)arg1;
- (void)queueCellForValidation:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 cell:(id)arg2 mergeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3 wrap:(BOOL)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 prop:(BOOL)arg7 layoutCacheFlags:(int)arg8 layoutTask:(id)arg9;
- (void)resetModelHeightWidthCache;
- (void)setChangeNotifier:(id)arg1;
- (void)setClearedStrokeForGridColumn:(unsigned int)arg1 beginRow:(unsigned int)arg2 endRow:(unsigned int)arg3;
- (void)setClearedStrokeForGridRow:(unsigned int)arg1 beginColumn:(unsigned int)arg2 endColumn:(unsigned int)arg3;
- (void)setDynamicCellBorder:(id)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)setDynamicHeightResize:(float)arg1;
- (void)setDynamicRepResize:(BOOL)arg1;
- (void)setDynamicSavedLayoutGeometry:(id)arg1;
- (void)setDynamicWidthResize:(float)arg1;
- (void)setMaxConcurrentTasks:(unsigned int)arg1;
- (void)setMaximumPartitionSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMergeRanges:(id)arg1;
- (void)setNumCellsPerTask:(unsigned int)arg1;
- (void)setProcessHiddenRowsForExport:(BOOL)arg1;
- (void)setStrokeSpillForRightGridColumn:(unsigned int)arg1 leftGridColumn:(unsigned int)arg2 inRow:(unsigned int)arg3;
- (void)setTableEnvironment:(int)arg1;
- (void)setTableInfo:(id)arg1;
- (BOOL)shouldRowUseBandedFill:(unsigned short)arg1;
- (float)strokeHeightOfGridRow:(unsigned int)arg1 atColumnIndex:(unsigned int)arg2;
- (float)strokeHeightOfGridRow:(unsigned int)arg1 beginColumn:(unsigned int)arg2 endColumn:(unsigned int)arg3;
- (float)strokeWidthOfGridColumn:(unsigned int)arg1 atRowIndex:(unsigned int)arg2;
- (float)strokeWidthOfGridColumn:(unsigned int)arg1 beginRow:(unsigned int)arg2 endRow:(unsigned int)arg3;
- (id)strokesDefaultVendor;
- (void)strokesForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 top:(id*)arg2 left:(id*)arg3 bottom:(id*)arg4 right:(id*)arg5;
- (unsigned int)tableAreaForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (int)tableEnvironment;
- (id)tableInfo;
- (id)tableModel;
- (float)tableNameHeight;
- (id)tableNameTextEngine;
- (struct CGSize { float x1; float x2; })tableNameTextSize;
- (int)tableRowsBehavior;
- (id)tableStrokeProvider;
- (id)tempWPColumnCache;
- (void)updateDynamicResizeInfo:(id)arg1;
- (void)updateDynamicTableNameSize:(float)arg1;
- (void)updateWHCForMergeRanges;
- (BOOL)useBandedFill;
- (void)validate;
- (void)validateBandedFill;
- (id)validateCellForDrawing:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 cell:(id)arg2 contents:(id)arg3 wrap:(BOOL)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 layoutCacheFlags:(int)arg7 pageNumber:(unsigned int)arg8 pageCount:(unsigned int)arg9;
- (void)validateChangeDescriptorQueue;
- (void)validateDefaultFontHeights;
- (void)validateDynamicResizeInfo;
- (void)validateFittingInfoForCell:(id)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 mergeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3 setFitting:(BOOL)arg4 layoutTask:(id)arg5 widthHeightCollection:(id)arg6;
- (void)validateFittingInfoForChangeDescriptors:(id)arg1 rowsNeedingFittingInfo:(id)arg2;
- (void)validateFittingInfoWithCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)validateFittingInfoWithCellRangeWorker:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)validateFittingWidthsForRegion:(id)arg1;
- (void)validateLayoutHint:(id)arg1;
- (void)validateMasterLayoutForChangeDescriptors:(id)arg1;
- (void)validateRowVisibility:(id)arg1;
- (void)validateStrokesArrays;
- (void)validateStrokesForChangeDescriptors:(id)arg1;
- (void)validateTableRowsBehavior;
- (unsigned char)visibleColumnAfterAndIncludingColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnAfterColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnBeforeAndIncludingColumn:(unsigned char)arg1;
- (unsigned char)visibleColumnBeforeColumn:(unsigned char)arg1;
- (id)visibleColumnIndices;
- (unsigned short)visibleRowAfterAndIncludingRow:(unsigned short)arg1;
- (unsigned short)visibleRowAfterRow:(unsigned short)arg1;
- (unsigned short)visibleRowBeforeAndIncludingRow:(unsigned short)arg1;
- (unsigned short)visibleRowBeforeRow:(unsigned short)arg1;
- (id)visibleRowIndices;
- (void)waitForLayoutToComplete;
- (id)widthHeightCache;

@end
