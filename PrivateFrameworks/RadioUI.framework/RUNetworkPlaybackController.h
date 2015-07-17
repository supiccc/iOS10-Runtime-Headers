/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUNetworkPlaybackController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    AVAssetCache *_assetCache;
    NSString *_highQualityAssetFlavor;
    double _minimumBitrateForHighQuality;
}

@property (nonatomic, readonly) AVAssetCache *assetCache;
@property (nonatomic, readonly, copy) NSString *highQualityAssetFlavor;
@property (nonatomic, readonly) double minimumBitrateForHighQuality;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_init;
- (void)_radioStoreBagDidLoadNotification:(id)arg1;
- (void)_updateForLoadedStoreBag:(id)arg1;
- (id)assetCache;
- (void)dealloc;
- (id)highQualityAssetFlavor;
- (id)init;
- (double)minimumBitrateForHighQuality;

@end
