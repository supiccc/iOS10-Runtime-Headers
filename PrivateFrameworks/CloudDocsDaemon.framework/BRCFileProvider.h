/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFileProvider : NSObject <NSFileProvider> {
    NSMutableDictionary *_presentersIDsByURL;
    NSObject<OS_dispatch_queue> *_privQueue;
    NSOperationQueue *_queue;
    BRCAccountSession *_session;
    NSURL *_url;
}

@property (readonly, copy) NSString *_fileReactorID;
@property (readonly) NSOperationQueue *_providedItemsOperationQueue;
@property (readonly, copy) NSURL *_providedItemsURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) BRCAccountSession *session;
@property (readonly) Class superclass;

+ (id)prettyNameForFilePresenterID:(id)arg1;

- (void).cxx_destruct;
- (id)_keyForURL:(id)arg1;
- (id)_keyForURL:(id)arg1 andID:(id)arg2;
- (void)_provideItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;
- (void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;
- (id)_providedItemsOperationQueue;
- (id)_providedItemsURL;
- (void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 session:(id)arg3;
- (void)_unregisterPresenterForItemAtURL:(id)arg1 key:(id)arg2;
- (void)dumpToContext:(id)arg1;
- (id)initWithURL:(id)arg1 name:(id)arg2;
- (void)resume;
- (id)session;
- (void)setSession:(id)arg1;
- (void)suspend;

@end
