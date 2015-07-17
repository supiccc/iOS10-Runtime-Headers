/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying> {
    int _addressType;
    struct { 
        unsigned int addressType : 1; 
        unsigned int isMe : 1; 
    } _has;
    BOOL _isMe;
    NSString *_name;
    NSString *_spokenName;
}

@property (nonatomic) int addressType;
@property (nonatomic) BOOL hasAddressType;
@property (nonatomic) BOOL hasIsMe;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic, readonly) BOOL hasSpokenName;
@property (nonatomic) BOOL isMe;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *spokenName;

- (int)addressType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAddressType;
- (BOOL)hasIsMe;
- (BOOL)hasName;
- (BOOL)hasSpokenName;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMe;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setAddressType:(int)arg1;
- (void)setHasAddressType:(BOOL)arg1;
- (void)setHasIsMe:(BOOL)arg1;
- (void)setIsMe:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setSpokenName:(id)arg1;
- (id)spokenName;
- (void)writeTo:(id)arg1;

@end
