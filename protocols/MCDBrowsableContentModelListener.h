/* Generated by RuntimeBrowser.
 */

@protocol MCDBrowsableContentModelListener <NSObject>

@required

- (void)model:(MCDBrowsableContentModel *)arg1 didInitiatePlaybackOfItemAtIndexPath:(NSIndexPath *)arg2 error:(NSError *)arg3;
- (void)model:(MCDBrowsableContentModel *)arg1 didUpdateContainerAtIndexPath:(NSIndexPath *)arg2;
- (void)model:(MCDBrowsableContentModel *)arg1 didUpdateContentItemsAtIndexPaths:(NSArray *)arg2;

@end
