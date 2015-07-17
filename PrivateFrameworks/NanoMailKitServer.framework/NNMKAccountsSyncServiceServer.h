/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKAccountsSyncServiceServer : NNMKSyncServiceEndpoint {
    <NNMKAccountsSyncServiceServerDelegate> *_delegate;
}

@property (nonatomic) <NNMKAccountsSyncServiceServerDelegate> *delegate;

- (void).cxx_destruct;
- (id)addOrUpdateAccount:(id)arg1;
- (id)delegate;
- (id)deleteAccount:(id)arg1;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(int)arg2;
- (id)initWithQueue:(id)arg1;
- (void)readProtobufData:(id)arg1 type:(unsigned int)arg2;
- (id)sendInitialAccountsSync:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;

@end
