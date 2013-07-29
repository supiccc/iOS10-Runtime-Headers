/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString, NSCache;

@interface CPBitmapStore : NSObject  {
    NSString *_path;
    NSString *_imagePath;
    NSCache *_cache;
    int _version;
    NSString *_versionPath;
}

@property(readonly) int version;

+ (id)CPBitmapStoreWithPath:(id)arg1 version:(int)arg2 useDirectHashing:(BOOL)arg3;

- (void)commitTransaction;
- (void)purge;
- (unsigned int)imageCount;
- (struct CGImage { }*)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (void)commitTxn;
- (id)allGroups;
- (struct CGImage { }*)copyImageForKey:(id)arg1;
- (id)_versionPath;
- (struct CGImage { }*)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { float x1; float x2; })arg3 opaque:(BOOL)arg4 scale:(float)arg5 fillMem:(id)arg6 alternateCompletion:(id)arg7;
- (BOOL)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img { id x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned char x6; }*)arg3;
- (unsigned int)memContentOffset;
- (void*)openAndMmap:(id)arg1 withInfo:(struct _img { id x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned char x6; }*)arg2;
- (BOOL)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img { id x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned char x6; }*)arg3;
- (id)imageNameForKey:(id)arg1 inGroup:(id)arg2;
- (id)imagePath;
- (id)initWithPath:(id)arg1 version:(int)arg2;
- (void)dealloc;
- (void)removeImagesInGroups:(id)arg1;
- (struct CGImage { }*)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { float x1; float x2; })arg3 opaque:(BOOL)arg4 scale:(float)arg5 draw:(id)arg6;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { float x1; float x2; })arg3 opaque:(BOOL)arg4 scale:(float)arg5 data:(id)arg6;
- (void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(BOOL)arg3 image:(struct CGImage { }*)arg4;
- (int)setVersion:(int)arg1;
- (int)version;

@end