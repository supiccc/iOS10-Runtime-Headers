/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSession : NSObject {
    id /* block */ __connBlock;
    BOOL __isSharedSession;
    NSURLSessionConfiguration *__local_immutable_configuration;
    <NSURLSessionDelegate> *_delegate;
    NSOperationQueue *_delegateQueue;
    BOOL _invalid;
    NSOperationQueue *_realDelegateQueue;
    NSString *_sessionDescription;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (copy) id /* block */ _connBlock;
@property BOOL _isSharedSession;
@property (retain) NSURLSessionConfiguration *_local_immutable_configuration;
@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (retain) <NSURLSessionDelegate> *delegate;
@property (retain) NSOperationQueue *delegateQueue;
@property BOOL invalid;
@property (retain) NSOperationQueue *realDelegateQueue;
@property (copy) NSString *sessionDescription;
@property NSObject<OS_dispatch_queue> *workQueue;

+ (void)_getActiveSessionIdentifiersWithCompletionHandler:(id /* block */)arg1;
+ (void)_obliterateAllBackgroundSessionsWithCompletionHandler:(id /* block */)arg1;
+ (void)_releaseProcessAssertionForSessionIdentifier:(id)arg1;
+ (void)_sendPendingCallbacksForSessionIdentifier:(id)arg1;
+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
+ (id)sharedSession;

- (id)_AVAssetDownloadTaskWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id /* block */)_connBlock;
- (id)_copyConfiguration;
- (id)_downloadTaskWithRequest:(id)arg1 downloadFilePath:(id)arg2;
- (BOOL)_isSharedSession;
- (id)_local_immutable_configuration;
- (void)addDelegateBlock:(id /* block */)arg1;
- (BOOL)can_delegate_AVAssetDownloadTask_didReceiveDownloadToken;
- (BOOL)can_delegate_AVAssetDownloadTask_didWriteData;
- (BOOL)can_delegate_dataTask_didBecomeDownloadTask;
- (BOOL)can_delegate_dataTask_didBecomeStreamTask;
- (BOOL)can_delegate_dataTask_didReceiveData;
- (BOOL)can_delegate_dataTask_didReceiveResponse;
- (BOOL)can_delegate_dataTask_willCacheResponse;
- (BOOL)can_delegate_didFinishEventsForBackgroundURLSession;
- (BOOL)can_delegate_didReceiveChallenge;
- (BOOL)can_delegate_downloadTaskNeedsDownloadDirectory;
- (BOOL)can_delegate_downloadTask_didFinishDownloadingToURL;
- (BOOL)can_delegate_downloadTask_didReceiveResponse;
- (BOOL)can_delegate_downloadTask_didResumeAtOffset;
- (BOOL)can_delegate_downloadTask_didWriteData;
- (BOOL)can_delegate_openFileAtPath;
- (BOOL)can_delegate_streamTask_didCreateInputStreamoutputStream;
- (BOOL)can_delegate_task_actually_didCompleteWithError;
- (BOOL)can_delegate_task_conditionalRequirementsChanged;
- (BOOL)can_delegate_task_didCompleteWithError;
- (BOOL)can_delegate_task_didReceiveChallenge;
- (BOOL)can_delegate_task_didSendBodyData;
- (BOOL)can_delegate_task_isWaitingForConnection;
- (BOOL)can_delegate_task_isWaitingForConnectionWithError;
- (BOOL)can_delegate_task_isWaitingForConnectionWithReason;
- (BOOL)can_delegate_task_needNewBodyStream;
- (BOOL)can_delegate_task_willPerformHTTPRedirection;
- (BOOL)can_delegate_task_willSendRequestForEstablishedConnection;
- (BOOL)can_delegate_willRetryBackgroundDataTask;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataTaskWithHTTPGetRequest:(id)arg1;
- (id)dataTaskWithHTTPGetRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dataTaskWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)delegate_dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_dataTask:(id)arg1 didBecomeStreamTask:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_dataTask:(id)arg1 didReceiveData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_didFinishEventsForBackgroundURLSession;
- (void)delegate_didReceiveChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)delegate_downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_downloadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (void)delegate_downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)delegate_downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 completionHandler:(id /* block */)arg5;
- (id)delegate_downloadTaskNeedsDownloadDirectory:(id)arg1;
- (int)delegate_openFileAtPath:(id)arg1 mode:(int)arg2;
- (void)delegate_streamTask:(id)arg1 didCreateInputStream:(id)arg2 outputStream:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)delegate_task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_task:(id)arg1 conditionalRequirementsChanged:(BOOL)arg2;
- (void)delegate_task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)delegate_task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)delegate_task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)delegate_task:(id)arg1 isWaitingForConnectionWithError:(id)arg2;
- (void)delegate_task:(id)arg1 isWaitingForConnectionWithReason:(long long)arg2;
- (void)delegate_task:(id)arg1 needNewBodyStream:(id /* block */)arg2;
- (void)delegate_task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)delegate_task_isWaitingForConnection:(id)arg1;
- (void)delegate_willRetryBackgroundDataTask:(id)arg1 withError:(id)arg2;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)downloadTaskWithURL:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finalizeDelegateWithError:(id)arg1;
- (void)finishTasksAndInvalidate;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (void)getTasksWithCompletionHandler:(id /* block */)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (BOOL)invalid;
- (void)invalidateAndCancel;
- (BOOL)isBackgroundSession;
- (id)realDelegateQueue;
- (void)resetWithCompletionHandler:(id /* block */)arg1;
- (id)sessionDescription;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setInvalid:(BOOL)arg1;
- (void)setRealDelegateQueue:(id)arg1;
- (void)setSessionDescription:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)set_connBlock:(id /* block */)arg1;
- (void)set_isSharedSession:(BOOL)arg1;
- (void)set_local_immutable_configuration:(id)arg1;
- (id)streamTaskForHost:(id)arg1 port:(int)arg2 tls:(bool)arg3;
- (id)streamTaskForHost:(id)arg1 port:(int)arg2 tls:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)workQueue;

@end
