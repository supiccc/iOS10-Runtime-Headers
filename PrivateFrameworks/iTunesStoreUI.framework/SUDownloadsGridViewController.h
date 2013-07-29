/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, SUTableDataSource, SUClientInterface;

@interface SUDownloadsGridViewController : SUGridViewController <SUDownloadsChildViewController> {
    BOOL _isEditing;
    SUClientInterface *_clientInterface;
}

@property(retain) SUClientInterface * clientInterface;
@property(retain) SUTableDataSource * dataSource;
@property(retain) NSArray * scriptButtons;


- (void)_deleteAction:(id)arg1;
- (void)_editAction:(id)arg1;
- (void)_updateEditButtons;
- (void)_reloadColumnCountForOrientation:(int)arg1;
- (id)_downloadsViewController;
- (id)visibleDownloadCellForDownload:(id)arg1;
- (void)reloadDownloadCellForDownload:(id)arg1;
- (void)setScriptButtons:(id)arg1;
- (id)scriptButtons;
- (BOOL)deleteCellAtIndexPath:(id)arg1;
- (void)gridViewEditSelectionDidChange:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (id)clientInterface;
- (void)setDataSource:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)reloadData;

@end