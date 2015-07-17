/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapTileServer : NSObject {
    NSMutableDictionary *_activeTileCreators;
    NSObject<OS_dispatch_queue> *_homeQueue;
    NSMutableDictionary *_pendingRequests;
    BOOL _softwareRendering;
    VKRasterMapTileCache *_superTileCache;
    unsigned int _superTileSize;
    NSMutableSet *_tileCreators;
}

@property (nonatomic, readonly) unsigned int superTileSize;

- (void)_renderRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)detailedDescription;
- (id)init;
- (id)initWithSuperTileSize:(unsigned int)arg1 cache:(id)arg2 softwareRendering:(BOOL)arg3 homeQueue:(id)arg4;
- (void)renderRequest:(id)arg1 completion:(id /* block */)arg2;
- (unsigned int)superTileSize;

@end
