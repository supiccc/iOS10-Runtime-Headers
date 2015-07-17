/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate> {
    SSURLBagContext *_context;
    ISURLBag *_outputBag;
}

@property (readonly) ISURLBag *URLBag;
@property (readonly) SSURLBagContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)URLBag;
- (void)_addHeadersToRequestProperties:(id)arg1;
- (void)_postBagDidLoadNotificationWithURLBag:(id)arg1;
- (void)_sendPingsForURLBag:(id)arg1;
- (void)_setOutputURLBag:(id)arg1;
- (BOOL)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id*)arg3;
- (id)context;
- (void)dealloc;
- (id)init;
- (id)initWithBagContext:(id)arg1;
- (BOOL)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (void)run;
- (id)uniqueKey;

@end
