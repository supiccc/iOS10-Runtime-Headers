/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchShareInfoOperation : CKDOperation {
    id /* block */ _shareInfoFetchedBlock;
    NSMutableDictionary *_shareTokenInfosToFetchByURL;
    NSMutableArray *_shareURLsToFetch;
}

@property (nonatomic, copy) id /* block */ shareInfoFetchedBlock;
@property (nonatomic, retain) NSMutableDictionary *shareTokenInfosToFetchByURL;
@property (nonatomic, retain) NSMutableArray *shareURLsToFetch;

- (void).cxx_destruct;
- (id)_decodeProtectedFullToken:(id)arg1 tokenInfo:(id)arg2;
- (void)_fetchShortTokenInfo;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_performCallbackForURL:(id)arg1 withInfo:(id)arg2 error:(id)arg3;
- (void)_prepareShortTokens;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned int)arg1;
- (void)setShareInfoFetchedBlock:(id /* block */)arg1;
- (void)setShareTokenInfosToFetchByURL:(id)arg1;
- (void)setShareURLsToFetch:(id)arg1;
- (id /* block */)shareInfoFetchedBlock;
- (id)shareTokenInfosToFetchByURL;
- (id)shareURLsToFetch;

@end
