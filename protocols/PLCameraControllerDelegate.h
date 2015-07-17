/* Generated by RuntimeBrowser.
 */

@protocol PLCameraControllerDelegate <NSObject>

@optional

- (void)cameraController:(CAMCaptureController *)arg1 capturedPanorama:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)cameraController:(CAMCaptureController *)arg1 capturedPhoto:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)cameraController:(CAMCaptureController *)arg1 cleanApertureDidChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)cameraController:(CAMCaptureController *)arg1 didChangeCaptureAbility:(BOOL)arg2;
- (void)cameraController:(CAMCaptureController *)arg1 didFinishTransitionToShowEffectsGrid:(BOOL)arg2;
- (void)cameraController:(CAMCaptureController *)arg1 didReceivePanoramaIssue:(int)arg2;
- (void)cameraController:(CAMCaptureController *)arg1 didStartTransitionToShowEffectsGrid:(BOOL)arg2 animated:(BOOL)arg3;
- (void)cameraController:(CAMCaptureController *)arg1 didUpdatePanoramaPreview:(NSDictionary *)arg2;
- (void)cameraController:(CAMCaptureController *)arg1 faceMetadataDidChange:(NSArray *)arg2;
- (void)cameraController:(CAMCaptureController *)arg1 remoteFocusTapped:(struct CGPoint { float x1; float x2; })arg2;
- (void)cameraController:(CAMCaptureController *)arg1 videoZoomFactorDidChange:(float)arg2;
- (void)cameraController:(CAMCaptureController *)arg1 willChangeToMode:(int)arg2 device:(int)arg3;
- (void)cameraController:(CAMCaptureController *)arg1 willResetFocus:(BOOL)arg2 exposure:(BOOL)arg3;
- (void)cameraController:(CAMCaptureController *)arg1 willTransitionToShowEffectsGrid:(BOOL)arg2;
- (void)cameraControllerDidChangeEffectFilterIndex:(CAMCaptureController *)arg1;
- (void)cameraControllerDidChangeExposureMode:(CAMCaptureController *)arg1;
- (void)cameraControllerDidChangeExposureTargetBias:(CAMCaptureController *)arg1;
- (void)cameraControllerDidChangeFocusMode:(CAMCaptureController *)arg1;
- (void)cameraControllerDidChangeHDRSuggestion:(CAMCaptureController *)arg1;
- (void)cameraControllerDidChangePanoramaConfiguration:(CAMCaptureController *)arg1;
- (void)cameraControllerDidChangeUserLockedExposure:(CAMCaptureController *)arg1;
- (void)cameraControllerDidChangeUserLockedFocus:(CAMCaptureController *)arg1;
- (void)cameraControllerDidSetupSession:(CAMCaptureController *)arg1;
- (void)cameraControllerDidStartPanoramaCapture:(CAMCaptureController *)arg1;
- (void)cameraControllerDidStartSession:(CAMCaptureController *)arg1;
- (void)cameraControllerDidStopSession:(CAMCaptureController *)arg1;
- (void)cameraControllerDidStopVideoCapture:(CAMCaptureController *)arg1;
- (void)cameraControllerDidTakePhoto:(CAMCaptureController *)arg1;
- (void)cameraControllerExposureDidEnd:(CAMCaptureController *)arg1;
- (void)cameraControllerExposureDidStart:(CAMCaptureController *)arg1;
- (void)cameraControllerFlashWillFireChanged:(CAMCaptureController *)arg1;
- (void)cameraControllerFocusDidEnd:(CAMCaptureController *)arg1;
- (void)cameraControllerFocusDidStart:(CAMCaptureController *)arg1;
- (void)cameraControllerModeDidChange:(CAMCaptureController *)arg1;
- (void)cameraControllerPanoramaDidStopProcessing:(CAMCaptureController *)arg1;
- (void)cameraControllerPanoramaWillStartProcessing:(CAMCaptureController *)arg1;
- (void)cameraControllerPreviewDidStart:(CAMCaptureController *)arg1;
- (void)cameraControllerRemoteShutterCanceled:(CAMCaptureController *)arg1;
- (void)cameraControllerRemoteShutterNeedsReadiness:(CAMCaptureController *)arg1;
- (void)cameraControllerRemoteShutterPressed:(CAMCaptureController *)arg1 countdown:(unsigned int)arg2;
- (void)cameraControllerRemoteShutterStartVideoCapture:(CAMCaptureController *)arg1;
- (void)cameraControllerRemoteShutterStopVideoCapture:(CAMCaptureController *)arg1;
- (void)cameraControllerServerDied:(CAMCaptureController *)arg1;
- (void)cameraControllerServerError:(CAMCaptureController *)arg1;
- (void)cameraControllerSessionDidStart:(CAMCaptureController *)arg1;
- (void)cameraControllerSessionDidStop:(CAMCaptureController *)arg1;
- (void)cameraControllerSessionInterruptionEnded:(CAMCaptureController *)arg1;
- (void)cameraControllerSessionWasInterrupted:(CAMCaptureController *)arg1;
- (void)cameraControllerTorchActiveChanged:(CAMCaptureController *)arg1;
- (void)cameraControllerTorchAvailabilityChanged:(CAMCaptureController *)arg1;
- (void)cameraControllerVideoCaptureDidStart:(CAMCaptureController *)arg1;
- (void)cameraControllerVideoCaptureDidStop:(CAMCaptureController *)arg1 withReason:(int)arg2 userInfo:(NSDictionary *)arg3;
- (void)cameraControllerWillStartPreview:(CAMCaptureController *)arg1;
- (void)cameraControllerWillStopPanoramaCapture:(CAMCaptureController *)arg1;
- (void)cameraControllerWillStopSession:(CAMCaptureController *)arg1;
- (void)cameraControllerWillTakePhoto:(CAMCaptureController *)arg1;
- (void)captureController:(CAMCaptureController *)arg1 didFinishPanoramaRequest:(CAMPanoramaCaptureRequest *)arg2 withResponse:(CAMStillImageCaptureResponse *)arg3;
- (void)captureController:(CAMCaptureController *)arg1 didFinishRecordingForVideoRequest:(CAMVideoCaptureRequest *)arg2 withResponse:(CAMVideoCaptureResponse *)arg3;
- (void)captureController:(CAMCaptureController *)arg1 didOutputPanoramaCaptureParameters:(CAMPanoramaCaptureParameters *)arg2;
- (void)captureController:(CAMCaptureController *)arg1 didStartCapturingForPanoramaRequest:(CAMPanoramaCaptureRequest *)arg2;
- (void)captureController:(CAMCaptureController *)arg1 didStartProcessingForPanoramaRequest:(CAMPanoramaCaptureRequest *)arg2;
- (void)captureController:(CAMCaptureController *)arg1 didStartRecordingForVideoRequest:(CAMVideoCaptureRequest *)arg2;
- (void)captureController:(CAMCaptureController *)arg1 didStopCapturingForPanoramaRequest:(CAMPanoramaCaptureRequest *)arg2;
- (void)captureController:(CAMCaptureController *)arg1 didStopProcessingForPanoramaRequest:(CAMPanoramaCaptureRequest *)arg2;
- (void)captureController:(CAMCaptureController *)arg1 didStopRecordingForVideoRequest:(CAMVideoCaptureRequest *)arg2;
- (void)captureControllerPanoramaConfigurationChanged:(CAMCaptureController *)arg1;

@end
