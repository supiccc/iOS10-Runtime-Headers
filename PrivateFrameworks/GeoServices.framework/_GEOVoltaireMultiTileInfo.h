/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOVoltaireMultiTileInfo : NSObject {
    GEOTileKeyList *_keys;
    NSURL *_url;
    BOOL _useStatusCodes;
}

@property (nonatomic, readonly) GEOTileKeyList *keys;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) BOOL useStatusCodes;

- (void)appendKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 useStatusCodes:(BOOL)arg2;
- (id)keys;
- (id)url;
- (BOOL)useStatusCodes;

@end
