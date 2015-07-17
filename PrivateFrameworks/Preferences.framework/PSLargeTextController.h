/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSLargeTextController : PSListController {
    UILabel *_bodyExampleLabel;
    NSArray *_contentSizeCategories;
    UILabel *_headlineExampleLabel;
    int _selectedCategoryIndex;
    BOOL _showsExtendedRangeSwitch;
    PSSpecifier *_sliderGroupSpecifier;
    BOOL _usesExtendedRange;
}

@property (nonatomic) BOOL showsExtendedRangeSwitch;

- (void)dealloc;
- (id)getDynamicTypeValueForSpecifier:(id)arg1;
- (void)loadView;
- (void)setDynamicTypeValue:(id)arg1 forSpecifier:(id)arg2;
- (void)setShowsExtendedRangeSwitch:(BOOL)arg1;
- (void)setUsesExtendedRange:(id)arg1 forSpecifier:(id)arg2;
- (BOOL)showsExtendedRangeSwitch;
- (void)sizeCategoryDidChange:(id)arg1;
- (id)specifiers;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)usesExtendedRangeForSpecifier:(id)arg1;
- (void)viewDidLayoutSubviews;

@end
