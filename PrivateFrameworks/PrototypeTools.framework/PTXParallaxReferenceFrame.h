/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXParallaxReferenceFrame : NSObject <_UISettingsKeyObserver> {
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    float x; 
                    float y; 
                    float z; 
                } ; 
                struct { 
                    float r; 
                    float g; 
                    float b; 
                } ; 
                struct { 
                    float s; 
                    float t; 
                    float p; 
                } ; 
                float v[3]; 
            } v; 
            float s; 
        } ; 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        float q[4]; 
    } _absoluteQuaternion;
    CAMediaTimingFunction *_curveFunction;
    UIWindow *_diagnosticsWindow;
    float _distanceMultiplier;
    UIView *_horizontalLockIndicator;
    UILabel *_idleIndicator;
    float _idleLeeway;
    struct CGPoint { 
        float x; 
        float y; 
    } _idleStartOffset;
    double _idleStartTime;
    unsigned long _jumpSound;
    float _jumpThreshold;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastOffset;
    double _lastUpdate;
    float _lockStrength;
    float _lockValue;
    union _GLKQuaternion { 
        struct { 
            union _GLKVector3 { 
                struct { 
                    float x; 
                    float y; 
                    float z; 
                } ; 
                struct { 
                    float r; 
                    float g; 
                    float b; 
                } ; 
                struct { 
                    float s; 
                    float t; 
                    float p; 
                } ; 
                float v[3]; 
            } v; 
            float s; 
        } ; 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        float q[4]; 
    } _referenceQuaternion;
    float _referenceShiftSpeed;
    float _secondsBeforeIdle;
    PTXParallaxEngineSettings *_settings;
    float _smoothingDegree;
    UIView *_verticalLockIndicator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createDiagnosticsWindow;
- (void)_createDirectionLockIndicators;
- (void)_createIdleIndicator;
- (struct CGPoint { float x1; float x2; })_currentRawOffset:(union _GLKQuaternion { struct { union _GLKVector3 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; struct { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; float x_1_2_4[3]; } x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; float x3[4]; })arg1;
- (struct CGPoint { float x1; float x2; })_curvedOffset;
- (BOOL)_isIdle;
- (float)_referenceShiftRadiansPerSecondForAngle:(float)arg1;
- (union _GLKQuaternion { struct { union _GLKVector3 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; struct { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; float x_1_2_4[3]; } x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; float x3[4]; })_relativeQuaternion:(union _GLKQuaternion { struct { union _GLKVector3 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; struct { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; float x_1_2_4[3]; } x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; float x3[4]; })arg1;
- (void)_showIdleUI:(BOOL)arg1;
- (void)_tearDownDiagnosticsWindow;
- (void)_tearDownDirectionLockIndicators;
- (void)_tearDownIdleIndicator;
- (void)_updateDirectionalLockIndicators;
- (void)_updateIdleStateForRawOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updateReferenceAttitude:(union _GLKQuaternion { struct { union _GLKVector3 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; struct { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; float x_1_2_4[3]; } x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; float x3[4]; })arg1;
- (void)_updateSettings;
- (void)_updateSmoothedOffsetForRawOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)dealloc;
- (int)directionLockStatus;
- (float)directionLockStrength;
- (id)initWithReferenceAttitude:(id)arg1 settings:(id)arg2;
- (struct CGPoint { float x1; float x2; })offset;
- (void)reset;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)updateWithAttitude:(id)arg1;

@end
