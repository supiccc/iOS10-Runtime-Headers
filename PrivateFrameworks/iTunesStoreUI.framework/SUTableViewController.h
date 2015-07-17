/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTableViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {
    SUTableDataSource *_dataSource;
    int _disappearOrientation;
    NSIndexPath *_firstTapIndexPath;
    int _placeholderRowCount;
    BOOL _preferUserInteractionWhileScrolling;
    SUTableView *_tableView;
    int _tableViewStyle;
}

@property (nonatomic, retain) SUTableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int numberOfRows;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic) int tableViewStyle;

- (void)_deliverTapCount:(int)arg1 forIndexPath:(id)arg2;
- (void)_doubleTapTimeout;
- (void)_reloadPlaceholderCells;
- (void)_resetTableView;
- (BOOL)canSelectRowAtIndexPath:(id)arg1;
- (int)clippedCornersForIndexPath:(id)arg1;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (id)copyScriptProperties;
- (id)dataSource;
- (void)dealloc;
- (BOOL)deleteRowAtIndexPath:(id)arg1;
- (void)didReceiveMemoryWarning;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(int)arg2;
- (BOOL)indexPathIsPlaceholder:(id)arg1;
- (id)init;
- (void)loadView;
- (id)newTableView;
- (unsigned int)numberOfRows;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)reloadForChangedRowCount:(int)arg1;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(int)arg2 animated:(BOOL)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setTableViewStyle:(int)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (int)tableViewStyle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
