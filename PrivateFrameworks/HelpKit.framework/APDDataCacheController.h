/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface APDDataCacheController : NSObject {
    int _URLSessionDataType;
    NSString *_cacheDirectory;
    unsigned int _cacheSize;
    NSMutableArray *_dataCacheArray;
    NSMutableDictionary *_dataCacheMap;
    NSString *_identifier;
    NSString *_locale;
    unsigned int _maxDataCacheSize;
}

@property (nonatomic, retain) NSMutableArray *dataCacheArray;
@property (nonatomic, retain) NSString *locale;

+ (void)removeInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addDataCache:(id)arg1;
- (id)cacheFileURLForDataCache:(id)arg1;
- (BOOL)cacheValidForPath:(id)arg1;
- (id)dataCacheArray;
- (id)dataCacheForPath:(id)arg1;
- (id)dataCacheForPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 directoryName:(id)arg2 maxCacheSize:(unsigned int)arg3 URLSessionDataType:(int)arg4;
- (id)locale;
- (void)moveCacheToEnd:(id)arg1;
- (id)newDataCache;
- (void)removeAllDataCache;
- (void)removeDataCache:(id)arg1;
- (void)removeDataCache:(id)arg1 updateCache:(BOOL)arg2;
- (void)setDataCacheArray:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)updateCache;
- (void)updateCacheDelay;
- (id)updateDataCacheForURL:(id)arg1 data:(id)arg2 lastModified:(id)arg3;

@end
