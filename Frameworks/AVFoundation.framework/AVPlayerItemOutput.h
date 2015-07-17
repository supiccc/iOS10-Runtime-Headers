/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemOutput : NSObject {
    AVPlayerItemOutputInternal *_outputInternal;
}

@property (nonatomic) BOOL suppressesPlayerRendering;

- (BOOL)_attachToPlayerItem:(id)arg1;
- (struct OpaqueCMTimebase { }*)_copyTimebase;
- (void)_detachFromPlayerItem;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_itemTimeForHostTimeAsCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (id)_weakReference;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTimeForHostTime:(double)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTimeForMachAbsoluteTime:(long long)arg1;
- (void)setSuppressesPlayerRendering:(BOOL)arg1;
- (BOOL)suppressesPlayerRendering;

@end
