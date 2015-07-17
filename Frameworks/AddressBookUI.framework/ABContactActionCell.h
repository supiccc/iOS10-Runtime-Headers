/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactActionCell : ABLabeledCell {
    UILabel *_label;
    ABTransportButton *_transportIcon;
}

@property (nonatomic, readonly) ABContactAction *action;
@property (nonatomic, readonly) ABCardActionGroupItem *actionGroupItem;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) ABTransportButton *transportIcon;

- (id)action;
- (id)actionGroupItem;
- (void)dealloc;
- (id)label;
- (id)labelView;
- (float)minCellHeight;
- (void)setCardGroupItem:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setTransportIcon:(id)arg1;
- (BOOL)shouldPerformDefaultAction;
- (id)transportIcon;
- (id)variableConstraints;

@end
