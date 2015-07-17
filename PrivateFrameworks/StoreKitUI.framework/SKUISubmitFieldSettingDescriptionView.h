/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISubmitFieldSettingDescriptionView : SKUIFieldSettingDescriptionView {
    float _aggregateLabelWidth;
    SKUIInputViewElement *_inputViewElement;
    UILabel *_label;
    SKUIFieldSettingDescription *_settingDescription;
}

+ (struct CGSize { float x1; float x2; })preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 settingDescription:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_addInputWithElement:(id)arg1;
- (void)_addSubmitInputWithElement:(id)arg1;
- (id)_currentControllerValue;
- (void)layoutSubviews;
- (void)reloadWithSettingDescription:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)tintColorDidChange;

@end
