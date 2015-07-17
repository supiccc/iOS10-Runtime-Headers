/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRFieldCKInfo : PBCodable <NSCopying, PQLValuable> {
    NSString *_etag;
    struct { 
        unsigned int knownToServer : 1; 
        unsigned int wasCached : 1; 
    } _has;
    BOOL _knownToServer;
    BOOL _wasCached;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) BOOL hasEtag;
@property (nonatomic) BOOL hasKnownToServer;
@property (nonatomic) BOOL hasWasCached;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL knownToServer;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wasCached;

+ (id)newFromSqliteValue:(struct Mem { }*)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (BOOL)hasEtag;
- (BOOL)hasKnownToServer;
- (BOOL)hasWasCached;
- (unsigned int)hash;
- (id)initWithRecord:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)knownToServer;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCKInfoFieldsInRecord:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setHasKnownToServer:(BOOL)arg1;
- (void)setHasWasCached:(BOOL)arg1;
- (void)setKnownToServer:(BOOL)arg1;
- (void)setWasCached:(BOOL)arg1;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (BOOL)wasCached;
- (void)writeTo:(id)arg1;

@end
