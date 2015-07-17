/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSXPCConnection : NSXPCConnection {
    MFFuture *_connectionFuture;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    NSLock *_lock;
    Protocol *_protocol;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCInterface *_remoteObjectInterface;
    int _resumeCount;
    BOOL _shouldLaunchMobileMail;
    unsigned int _state;
}

@property (nonatomic, readonly, retain) Protocol *protocol;
@property (nonatomic) BOOL shouldLaunchMobileMail;

- (id)_connection;
- (id)_connectionForFuture:(id)arg1;
- (void)_finishFuture:(id)arg1 withConnection:(id)arg2 error:(id)arg3;
- (void)_invalidateFuture:(id)arg1;
- (void)_invokeInterruptionHandlerForFuture:(id)arg1;
- (id /* block */)_nts_wrappedInterruptionHandler;
- (void)_queue_invokeInvalidationHandler;
- (void)_sendInvocation:(id)arg1 remoteInterface:(id)arg2 remoteProxy:(id)arg3 errorHandler:(id /* block */)arg4;
- (int)auditSessionIdentifier;
- (void)dealloc;
- (id)description;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (id)exportedInterface;
- (id)exportedObject;
- (id)initWithProtocol:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (int)processIdentifier;
- (id)protocol;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)resume;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setShouldLaunchMobileMail:(BOOL)arg1;
- (BOOL)shouldLaunchMobileMail;
- (void)suspend;

@end
