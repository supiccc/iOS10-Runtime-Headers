/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLocaleController : PSViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIView *_contentView;
    PSRegion *_currentRegion;
    NSArray *_filteredListContent;
    BOOL _hideKeyboardInSearchMode;
    PSLocaleSelector *_localeSelector;
    NSArray *_regionsList;
    UISearchBar *_searchBar;
    BOOL _searchMode;
    NSArray *_sections;
    UITableView *_tableView;
}

@property (nonatomic, retain) PSRegion *currentRegion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *filteredListContent;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PSLocaleSelector *localeSelector;
@property (nonatomic, retain) NSArray *regionsList;
@property (nonatomic, retain) NSArray *sections;
@property (readonly) Class superclass;

- (id)_mainContentView;
- (id)currentRegion;
- (void)dealloc;
- (id)filteredListContent;
- (id)filteredRegionsForRegionList:(id)arg1 searchString:(id)arg2;
- (id)init;
- (void)loadRegions;
- (void)loadView;
- (id)localeSelector;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)regionsList;
- (void)reloadDataAndScrollToCheckedRegionAnimated:(BOOL)arg1;
- (void)reloadSections;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)sections;
- (void)setCurrentRegion:(id)arg1;
- (void)setFilteredListContent:(id)arg1;
- (void)setLocaleSelector:(id)arg1;
- (void)setRegionsList:(id)arg1;
- (void)setSections:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)updateChecked:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
