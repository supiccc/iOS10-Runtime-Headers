/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTConditionalStyleFormulaOwner : NSObject <TSCEFormulaOwning> {
    TSCECalculationEngine *mCalculationEngine;
    TSCECellCoordinateVector *mCellsToInvalidate;
    TSCECellCoordinateVector *mCellsToRewrite;
    struct __CFUUID { } *mOwnerID;
    TSTTableInfo *mTableInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)addFormulaForConditionalStyle:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)changedConditionForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)checkConditionForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 withConditionalStyle:(id)arg2 withIndex:(unsigned int*)arg3;
- (void)dealloc;
- (id)initWithTableInfo:(id)arg1;
- (id)initWithTableInfo:(id)arg1 ownerID:(struct __CFUUID { }*)arg2;
- (void)invalidateForCalculationEngine:(id)arg1;
- (struct __CFUUID { }*)ownerID;
- (struct { BOOL x1; BOOL x2; BOOL x3; })recalculateForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4;
- (int)registerWithCalculationEngineChoosingUniqueID:(id)arg1;
- (void)releaseForCalculationEngine:(id)arg1;
- (void)removeFormulaAtCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)replaceFormulaForConditionalStyle:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)retainForCalculationEngine:(id)arg1;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; unsigned int x2 : 8; })arg2 rewriteSpec:(id)arg3;
- (void)setOwnerID:(struct __CFUUID { }*)arg1;
- (void)setTableInfo:(id)arg1;
- (id)tableInfo;
- (void)writeResultsForCalculationEngine:(id)arg1;

@end
