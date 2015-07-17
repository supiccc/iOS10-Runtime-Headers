/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings {
    float _ISO;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _exposureDuration;
}

@property (readonly) float ISO;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } exposureDuration;

+ (id)manualExposureSettingsWithExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 ISO:(float)arg2;

- (float)ISO;
- (id)_initManualExposureSettingsWithExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 ISO:(float)arg2;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;

@end
