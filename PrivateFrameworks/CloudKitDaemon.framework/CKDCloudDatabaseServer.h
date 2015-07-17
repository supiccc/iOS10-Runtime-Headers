/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDCloudDatabaseServer : NSObject <NSXPCListenerDelegate> {
    NSOperationQueue *_clientTeardownQueue;
    NSMutableArray *_connectedClients;
    NSObject<OS_dispatch_source> *_sighandlerSource;
    NSXPCListener *_xpcListener;
}

@property (nonatomic, retain) NSOperationQueue *clientTeardownQueue;
@property (nonatomic, retain) NSMutableArray *connectedClients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *sighandlerSource;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCListener *xpcListener;

+ (id)sharedServer;

- (void).cxx_destruct;
- (id)allClients;
- (id)clientTeardownQueue;
- (id)connectedClients;
- (void)dealloc;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)setClientTeardownQueue:(id)arg1;
- (void)setConnectedClients:(id)arg1;
- (void)setSighandlerSource:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (id)sighandlerSource;
- (void)statusReport;
- (id)xpcListener;

@end
