/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAlternateTracks : NSObject <AVPlayerItemLegibleOutputPushDelegate> {
    NSDictionary *_alternateTracks;
    MPAlternateTextTrack *_currentTextTrack;
    BOOL _disableAlternateTextTrackRendering;
    MPAVItem *_item;
    AVPlayerItemLegibleOutput *_legibleOutput;
    NSArray *_outOfBandTextTracks;
    NSMutableDictionary *_trackChangeDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAlternateTextTrackRendering;
@property (readonly) unsigned int hash;
@property (getter=isLoaded, nonatomic, readonly) BOOL loaded;
@property (nonatomic, retain) NSArray *outOfBandTextTracks;
@property (nonatomic, retain) MPAlternateTextTrack *selectedAlternateTextTrack;
@property (readonly) Class superclass;

+ (id)subtitleLanguages;

- (void).cxx_destruct;
- (id)_currentTextTrackAccordingToAVF;
- (id)_keyForTrackType:(unsigned int)arg1;
- (void)_suppressAVFSubtitleRendering;
- (void)beginTrackChanges;
- (void)commitTrackChanges;
- (id)currentTrackForType:(unsigned int)arg1;
- (BOOL)disableAlternateTextTrackRendering;
- (void)enableLegibleOutputIfNecessary;
- (BOOL)hasTracksForTypes:(unsigned int)arg1;
- (unsigned int)indexOfCurrentTrackForType:(unsigned int)arg1;
- (id)initWithItem:(id)arg1;
- (BOOL)isLoaded;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)outOfBandTextTracks;
- (void)reloadData;
- (void)reloadDataWithChangedCaptionDisplayType:(BOOL)arg1;
- (id)selectedAlternateTextTrack;
- (void)setDisableAlternateTextTrackRendering:(BOOL)arg1;
- (void)setOutOfBandTextTracks:(id)arg1;
- (void)setSelectedAlternateTextTrack:(id)arg1;
- (void)setTrack:(id)arg1 forType:(unsigned int)arg2;
- (unsigned int)trackCountForTypes:(unsigned int)arg1;
- (id)tracksForType:(unsigned int)arg1;

@end
