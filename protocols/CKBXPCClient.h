/* Generated by RuntimeBrowser.
 */

@protocol CKBXPCClient <NSObject>

@required

- (void)handleOperationCheckpoint:(NSDictionary *)arg1 forOperationWithID:(NSString *)arg2;
- (void)handleOperationCompletion:(CKOperationResult *)arg1 forOperationWithID:(NSString *)arg2;
- (void)handleOperationProgress:(NSDictionary *)arg1 forOperationWithID:(NSString *)arg2;
- (void)handleOperationProgress:(void *)arg1 forOperationWithID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 7: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)openFileWithOpenInfo:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CKFileOpenInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKFileOpenResult *, NSError *, void*

@end
