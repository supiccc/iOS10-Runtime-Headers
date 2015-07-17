/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaPlayer : NSObject {
    MPAVItem *_currentItem;
    id _periodicTimeObserver;
    MPAVController *_player;
    SKUIMediaPlayerItemStatus *_playerItem;
    BOOL _playing;
    float _rate;
}

@property (nonatomic) MPAVItem *currentItem;
@property (nonatomic, retain) id periodicTimeObserver;
@property (nonatomic) MPAVController *player;
@property (nonatomic, retain) SKUIMediaPlayerItemStatus *playerItem;
@property (nonatomic) BOOL playing;
@property (nonatomic) float rate;

- (void).cxx_destruct;
- (id)currentItem;
- (id)periodicTimeObserver;
- (id)player;
- (id)playerItem;
- (BOOL)playing;
- (float)rate;
- (void)setCurrentItem:(id)arg1;
- (void)setPeriodicTimeObserver:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setRate:(float)arg1;

@end
