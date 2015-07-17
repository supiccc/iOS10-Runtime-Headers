/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DAxisGridEnumerator : TSCH3DValueEnumerator {
    TSCHChartAxis *mAxis;
}

@property (nonatomic, readonly) TSCHChartAxis *axis;
@property (nonatomic, readonly) int type;

+ (id)enumeratorWithAxis:(id)arg1;

- (id)axis;
- (unsigned int)count;
- (void)dealloc;
- (id)initWithAxis:(id)arg1;
- (struct AxisGridLocation { BOOL x1; unsigned int x2; unsigned int x3; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_4_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_4_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_4_1_3; } x4; })position;
- (int)type;
- (void)update;

@end
