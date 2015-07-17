/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface NLArcMaskLayer : CAShapeLayer {
    float _arcStart;
    struct CGPoint { 
        float x; 
        float y; 
    } _center;
    float _radius;
}

@property (nonatomic) float arcStart;
@property (nonatomic) struct CGPoint { float x1; float x2; } center;
@property (nonatomic) float radius;

+ (BOOL)needsDisplayForKey:(id)arg1;

- (void)_regeneratePath;
- (id)actionForKey:(id)arg1;
- (void)animatePathCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 lineWidth:(float)arg3 duration:(float)arg4;
- (float)arcStart;
- (struct CGPoint { float x1; float x2; })center;
- (id)init;
- (float)radius;
- (void)setArcStart:(float)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRadius:(float)arg1;

@end
