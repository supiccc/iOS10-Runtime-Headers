/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoInitialSyncStateUpdate : PBCodable <NSCopying> {
    struct { 
        unsigned int progress : 1; 
        unsigned int state : 1; 
    } _has;
    double _progress;
    unsigned int _state;
}

@property (nonatomic) BOOL hasProgress;
@property (nonatomic) BOOL hasState;
@property (nonatomic) double progress;
@property (nonatomic) unsigned int state;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasProgress;
- (BOOL)hasState;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)progress;
- (BOOL)readFrom:(id)arg1;
- (void)setHasProgress:(BOOL)arg1;
- (void)setHasState:(BOOL)arg1;
- (void)setProgress:(double)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (void)writeTo:(id)arg1;

@end
