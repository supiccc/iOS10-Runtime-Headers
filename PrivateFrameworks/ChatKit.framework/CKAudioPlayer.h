/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    AVAudioPlayer *_audioPlayer;
    id /* block */ _block;
    <CKAudioPlayerDelegate> *_delegate;
    CADisplayLink *_displayLink;
    CKMediaObject *_mediaObject;
    double _prevCurrentTime;
}

@property (nonatomic, retain) AVAudioPlayer *audioPlayer;
@property (nonatomic) id /* block */ block;
@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKAudioPlayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (getter=isPlaying, nonatomic, readonly) BOOL playing;
@property (nonatomic) double prevCurrentTime;
@property (readonly) Class superclass;

- (id)audioPlayer;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (id /* block */)block;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (id)displayLink;
- (void)displayLinkFired:(id)arg1;
- (double)duration;
- (id)initWithFileURL:(id)arg1;
- (id)initWithMediaObject:(id)arg1;
- (BOOL)isPlaying;
- (id)mediaObject;
- (void)pause;
- (void)play;
- (void)playWithCompletionBlock:(id /* block */)arg1;
- (double)prevCurrentTime;
- (void)setAudioPlayer:(id)arg1;
- (void)setBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (void)setPrevCurrentTime:(double)arg1;
- (void)stop;

@end
