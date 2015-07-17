/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBFilter : NSObject {
    CIFilter *_ciFilter;
    CIFilter *_wrapMirrorFilter;
}

+ (id)defaultValueForKey:(id)arg1;
+ (id)filterWithName:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;

- (id)_presentationName;
- (BOOL)allowAbsoluteGestures;
- (void)applyParametersToCIFilter:(BOOL)arg1 extent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)ciFilter;
- (id)ciFilterName;
- (id)createOutputImage:(id)arg1 mirrored:(BOOL)arg2 size:(struct CGSize { float x1; float x2; })arg3;
- (void)dealloc;
- (id)description;
- (float)floatValueForKeyIfSupported:(id)arg1;
- (void)handleGestureAtLocations:(struct CGPoint { float x1; float x2; }*)arg1 count:(int)arg2 translation:(struct CGPoint { float x1; float x2; })arg3 viewSize:(struct CGSize { float x1; float x2; })arg4 stateBegan:(BOOL)arg5 mirror:(BOOL)arg6;
- (void)handlePanGesture:(struct CGPoint { float x1; float x2; })arg1 viewSize:(struct CGSize { float x1; float x2; })arg2 stateBegan:(BOOL)arg3 mirror:(BOOL)arg4;
- (void)handlePinchGesture:(float)arg1 stateBegan:(BOOL)arg2;
- (void)handleRotateGesture:(float)arg1 stateBegan:(BOOL)arg2 mirror:(BOOL)arg3;
- (void)handleTapGesture:(struct CGPoint { float x1; float x2; })arg1 viewSize:(struct CGSize { float x1; float x2; })arg2 mirror:(BOOL)arg3;
- (id)init;
- (id)inputKeys;
- (id)localizedName;
- (id)name;
- (BOOL)needsWrapMirror;
- (struct CGPoint { float x1; float x2; })pointValueForKeyIfSupported:(id)arg1;
- (void)renderWithContext:(id)arg1 inputSize:(struct CGSize { float x1; float x2; })arg2 outputRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 mirrored:(BOOL)arg4;
- (void)resetInputImage;
- (void)setDefaults;
- (void)setFloatValue:(float)arg1 forKeyIfSupported:(id)arg2;
- (void)setPointValue:(struct CGPoint { float x1; float x2; })arg1 forKeyIfSupported:(id)arg2;

@end
