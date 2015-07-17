/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGlobeCameraController : VKScreenCameraController <VKInteractiveCameraController> {
    struct CameraManager { 
        int (**_vptr$CameraManager)(); 
        bool _panBegin; 
        bool _panInProgress; 
        bool _panEnd; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _panCurrentCursor; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _panPreviousCursor; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _panStartCursor; 
        struct Position3d { 
            double _latitude; 
            double _longitude; 
            double _height; 
        } _panStartPosition; 
        double _panDistance; 
        bool _panAtStartPosition; 
        bool _rotateBegin; 
        bool _rotateInProgress; 
        bool _rotateEnd; 
        struct Position3d { 
            double _latitude; 
            double _longitude; 
            double _height; 
        } _rotateStartPosition; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _rotateCurrentCursor; 
        double _rotateAngle; 
        bool _tiltBegin; 
        bool _tiltInProgress; 
        bool _tiltEnd; 
        struct Position3d { 
            double _latitude; 
            double _longitude; 
            double _height; 
        } _tiltStartPosition; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _tiltCurrentCursor; 
        double _tiltAngle; 
        bool _zoomBegin; 
        bool _zoomInProgress; 
        bool _zoomEnd; 
        struct Position3d { 
            double _latitude; 
            double _longitude; 
            double _height; 
        } _zoomStartPosition; 
        struct Vector2i { 
            int _x; 
            int _y; 
        } _zoomCurrentCursor; 
        double _zoomFactor; 
        bool _zoomRotateToNorth; 
        bool _useTiltLimit; 
        int _tiltLimitMode; 
        bool _tiltLimitPushDownEnabled; 
        bool _tiltLimitTransferInProgress; 
        bool _tiltLimitPushDown; 
        double _startPushDownTilt; 
        double _tiltLimitTransferFraction; 
        double _startTiltLimitTilt; 
        struct PositionGeo3d { 
            double _x; 
            double _y; 
            double _z; 
        } _startTiltLimitPosition; 
        struct Vector3d { 
            double _x; 
            double _y; 
            double _z; 
        } _startTiltLimitDirection; 
        double _fullZoomTiltLimitFactor; 
    } _cameraManager;
    BOOL _couldEnter3DMode;
    double _currentDoublePanPitch;
    struct GlobeView { int (**x1)(); } *_globeView;
    BOOL _isPitching;
    BOOL _isRotating;
    BOOL _wasPitched;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; } centerCoordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct GlobeView { int (**x1)(); }*globeView;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) GEOMapRegion *mapRegionOfInterest;
@property (nonatomic, readonly) double pitch;
@property (nonatomic, readonly) double presentationYaw;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double yaw;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGPoint { float x1; float x2; })_centerScreenPoint;
- (struct Vector2i { int x1; int x2; })_cursorFromScreenPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_rotateAroundTargetWithDuration:(double)arg1 rotations:(double)arg2 completion:(id /* block */)arg3;
- (struct CGPoint { float x1; float x2; })_scaledScreenPointForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_update3DState;
- (double)altitude;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id /* block */)arg5;
- (BOOL)canEnter3DMode;
- (struct { double x1; double x2; double x3; })centerCoordinate;
- (BOOL)currentZoomLevelAllowsRotation;
- (void)dealloc;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)enter3DMode;
- (void)exit3DMode;
- (void)flyoverTourAnimation:(id)arg1 animateToStart:(BOOL)arg2 labelChanged:(id /* block */)arg3 stateChange:(id /* block */)arg4;
- (struct GlobeView { int (**x1)(); }*)globeView;
- (id)init;
- (BOOL)isFlyoverTourStarted;
- (BOOL)isFullyPitched;
- (BOOL)isPitched;
- (id)mapRegion;
- (id)mapRegionOfInterest;
- (int)maximumNormalizedZoomLevel;
- (int)minimumNormalizedZoomLevel;
- (void)moveTo:(struct { double x1; double x2; })arg1 height:(double)arg2 useHeight:(BOOL)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(id /* block */)arg8 completion:(id /* block */)arg9;
- (void)moveTo:(struct { double x1; double x2; })arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)panWithOffset:(struct CGPoint { float x1; float x2; })arg1 relativeToScreenPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)pauseFlyoverTourAnimation;
- (double)pitch;
- (void)pitch:(struct CGPoint { float x1; float x2; })arg1 translation:(double)arg2;
- (double)presentationYaw;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (void)resumeFlyoverTourAnimation;
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)rotateTo:(double)arg1 animated:(BOOL)arg2;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1 animated:(BOOL)arg2;
- (void)setGesturing:(BOOL)arg1;
- (void)setGlobeView:(struct GlobeView { int (**x1)(); }*)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (void)showSearchResultAnimationAtCoordinate:(struct { double x1; double x2; })arg1 withZoom:(double)arg2;
- (BOOL)snapMapIfNecessary:(const struct VKPoint { double x1; double x2; double x3; }*)arg1 animated:(BOOL)arg2;
- (void)startPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1 panAtStartPoint:(BOOL)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (void)stopFlyoverTourAnimation;
- (void)stopGlobeAnimations;
- (void)stopPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopSearchResultAnimation;
- (void)tapZoom:(struct CGPoint { float x1; float x2; })arg1 levels:(double)arg2 completionHandler:(id /* block */)arg3;
- (int)tileSize;
- (void)tiltTo:(double)arg1 animated:(BOOL)arg2 exaggerate:(BOOL)arg3;
- (void)updateCameraManager;
- (void)updateGlobeFromCamera;
- (void)updatePanWithTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 translation:(double)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 newValue:(double)arg2;
- (id)viewportInfo;
- (double)yaw;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { float x1; float x2; })arg2 completionHandler:(id /* block */)arg3;
- (double)zoomForMapRegion:(id)arg1;

@end
