/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFActiveDeviceSelectionViewController : PSListController <FMFSessionDelegate, UITableViewDataSource, UITableViewDelegate> {
    FMFDevice *_currentActiveDevice;
    NSMutableArray *_deviceList;
    FMFSession *_fmfSession;
    FMFDevice *_nowActiveDevice;
    int _specifierStartIndex;
}

@property (nonatomic, retain) FMFDevice *currentActiveDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *deviceList;
@property (nonatomic, retain) FMFSession *fmfSession;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) FMFDevice *nowActiveDevice;
@property (nonatomic) int specifierStartIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_hasActiveDeviceAtIndex:(unsigned int)arg1;
- (BOOL)_hasThisDeviceAtIndex:(unsigned int)arg1;
- (id)_specifierForRowIndex:(int)arg1;
- (void)cancelActiveDeviceSelection;
- (id)currentActiveDevice;
- (id)deviceList;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (id)fmfSession;
- (id)initWithSession:(id)arg1;
- (id)nowActiveDevice;
- (void)reloadSpecifiersOnMainQueue;
- (void)saveActiveDeviceSelection;
- (void)setCurrentActiveDevice:(id)arg1;
- (void)setDeviceList:(id)arg1;
- (void)setFmfSession:(id)arg1;
- (void)setNowActiveDevice:(id)arg1;
- (void)setSpecifierStartIndex:(int)arg1;
- (void)sortDevicesList;
- (int)specifierStartIndex;
- (id)specifiers;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
