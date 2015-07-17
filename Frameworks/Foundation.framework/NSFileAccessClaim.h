/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAccessClaim : NSObject {
    unsigned int _blockageCount;
    NSMutableSet *_blockingClaims;
    NSMutableSet *_blockingReactorIDs;
    BOOL _cameFromSuperarbiter;
    NSString *_claimID;
    NSMutableArray *_claimerBlockageReasons;
    NSError *_claimerError;
    id _claimerOrNil;
    NSObject<OS_dispatch_semaphore> *_claimerWaiterOrNull;
    NSObject<OS_xpc_object> *_client;
    NSMutableArray *_devaluationProcedures;
    BOOL _didWait;
    NSMutableArray *_finishingProcedures;
    BOOL _isRevoked;
    NSMutableOrderedSet *_pendingClaims;
    NSMutableArray *_providerCancellationProcedures;
    NSString *_purposeIDOrNil;
    NSMutableDictionary *_reacquisitionProceduresByPresenterID;
    NSMutableArray *_revocationProcedures;
    NSMutableArray *_sandboxTokens;
}

+ (BOOL)canReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned int)arg4;
+ (BOOL)canWritingItemAtLocation:(id)arg1 options:(unsigned int)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned int)arg4;
+ (BOOL)readingItemAtLocation:(id)arg1 withPurposeID:(id)arg2 requiresOnlyPhysicalItemWithOptions:(unsigned int)arg3;
+ (BOOL)writingItemAtLocation:(id)arg1 withPurposeID:(id)arg2 requiresOnlyPhysicalItemWithOptions:(unsigned int)arg3;

- (BOOL)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (void)addPendingClaim:(id)arg1;
- (void)block;
- (void)blockClaimerForReason:(id)arg1;
- (BOOL)cameFromSuperarbiter;
- (BOOL)canAccessLocations:(id)arg1 forReading:(BOOL)arg2 error:(id*)arg3;
- (void)cancelled;
- (BOOL)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(int*)arg2 andIfSoThenReevaluateSelf:(id /* block */)arg3;
- (id)claimID;
- (id)claimerError;
- (BOOL)claimerInvokingIsBlockedByReactorWithID:(id)arg1;
- (id)client;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)devalueOldClaim:(id)arg1;
- (void)devalueSelf;
- (BOOL)didWait;
- (void)evaluateNewClaim:(id)arg1;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (void)finalize;
- (void)finished;
- (void)forwardUsingMessageSender:(id /* block */)arg1 crashHandler:(id /* block */)arg2;
- (void)granted;
- (id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(id /* block */)arg3;
- (void)invokeClaimer;
- (BOOL)isBlockedByClaimWithPurposeID:(id)arg1;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isGranted;
- (BOOL)isRevoked;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(BOOL)arg2 relinquishUsingProcedureGetter:(id /* block */)arg3;
- (void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(id /* block */)arg2;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideThenContinue:(id /* block */)arg2;
- (id)newClaimerWaiter;
- (id)pendingClaims;
- (void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(id /* block */)arg2;
- (id)purposeID;
- (id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2;
- (void)removePendingClaims:(id)arg1;
- (void)revoked;
- (void)setCameFromSuperarbiter;
- (void)setClaimerError:(id)arg1;
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (void)unblock;
- (void)unblockClaimerForReason:(id)arg1;
- (void)whenDevaluedPerformProcedure:(id /* block */)arg1;
- (void)whenFinishedPerformProcedure:(id /* block */)arg1;
- (void)whenRevokedPerformProcedure:(id /* block */)arg1;

@end
