/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLBConnectionReport : PBCodable <NSCopying> {
    long long _bytesReceived;
    long long _bytesSent;
    long long _clientConnectionCount;
    int _connectionAttemptCount;
    int _connectionCellularFallbackCount;
    long long _connectionDuration;
    int _connectionFailureCount;
    struct { 
        long long *list; 
        unsigned int count; 
        unsigned int size; 
    } _connectionReadyTimes;
    int _connectionSuccessMptcpCount;
    int _connectionSuccessTcpCount;
    struct { 
        unsigned int bytesReceived : 1; 
        unsigned int bytesSent : 1; 
        unsigned int clientConnectionCount : 1; 
        unsigned int connectionDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int connectionAttemptCount : 1; 
        unsigned int connectionCellularFallbackCount : 1; 
        unsigned int connectionFailureCount : 1; 
        unsigned int connectionSuccessMptcpCount : 1; 
        unsigned int connectionSuccessTcpCount : 1; 
        unsigned int resumptionFailureCount : 1; 
        unsigned int resumptionSuccessCount : 1; 
        unsigned int suspensionCount : 1; 
        unsigned int upgradeSuccessAndNotNeededCount : 1; 
        unsigned int upgradeSuccessAndPrimaryCount : 1; 
    } _has;
    int _resumptionFailureCount;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _resumptionFailureErrors;
    struct { 
        long long *list; 
        unsigned int count; 
        unsigned int size; 
    } _resumptionFailureTimes;
    int _resumptionSuccessCount;
    struct { 
        long long *list; 
        unsigned int count; 
        unsigned int size; 
    } _resumptionSuccessTimes;
    int _suspensionCount;
    unsigned long long _timestamp;
    int _upgradeSuccessAndNotNeededCount;
    int _upgradeSuccessAndPrimaryCount;
}

@property (nonatomic) long long bytesReceived;
@property (nonatomic) long long bytesSent;
@property (nonatomic) long long clientConnectionCount;
@property (nonatomic) int connectionAttemptCount;
@property (nonatomic) int connectionCellularFallbackCount;
@property (nonatomic) long long connectionDuration;
@property (nonatomic) int connectionFailureCount;
@property (nonatomic, readonly) long long*connectionReadyTimes;
@property (nonatomic, readonly) unsigned int connectionReadyTimesCount;
@property (nonatomic) int connectionSuccessMptcpCount;
@property (nonatomic) int connectionSuccessTcpCount;
@property (nonatomic) BOOL hasBytesReceived;
@property (nonatomic) BOOL hasBytesSent;
@property (nonatomic) BOOL hasClientConnectionCount;
@property (nonatomic) BOOL hasConnectionAttemptCount;
@property (nonatomic) BOOL hasConnectionCellularFallbackCount;
@property (nonatomic) BOOL hasConnectionDuration;
@property (nonatomic) BOOL hasConnectionFailureCount;
@property (nonatomic) BOOL hasConnectionSuccessMptcpCount;
@property (nonatomic) BOOL hasConnectionSuccessTcpCount;
@property (nonatomic) BOOL hasResumptionFailureCount;
@property (nonatomic) BOOL hasResumptionSuccessCount;
@property (nonatomic) BOOL hasSuspensionCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUpgradeSuccessAndNotNeededCount;
@property (nonatomic) BOOL hasUpgradeSuccessAndPrimaryCount;
@property (nonatomic) int resumptionFailureCount;
@property (nonatomic, readonly) int*resumptionFailureErrors;
@property (nonatomic, readonly) unsigned int resumptionFailureErrorsCount;
@property (nonatomic, readonly) long long*resumptionFailureTimes;
@property (nonatomic, readonly) unsigned int resumptionFailureTimesCount;
@property (nonatomic) int resumptionSuccessCount;
@property (nonatomic, readonly) long long*resumptionSuccessTimes;
@property (nonatomic, readonly) unsigned int resumptionSuccessTimesCount;
@property (nonatomic) int suspensionCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int upgradeSuccessAndNotNeededCount;
@property (nonatomic) int upgradeSuccessAndPrimaryCount;

