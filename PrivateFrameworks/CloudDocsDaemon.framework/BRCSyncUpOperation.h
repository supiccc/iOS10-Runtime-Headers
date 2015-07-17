/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncUpOperation : _BRCOperation <BRCOperationSubclass> {
    NSMutableDictionary *_conflictLosersToResolveByRecordID;
    float _cost;
    NSMutableArray *_deletedRecordIDs;
    NSMutableArray *_deletedShareIDs;
    NSMutableDictionary *_recordIDsToDeleteToEtags;
    NSMutableArray *_recordsNeedingSharingInfo;
    NSMutableArray *_recordsToSave;
    unsigned long long _requestID;
    BRCServerZone *_serverZone;
    NSString *_stageID;
    id /* block */ _syncUpCompletionBlock;
}

@property (nonatomic, retain) NSMutableDictionary *conflictLosersToResolveByRecordID;
@property (nonatomic, readonly) float cost;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *deletedRecordIDs;
@property (nonatomic, retain) NSMutableArray *deletedShareIDs;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableDictionary *recordIDsToDeleteToEtags;
@property (nonatomic, retain) NSMutableArray *recordsNeedingSharingInfo;
@property (nonatomic, retain) NSMutableArray *recordsToSave;
@property (nonatomic, retain) BRCServerZone *serverZone;
@property (nonatomic, retain) NSString *stageID;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ syncUpCompletionBlock;

+ (id)syncUpOperationForZone:(id)arg1 maxCost:(float)arg2 retryAfter:(unsigned long long*)arg3;

- (void).cxx_destruct;
- (void)_scheduleModifyRecordsOperation;
- (id)conflictLosersToResolveByRecordID;
- (float)cost;
- (id)deletedRecordIDs;
- (id)deletedShareIDs;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithZone:(id)arg1;
- (void)main;
- (BOOL)prepareWithMaxCost:(float)arg1 retryAfter:(unsigned long long*)arg2;
- (id)recordIDsToDeleteToEtags;
- (id)recordsNeedingSharingInfo;
- (id)recordsToSave;
- (id)serverZone;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setDeletedRecordIDs:(id)arg1;
- (void)setDeletedShareIDs:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordsNeedingSharingInfo:(id)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setServerZone:(id)arg1;
- (void)setStageID:(id)arg1;
- (void)setSyncUpCompletionBlock:(id /* block */)arg1;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)stageID;
- (id /* block */)syncUpCompletionBlock;

@end
