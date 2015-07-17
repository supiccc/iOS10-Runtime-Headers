/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKReflectionMapEffect : GLKBaseEffect <GLKNamedEffect> {
    BOOL _dirtyUniforms;
    union _GLKMatrix3 { 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m10; 
            float m11; 
            float m12; 
            float m20; 
            float m21; 
            float m22; 
        } ; 
        float m[9]; 
    } _matrix;
    int _matrixLoc;
    GLKEffectPropertyTexture *_textureCubeMap;
}

@property (nonatomic) BOOL dirtyUniforms;
@property (nonatomic) union _GLKMatrix3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; } x1; float x2[9]; } matrix;
@property (nonatomic) int matrixLoc;
@property (nonatomic, readonly) GLKEffectPropertyTexture *textureCubeMap;

- (void)dealloc;
- (id)description;
- (BOOL)dirtyUniforms;
- (id)init;
- (union _GLKMatrix3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; } x1; float x2[9]; })matrix;
- (int)matrixLoc;
- (void)prepareToDraw;
- (void)setDirtyUniforms:(BOOL)arg1;
- (void)setMatrix:(union _GLKMatrix3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; } x1; float x2[9]; })arg1;
- (void)setMatrixLoc:(int)arg1;
- (id)textureCubeMap;

@end
