/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPMapLocation : PBCodable <NSCopying> {
    GEOLatLng *_coordinate;
    struct { 
        unsigned int zoomLevel : 1; 
    } _has;
    NSData *_image;
    GEOPDViewportInfo *_viewportInfo;
    float _zoomLevel;
}

@property (nonatomic, retain) GEOLatLng *coordinate;
@property (nonatomic, readonly) BOOL hasCoordinate;
@property (nonatomic, readonly) BOOL hasImage;
@property (nonatomic, readonly) BOOL hasViewportInfo;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic, retain) NSData *image;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) float zoomLevel;

- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCoordinate;
- (BOOL)hasImage;
- (BOOL)hasViewportInfo;
- (BOOL)hasZoomLevel;
- (unsigned int)hash;
- (id)image;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setHasZoomLevel:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (void)setZoomLevel:(float)arg1;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;
- (float)zoomLevel;

@end
