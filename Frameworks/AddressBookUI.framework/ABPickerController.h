/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    BOOL _allowsCustomItems;
    NSArray *_builtinItems;
    CNContactStyle *_contactStyle;
    NSArray *_customItems;
    id /* block */ _itemLocalizationBlock;
    NSString *_itemLocalizationKey;
    NSIndexPath *_selectedIndexPath;
    NSString *_selectedItem;
    UITableViewController *_tableViewController;
}

@property (nonatomic) BOOL allowsCustomItems;
@property (nonatomic, copy) NSArray *builtinItems;
@property (nonatomic, retain) CNContactStyle *contactStyle;
@property (nonatomic, copy) NSArray *customItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ABPickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ itemLocalizationBlock;
@property (nonatomic, copy) NSString *itemLocalizationKey;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (nonatomic, retain) NSString *selectedItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableViewController *tableViewController;

- (id)_itemAtIndexPath:(id)arg1;
- (void)_updateRightButtonItem;
- (BOOL)allowsCustomItems;
- (id)builtinItems;
- (void)cancelPicker:(id)arg1;
- (id)contactStyle;
- (id)customItems;
- (void)customLabelUpdated:(id)arg1;
- (void)dealloc;
- (void)donePicker:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isEditing;
- (id /* block */)itemLocalizationBlock;
- (id)itemLocalizationKey;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)removeCustomItem:(id)arg1;
- (id)selectedIndexPath;
- (id)selectedItem;
- (void)setAllowsCustomItems:(BOOL)arg1;
- (void)setBuiltinItems:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setCustomItems:(id)arg1;
- (void)setItemLocalizationBlock:(id /* block */)arg1;
- (void)setItemLocalizationKey:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (id)tableViewController;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)titleForAddCustomItem;
- (id)titleForPickerItem:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
