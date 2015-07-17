/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

@interface SZExtractor : NSObject {
    BOOL _errorOccurred;
    NSObject<OS_dispatch_queue> *_inProcessUnzipQueue;
    StreamingUnzipper *_inProcessUnzipper;
    NSXPCConnection *_unzipServiceConnection;
}

+ (void)enableDebugLogging;

- (void).cxx_destruct;
- (void)_errorOccurred;
- (void)_invalidateObject;
- (void)finishStreamWithCompletionBlock:(id /* block */)arg1;
- (id)initForLocalExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3;
- (id)initForRemoteExtractionWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3;
- (id)initWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 resumptionOffset:(unsigned long long*)arg4;
- (id)initWithPath:(id)arg1 options:(id)arg2 resumptionOffset:(unsigned long long*)arg3;
- (id)initWithPath:(id)arg1 resumptionOffset:(unsigned long long*)arg2;
- (void)supplyBytes:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)supplyDispatchData:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)suspendStreamWithCompletionBlock:(id /* block */)arg1;

@end
