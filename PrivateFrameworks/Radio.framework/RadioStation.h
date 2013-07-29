/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSSet, NSManagedObject, NSManagedObjectContext, NSDictionary, NSString, NSURL, NSData, NSArray;

@interface RadioStation : NSObject <RadioManagedObjectWrapperProtocol> {
    BOOL _canSkipTracks;
    NSManagedObjectContext *_context;
    NSManagedObject *_managedObject;
    NSSet *_additionalReferencedTrackIDs;
}

@property long long stationID;
@property(copy) NSString * stationHash;
@property(readonly) int stationType;
@property long long persistentID;
@property long long adamID;
@property int sortOrder;
@property(copy) NSString * name;
@property(copy) NSString * stationDescription;
@property(copy) NSURL * artworkURL;
@property(copy) NSString * coreSeedName;
@property id seedTracks;
@property int songMixType;
@property(readonly) NSArray * tracksForPlayback;
@property BOOL tracksForPlaybackNeedRefresh;
@property BOOL editEnabled;
@property NSArray * editableFields;
@property BOOL likesEnabled;
@property BOOL skipEnabled;
@property int skipFrequency;
@property double skipInterval;
@property(copy) NSArray * skipTimestamps;
@property BOOL virtualPlayEnabled;
@property BOOL canSkipTracks;
@property(getter=isFeatured) BOOL featured;
@property(getter=isGatewayVideoAdEnabled) BOOL gatewayVideoAdEnabled;
@property(getter=isSponsored) BOOL sponsored;
@property NSData * adData;
@property unsigned int impressionThreshold;
@property(getter=isPremiumPlacement) BOOL premiumPlacement;
@property(getter=isPreview,readonly) BOOL preview;
@property(retain) NSURL * streamURL;
@property(retain) NSURL * streamCertificateURL;
@property(retain) NSURL * streamKeyURL;
@property(getter=isSharingEnabled) BOOL sharingEnabled;
@property(getter=isShared) BOOL shared;
@property(getter=isSubscribed) BOOL subscribed;
@property int subscriberCount;
@property(copy) NSString * shareToken;
@property(copy) NSDictionary * debugDictionary;
@property(readonly) NSDictionary * feedbackDictionaryRepresentation;
@property(copy) NSSet * additionalReferencedTrackIDs;
@property(readonly) NSDictionary * dictionaryRepresentation;
@property(readonly) NSManagedObject * managedObject;
@property(readonly) NSManagedObjectContext * context;


- (void)setCanSkipTracks:(BOOL)arg1;
- (void)removeAllTracksForPlayback;
- (void)removeTrackForPlayback:(id)arg1;
- (void)addTracksForPlayback:(id)arg1 withExpirationDate:(id)arg2;
- (id)initWithManagedObject:(id)arg1 context:(id)arg2;
- (id)managedObject;
- (void)_radioModelWasDeletedNotification:(id)arg1;
- (BOOL)virtualPlayEnabled;
- (BOOL)tracksForPlaybackNeedRefresh;
- (id)tracksForPlayback;
- (int)subscriberCount;
- (id)streamKeyURL;
- (id)streamCertificateURL;
- (id)streamURL;
- (id)skipTimestamps;
- (double)skipInterval;
- (int)skipFrequency;
- (BOOL)skipEnabled;
- (id)shareToken;
- (void)setVirtualPlayEnabled:(BOOL)arg1;
- (void)setTracksForPlaybackNeedRefresh:(BOOL)arg1;
- (void)setSubscriberCount:(int)arg1;
- (void)setSubscribed:(BOOL)arg1;
- (void)setStreamKeyURL:(id)arg1;
- (void)setStreamCertificateURL:(id)arg1;
- (void)setStreamURL:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setStationDescription:(id)arg1;
- (void)setSponsored:(BOOL)arg1;
- (void)setSongMixType:(int)arg1;
- (void)setSkipTimestamps:(id)arg1;
- (void)setSkipInterval:(double)arg1;
- (void)setSkipFrequency:(int)arg1;
- (void)setSkipEnabled:(BOOL)arg1;
- (void)setShareToken:(id)arg1;
- (void)setSharingEnabled:(BOOL)arg1;
- (void)setShared:(BOOL)arg1;
- (void)setSeedTracks:(id)arg1;
- (void)setPremiumPlacement:(BOOL)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setLikesEnabled:(BOOL)arg1;
- (void)setImpressionThreshold:(unsigned int)arg1;
- (void)setGatewayVideoAdEnabled:(BOOL)arg1;
- (void)setFeatured:(BOOL)arg1;
- (void)setEditableFields:(id)arg1;
- (void)setEditEnabled:(BOOL)arg1;
- (void)setDebugDictionary:(id)arg1;
- (void)setCoreSeedName:(id)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setAdData:(id)arg1;
- (void)setAdditionalReferencedTrackIDs:(id)arg1;
- (void)setAdamID:(long long)arg1;
- (BOOL)likesEnabled;
- (BOOL)isSharingEnabled;
- (BOOL)isShared;
- (BOOL)isPreview;
- (BOOL)isPremiumPlacement;
- (BOOL)isGatewayVideoAdEnabled;
- (unsigned int)impressionThreshold;
- (id)feedbackDictionaryRepresentation;
- (BOOL)editEnabled;
- (id)editableFields;
- (id)coreSeedName;
- (id)artworkURL;
- (id)additionalReferencedTrackIDs;
- (id)adData;
- (id)seedTracks;
- (int)songMixType;
- (id)stationDescription;
- (id)stationHash;
- (BOOL)isSponsored;
- (BOOL)isFeatured;
- (long long)stationID;
- (id)debugDictionary;
- (BOOL)canSkipTracks;
- (int)stationType;
- (long long)persistentID;
- (long long)adamID;
- (int)sortOrder;
- (BOOL)isSubscribed;
- (void)setSortOrder:(int)arg1;
- (id)context;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (void)dealloc;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setName:(id)arg1;

@end