/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask <NSStreamDelegate> {
    unsigned int _bytesRead;
    NSInputStream *_initialStream;
    NSObject<OS_dispatch_io> *_pipeIO;
    NSFileHandle *_readHandle;
    NSInputStream *_requestBodyStream;
    BOOL _streamBased;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) NSFileHandle *readHandle;
@property (getter=isStreamBased, readonly) BOOL streamBased;
@property (readonly) Class superclass;

- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didReceiveData:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_onqueue_didReceiveResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_onqueue_needNewBodyStream:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)_onqueue_openStream;
- (void)_onqueue_willBeRetried;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)captureStream:(id)arg1;
- (void)dealloc;
- (void)finishStream:(BOOL)arg1;
- (id)initWithSession:(id)arg1 remoteSession:(id)arg2 request:(id)arg3 ident:(unsigned int)arg4;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isStreamBased;
- (void)readFromStream;
- (id)readHandle;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;

@end
