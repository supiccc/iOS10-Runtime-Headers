/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDStyleAttributes : PBCodable <NSCopying> {
    NSMutableArray *_attributes;
    unsigned long long _customIconId;
    struct { 
        unsigned int customIconId : 1; 
    } _has;
}

@property (nonatomic, retain) NSMutableArray *attributes;
@property (nonatomic) unsigned long long customIconId;
@property (nonatomic) BOOL hasCustomIconId;

- (void)addAttribute:(id)arg1;
- (id)attributeAtIndex:(unsigned int)arg1;
- (id)attributes;
- (unsigned int)attributesCount;
- (void)clearAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)customIconId;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCustomIconId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setCustomIconId:(unsigned long long)arg1;
- (void)setHasCustomIconId:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
