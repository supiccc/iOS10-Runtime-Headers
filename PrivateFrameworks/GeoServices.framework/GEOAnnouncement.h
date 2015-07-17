/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAnnouncement : PBCodable <NSCopying> {
    unsigned int _announcementID;
    NSString *_buttonOneAppURI;
    NSString *_buttonOneMessage;
    NSString *_buttonTwoAppURI;
    NSString *_buttonTwoMessage;
    unsigned int _displayDestinations;
    GEOPDFlyover *_flyoverInfo;
    struct { 
        unsigned int announcementID : 1; 
        unsigned int displayDestinations : 1; 
        unsigned int releasePhase : 1; 
    } _has;
    GEOMapRegion *_mapRegion;
    int _releasePhase;
    NSString *_title;
    NSString *_userMessage;
}

@property (nonatomic) unsigned int announcementID;
@property (nonatomic, retain) NSString *buttonOneAppURI;
@property (nonatomic, retain) NSString *buttonOneMessage;
@property (nonatomic, retain) NSString *buttonTwoAppURI;
@property (nonatomic, retain) NSString *buttonTwoMessage;
@property (nonatomic) unsigned int displayDestinations;
@property (nonatomic, retain) GEOPDFlyover *flyoverInfo;
@property (nonatomic) BOOL hasAnnouncementID;
@property (nonatomic, readonly) BOOL hasButtonOneAppURI;
@property (nonatomic, readonly) BOOL hasButtonOneMessage;
@property (nonatomic, readonly) BOOL hasButtonTwoAppURI;
@property (nonatomic, readonly) BOOL hasButtonTwoMessage;
@property (nonatomic) BOOL hasDisplayDestinations;
@property (nonatomic, readonly) BOOL hasFlyoverInfo;
@property (nonatomic, readonly) BOOL hasMapRegion;
@property (nonatomic) BOOL hasReleasePhase;
@property (nonatomic, readonly) BOOL hasTitle;
@property (nonatomic, readonly) BOOL hasUserMessage;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic) int releasePhase;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *userMessage;

- (unsigned int)announcementID;
- (id)buttonOneAppURI;
- (id)buttonOneMessage;
- (id)buttonTwoAppURI;
- (id)buttonTwoMessage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)displayDestinations;
- (id)flyoverInfo;
- (BOOL)hasAnnouncementID;
- (BOOL)hasButtonOneAppURI;
- (BOOL)hasButtonOneMessage;
- (BOOL)hasButtonTwoAppURI;
- (BOOL)hasButtonTwoMessage;
- (BOOL)hasDisplayDestinations;
- (BOOL)hasFlyoverInfo;
- (BOOL)hasMapRegion;
- (BOOL)hasReleasePhase;
- (BOOL)hasTitle;
- (BOOL)hasUserMessage;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)releasePhase;
- (void)setAnnouncementID:(unsigned int)arg1;
- (void)setButtonOneAppURI:(id)arg1;
- (void)setButtonOneMessage:(id)arg1;
- (void)setButtonTwoAppURI:(id)arg1;
- (void)setButtonTwoMessage:(id)arg1;
- (void)setDisplayDestinations:(unsigned int)arg1;
- (void)setFlyoverInfo:(id)arg1;
- (void)setHasAnnouncementID:(BOOL)arg1;
- (void)setHasDisplayDestinations:(BOOL)arg1;
- (void)setHasReleasePhase:(BOOL)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setReleasePhase:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserMessage:(id)arg1;
- (id)title;
- (id)userMessage;
- (void)writeTo:(id)arg1;

@end
