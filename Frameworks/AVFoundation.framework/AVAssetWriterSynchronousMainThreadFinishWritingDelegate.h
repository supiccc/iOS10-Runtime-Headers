/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterSynchronousMainThreadFinishWritingDelegate : NSObject <AVAssetWriterFinishWritingHelperDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg2;
- (void)finishWritingHelperDidCancelFinishWriting:(id)arg1;
- (void)finishWritingHelperDidFail:(id)arg1;
- (BOOL)shouldHelperPrepareInputs;

@end