- (void)addConnectionReadyTimes:(long long)arg1;
- (void)addResumptionFailureErrors:(int)arg1;
- (void)addResumptionFailureTimes:(long long)arg1;
- (void)addResumptionSuccessTimes:(long long)arg1;
- (long long)bytesReceived;
- (long long)bytesSent;
- (void)clearConnectionReadyTimes;
- (void)clearResumptionFailureErrors;
- (void)clearResumptionFailureTimes;
- (void)clearResumptionSuccessTimes;
- (long long)clientConnectionCount;
- (int)connectionAttemptCount;
- (int)connectionCellularFallbackCount;
- (long long)connectionDuration;
- (int)connectionFailureCount;
- (long long*)connectionReadyTimes;
- (long long)connectionReadyTimesAtIndex:(unsigned int)arg1;
- (unsigned int)connectionReadyTimesCount;
- (int)connectionSuccessMptcpCount;
- (int)connectionSuccessTcpCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBytesReceived;
- (BOOL)hasBytesSent;
- (BOOL)hasClientConnectionCount;
- (BOOL)hasConnectionAttemptCount;
- (BOOL)hasConnectionCellularFallbackCount;
- (BOOL)hasConnectionDuration;
- (BOOL)hasConnectionFailureCount;
- (BOOL)hasConnectionSuccessMptcpCount;
- (BOOL)hasConnectionSuccessTcpCount;
- (BOOL)hasResumptionFailureCount;
- (BOOL)hasResumptionSuccessCount;
- (BOOL)hasSuspensionCount;
- (BOOL)hasTimestamp;
- (BOOL)hasUpgradeSuccessAndNotNeededCount;
- (BOOL)hasUpgradeSuccessAndPrimaryCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)resumptionFailureCount;
- (int*)resumptionFailureErrors;
- (int)resumptionFailureErrorsAtIndex:(unsigned int)arg1;
- (unsigned int)resumptionFailureErrorsCount;
- (long long*)resumptionFailureTimes;
- (long long)resumptionFailureTimesAtIndex:(unsigned int)arg1;
- (unsigned int)resumptionFailureTimesCount;
- (int)resumptionSuccessCount;
- (long long*)resumptionSuccessTimes;
- (long long)resumptionSuccessTimesAtIndex:(unsigned int)arg1;
- (unsigned int)resumptionSuccessTimesCount;
- (void)setBytesReceived:(long long)arg1;
- (void)setBytesSent:(long long)arg1;
- (void)setClientConnectionCount:(long long)arg1;
- (void)setConnectionAttemptCount:(int)arg1;
- (void)setConnectionCellularFallbackCount:(int)arg1;
- (void)setConnectionDuration:(long long)arg1;
- (void)setConnectionFailureCount:(int)arg1;
- (void)setConnectionReadyTimes:(long long*)arg1 count:(unsigned int)arg2;
- (void)setConnectionSuccessMptcpCount:(int)arg1;
- (void)setConnectionSuccessTcpCount:(int)arg1;
- (void)setHasBytesReceived:(BOOL)arg1;
- (void)setHasBytesSent:(BOOL)arg1;
- (void)setHasClientConnectionCount:(BOOL)arg1;
- (void)setHasConnectionAttemptCount:(BOOL)arg1;
- (void)setHasConnectionCellularFallbackCount:(BOOL)arg1;
- (void)setHasConnectionDuration:(BOOL)arg1;
- (void)setHasConnectionFailureCount:(BOOL)arg1;
- (void)setHasConnectionSuccessMptcpCount:(BOOL)arg1;
- (void)setHasConnectionSuccessTcpCount:(BOOL)arg1;
- (void)setHasResumptionFailureCount:(BOOL)arg1;
- (void)setHasResumptionSuccessCount:(BOOL)arg1;
- (void)setHasSuspensionCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasUpgradeSuccessAndNotNeededCount:(BOOL)arg1;
- (void)setHasUpgradeSuccessAndPrimaryCount:(BOOL)arg1;
- (void)setResumptionFailureCount:(int)arg1;
- (void)setResumptionFailureErrors:(int*)arg1 count:(unsigned int)arg2;
- (void)setResumptionFailureTimes:(long long*)arg1 count:(unsigned int)arg2;
- (void)setResumptionSuccessCount:(int)arg1;
- (void)setResumptionSuccessTimes:(long long*)arg1 count:(unsigned int)arg2;
- (void)setSuspensionCount:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUpgradeSuccessAndNotNeededCount:(int)arg1;
- (void)setUpgradeSuccessAndPrimaryCount:(int)arg1;
- (int)suspensionCount;
- (unsigned long long)timestamp;
- (int)upgradeSuccessAndNotNeededCount;
- (int)upgradeSuccessAndPrimaryCount;
- (void)writeTo:(id)arg1;

@end
