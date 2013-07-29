/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyParserObject : NSObject  {
    double _timeoutTime;
    BOOL _shouldAbort;
    BOOL _didTimeout;
    BOOL _copyBlocks;
    double _timeoutInterval;
}

@property double timeoutInterval;


- (BOOL)areBlocksCopied;
- (BOOL)shouldProceedParsing;
- (void)messageBodyParserWillBeginParsing:(id)arg1;
- (void)copyBlocks;
- (void)abortParsing;
- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;

@end