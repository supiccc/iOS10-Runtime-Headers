/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABStyleProvider;

@interface ABCustomAppearanceProvider : NSObject  {
    ABStyleProvider *_styleProvider;
}


- (void)customSetEmphasized:(BOOL)arg1 onCell:(id)arg2;
- (BOOL)shouldPropagateStylesThroughUnknownPersonActions;
- (BOOL)shouldPropagateStylesToPickers;
- (float)cardTableViewSectionFooterHeightWhenEditing:(BOOL)arg1;
- (float)cardTableViewSectionHeaderHeightWhenEditing:(BOOL)arg1;
- (id)newCustomCardTableScrollingBackgroundView;
- (Class)customCardActionCellClass;
- (Class)customCardCellClass;
- (BOOL)shouldUseCardContentProviderWhenAvailable;
- (int)unknownModalPresentationStyle;
- (void)setIndicatesFaceTimeHistory:(BOOL)arg1 onActionButton:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 onPropertyCell:(id)arg2;
- (float)distanceBetweenSections;
- (id)newScrollingBackgroundView;
- (Class)actionCellClass;
- (Class)propertyCellClass;
- (id)newActionButton;
- (id)newCardActionButton;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end