/* Generated by RuntimeBrowser.
 */

@protocol FBSynchronizedTransaction <NSObject>

@required

- (BOOL)isReadyForSynchronizedCommit;
- (void)performSynchronizedCommit;
- (void)setSynchronizationDelegate:(id <FBSynchronizedTransactionDelegate>)arg1;
- (<FBSynchronizedTransactionDelegate> *)synchronizationDelegate;

@end
