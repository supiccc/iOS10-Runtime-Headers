/* Generated by RuntimeBrowser.
 */

@protocol QLPreviewContentDataSource <NSObject>

@required

- (int)currentSourceUUIDForPreviewContentController:(id <QLPreviewContentControllerProtocol>)arg1;
- (int)numberOfPreviewItemsInPreviewContentController:(id <QLPreviewContentControllerProtocol>)arg1;
- (<QLPreviewItem> *)previewContentController:(id <QLPreviewContentControllerProtocol>)arg1 previewItemAtIndex:(int)arg2;
- (void)previewContentController:(void *)arg1 previewItemAtIndex:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 9: <QLPreviewContentControllerProtocol> *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <QLPreviewItem> *, NSError *, void*

@end
