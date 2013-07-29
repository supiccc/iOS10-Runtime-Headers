/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUMediaPlayerItem, NSString, NSNumber;

@interface SUScriptMediaPlayerItem : SUScriptObject  {
    SUMediaPlayerItem *_mediaItem;
}

@property(copy) NSString * backgroundImageURL;
@property(copy) NSString * bookmarkIdentifier;
@property(copy) NSString * initialOrientation;
@property(retain) NSNumber * itemIdentifier;
@property(copy) NSString * itemType;
@property(retain) NSNumber * playableDuration;
@property(copy) NSString * subtitle;
@property(copy) NSString * title;
@property(copy) NSString * URL;

+ (id)webScriptNameForKey:(const char *)arg1;

- (id)copyNativeMediaPlayerItem;
- (void)setPlayableDuration:(id)arg1;
- (void)setInitialOrientation:(id)arg1;
- (id)initialOrientation;
- (void)setBookmarkIdentifier:(id)arg1;
- (id)bookmarkIdentifier;
- (void)setBackgroundImageURL:(id)arg1;
- (id)backgroundImageURL;
- (void)setItemType:(id)arg1;
- (id)itemType;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)playableDuration;
- (id)itemIdentifier;
- (void)setItemIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)attributeKeys;
- (void)dealloc;
- (id)URL;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setURL:(id)arg1;

@end