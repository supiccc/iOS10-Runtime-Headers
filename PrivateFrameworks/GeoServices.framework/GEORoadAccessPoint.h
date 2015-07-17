/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoadAccessPoint : PBCodable <NSCopying> {
    int _drivingDirection;
    struct { 
        unsigned int drivingDirection : 1; 
        unsigned int walkingDirection : 1; 
        unsigned int isApproximate : 1; 
    } _has;
    BOOL _isApproximate;
    GEOLatLng *_location;
    int _walkingDirection;
}

@property (nonatomic) int drivingDirection;
@property (nonatomic) BOOL hasDrivingDirection;
@property (nonatomic) BOOL hasIsApproximate;
@property (nonatomic, readonly) BOOL hasLocation;
@property (nonatomic) BOOL hasWalkingDirection;
@property (nonatomic) BOOL isApproximate;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic) int walkingDirection;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)drivingDirection;
- (BOOL)hasDrivingDirection;
- (BOOL)hasIsApproximate;
- (BOOL)hasLocation;
- (BOOL)hasWalkingDirection;
- (unsigned int)hash;
- (BOOL)isApproximate;
- (BOOL)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDrivingDirection:(int)arg1;
- (void)setHasDrivingDirection:(BOOL)arg1;
- (void)setHasIsApproximate:(BOOL)arg1;
- (void)setHasWalkingDirection:(BOOL)arg1;
- (void)setIsApproximate:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setWalkingDirection:(int)arg1;
- (int)walkingDirection;
- (void)writeTo:(id)arg1;

@end
