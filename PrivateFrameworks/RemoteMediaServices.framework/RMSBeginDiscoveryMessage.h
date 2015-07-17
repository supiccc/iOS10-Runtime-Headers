/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSBeginDiscoveryMessage : PBCodable <NSCopying> {
    int _discoveryTypes;
    struct { 
        unsigned int discoveryTypes : 1; 
    } _has;
}

@property (nonatomic) int discoveryTypes;
@property (nonatomic) BOOL hasDiscoveryTypes;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)discoveryTypes;
- (BOOL)hasDiscoveryTypes;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDiscoveryTypes:(int)arg1;
- (void)setHasDiscoveryTypes:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
