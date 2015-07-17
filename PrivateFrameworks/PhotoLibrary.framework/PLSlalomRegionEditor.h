/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLSlalomRegionEditor : UIControl {
    <PLSlalomRegionEditorDelegate> *_delegate;
    BOOL _draggingEnd;
    BOOL _draggingStart;
    UIImageView *_endHandleView;
    float _endValue;
    BOOL _forceLayout;
    float _maxValue;
    float _minValue;
    UIImageView *_startHandleView;
    float _startValue;
    struct CGPoint { 
        float x; 
        float y; 
    } _touchLocationWhenTrackingZoomBegan;
    float _touchOffset;
    UIImageView *_trackImageView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _trackInsets;
    UIImageView *_trackSnapshotView;
    BOOL _trackingZoom;
    float _trimHandleWidth;
    BOOL _zoomAnimating;
    double _zoomDelay;
    double _zoomMaxValue;
    double _zoomMinValue;
    BOOL _zoomed;
}

@property (nonatomic) <PLSlalomRegionEditorDelegate> *delegate;
@property (nonatomic) float endValue;
@property (nonatomic) float maxValue;
@property (nonatomic) float minValue;
@property (nonatomic) float startValue;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } trackInsets;
@property (nonatomic) float trimHandleWidth;
@property (getter=isZoomAnimating, setter=setZoomAnimating:, nonatomic) BOOL zoomAnimating;
@property (nonatomic) double zoomDelay;

- (void)_beginTrackingZoomWithTouch:(id)arg1;
- (void)_cancelTrackingZoom;
- (void)_cancelZoom;
- (void)_cancelZoomTrackingIfNeccessaryWithTouch:(id)arg1;
- (void)_drawCurveWithFlatEndsFromX:(float)arg1 fromY:(float)arg2 toX:(float)arg3 toY:(float)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_endHandleFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_handleFrameForValue:(float)arg1 isStart:(BOOL)arg2;
- (id)_handleImage;
- (BOOL)_isTouch:(id)arg1 inHandleIsStart:(BOOL)arg2 outTouchOffset:(float*)arg3;
- (BOOL)_isZoomed;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_startHandleFrame;
- (void)_stopTrackingAndSendControlEvents:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_trackFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_trackFrameNoZoom;
- (id)_trackImageForZoom:(BOOL)arg1;
- (float)_trackScale;
- (float)_trimHandleWidth;
- (void)_updateSlidersWithTouch:(id)arg1;
- (void)_updateTrack;
- (float)_valueFromEndHandleFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)_valueFromHandleFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isStart:(BOOL)arg2;
- (float)_valueFromStartHandleFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)_zoomMaxValue;
- (double)_zoomMinValue;
- (void)_zoomPressWasHeld;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (float)endValue;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isZoomAnimating;
- (void)layoutSubviews;
- (float)maxValue;
- (float)minValue;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setEndValue:(float)arg1;
- (void)setEndValue:(float)arg1 notify:(BOOL)arg2;
- (void)setMaxValue:(float)arg1;
- (void)setMinValue:(float)arg1;
- (void)setStartValue:(float)arg1;
- (void)setStartValue:(float)arg1 notify:(BOOL)arg2;
- (void)setTrackInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTrimHandleWidth:(float)arg1;
- (void)setZoomAnimating:(BOOL)arg1;
- (void)setZoomDelay:(double)arg1;
- (void)setZoomMinValue:(double)arg1 maxValue:(double)arg2;
- (float)startValue;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })trackInsets;
- (float)trimHandleWidth;
- (double)zoomDelay;

@end
