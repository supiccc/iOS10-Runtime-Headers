/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPShieldIndex : PBCodable <NSCopying> {
    NSMutableArray *_entries;
    NSMutableArray *_textEntries;
}

@property (nonatomic, retain) NSMutableArray *entries;
@property (nonatomic, retain) NSMutableArray *textEntries;

- (void)addEntries:(id)arg1;
- (void)addTextEntries:(id)arg1;
- (id)artworkIdentifierForShieldType:(long long)arg1 textSpecificIdentifiers:(id*)arg2;
- (void)clearEntries;
- (void)clearTextEntries;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultArtworkIdentifierForFeatureType:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entries;
- (id)entriesAtIndex:(unsigned int)arg1;
- (unsigned int)entriesCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEntries:(id)arg1;
- (void)setTextEntries:(id)arg1;
- (id)textEntries;
- (id)textEntriesAtIndex:(unsigned int)arg1;
- (unsigned int)textEntriesCount;
- (void)writeTo:(id)arg1;

@end
