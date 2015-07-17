/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIMessageDeduplicated : PBCodable <NSCopying> {
    unsigned int _deduplicationInterval;
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int deduplicationInterval : 1; 
    } _has;
    unsigned long long _timestamp;
}

@property (nonatomic) unsigned int deduplicationInterval;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) BOOL hasDeduplicationInterval;
@property (nonatomic, readonly) BOOL hasGuid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)deduplicationInterval;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (BOOL)hasDeduplicationInterval;
- (BOOL)hasGuid;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDeduplicationInterval:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasDeduplicationInterval:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
