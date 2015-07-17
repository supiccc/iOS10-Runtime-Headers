/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAVPlayer : AVPlayer {
    AVPlayerItem *_AVPlayerItemBeingObserved;
    <RCAVPlayerDelegate> *_delegate;
    id _periodicTimeObserverToken;
    double _updateRate;
    BOOL _valid;
}

@property (nonatomic) <RCAVPlayerDelegate> *delegate;
@property (nonatomic, readonly) BOOL isReadyToPlay;
@property (nonatomic) double updateRate;

- (void).cxx_destruct;
- (void)_AVAudioSessionMediaServicesWereLostNotification:(id)arg1;
- (void)_AVAudioSessionMediaServicesWereResetNotification:(id)arg1;
- (void)_beginObservingPlayerItem:(id)arg1;
- (void)_currentItemBecameReadyToPlay;
- (void)_endObservingObservedPlayerItem;
- (void)_invalidate;
- (void)_periodicTimeUpdate;
- (void)_rateDidChange;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)isReadyToPlay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUpdateRate:(double)arg1;
- (double)updateRate;

@end
