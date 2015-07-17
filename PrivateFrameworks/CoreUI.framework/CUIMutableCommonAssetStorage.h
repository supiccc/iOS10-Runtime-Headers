/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIMutableCommonAssetStorage : CUICommonAssetStorage

- (void)_setConstantName:(id)arg1 displayName:(id)arg2 forID:(unsigned int)arg3 inDebugTree:(void*)arg4;
- (void)_setZeroCodeInfo:(struct { unsigned int x1; unsigned int x2; })arg1 forKey:(const void*)arg2 withLength:(unsigned long)arg3 inTree:(const void*)arg4;
- (id)initWithPath:(id)arg1;
- (void)removeAssetForKey:(id)arg1;
- (void)removeAssetForKey:(const void*)arg1 withLength:(unsigned long)arg2;
- (void)setAsset:(id)arg1 forKey:(id)arg2;
- (void)setAsset:(id)arg1 forKey:(const void*)arg2 withLength:(unsigned long)arg3;
- (void)setAssociatedChecksum:(unsigned int)arg1;
- (void)setColor:(struct _rgbquad { unsigned int x1 : 8; unsigned int x2 : 8; unsigned int x3 : 8; unsigned int x4 : 8; })arg1 forName:(const char *)arg2 excludeFromFilter:(BOOL)arg3;
- (void)setColorSpaceID:(unsigned int)arg1;
- (void)setConstantName:(id)arg1 displayName:(id)arg2 forElementID:(int)arg3;
- (void)setConstantName:(id)arg1 displayName:(id)arg2 forPartID:(int)arg3;
- (void)setFontName:(id)arg1 baselineOffset:(float)arg2 forFontSelector:(id)arg3;
- (void)setFontSize:(float)arg1 forFontSizeSelector:(id)arg2;
- (void)setKeyFormatData:(id)arg1;
- (void)setKeySemantics:(int)arg1;
- (void)setRenditionCount:(unsigned int)arg1;
- (void)setRenditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 hotSpot:(struct CGPoint { float x1; float x2; })arg2 forName:(const char *)arg3;
- (void)setSchemaVersion:(unsigned int)arg1;
- (void)setStorageVersion:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (void)setVersionString:(const char *)arg1;
- (void)setZeroCodeBezelInformation:(struct { unsigned int x1; unsigned int x2; })arg1 forKey:(const void*)arg2 withLength:(unsigned long)arg3;
- (void)setZeroCodeGlyphInformation:(struct { unsigned int x1; unsigned int x2; })arg1 forKey:(const void*)arg2 withLength:(unsigned long)arg3;
- (BOOL)writeToDisk;
- (BOOL)writeToDiskAndCompact:(BOOL)arg1;

@end
