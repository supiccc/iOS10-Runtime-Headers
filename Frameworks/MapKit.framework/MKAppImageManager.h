/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAppImageManager : NSObject <NSURLConnectionDataDelegate> {
    NSMapTable *_containers;
    NSCache *_iconCache;
    NSMutableDictionary *_urlConnections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedImageManager;

- (void).cxx_destruct;
- (void)cancelLoadAppImageAtURL:(id)arg1;
- (void)clearImageCache;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)init;
- (void)loadAppImageAtURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
