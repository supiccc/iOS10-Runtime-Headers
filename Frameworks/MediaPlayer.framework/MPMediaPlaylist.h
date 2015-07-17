/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPlaylist : MPMediaItemCollection {
    NSArray *_representativeArtists;
    MPMediaQuery *_seedTracksQuery;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long persistentID;
@property (nonatomic, readonly) unsigned int playlistAttributes;
@property (nonatomic, readonly) NSArray *seedItems;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)_createFilterableDictionary;
+ (BOOL)_isValidPlaylistProperty:(id)arg1;
+ (BOOL)canFilterByProperty:(id)arg1;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)artworkCatalogsWithMaximumCount:(unsigned int)arg1;
- (BOOL)canPlayUsingNetworkType:(int)arg1;
- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)existsInLibrary;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (BOOL)isCloudMix;
- (BOOL)isEqual:(id)arg1;
- (id)items;
- (unsigned int)mediaTypes;
- (id)multiverseIdentifier;
- (id)name;
- (unsigned long long)persistentID;
- (unsigned int)playlistAttributes;
- (void)removeFirstItem;
- (id)representativeArtists;
- (id)representativeItem;
- (id)seedItems;
- (id)seedTracksQuery;
- (void)setUserSelectedArtworkImage:(id)arg1;
- (id)tiledArtworkCatalogWithRows:(unsigned int)arg1 columns:(unsigned int)arg2;
- (id)valueForProperty:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (void)registerSupportedCustomProperties;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

// Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI

- (int)MCD_sortPlaylistByName:(id)arg1;

@end
