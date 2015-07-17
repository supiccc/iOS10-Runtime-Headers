/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceContext : NSObject <NSSecureCoding> {
    NSArray *_certificates;
    PKPaymentWebServiceConfiguration *_configuration;
    NSDate *_configurationDate;
    int _consistencyCheckBackoffLevel;
    BOOL _devSigned;
    NSString *_deviceID;
    NSString *_lastUpdatedTag;
    BOOL _messageServiceDisabled;
    NSString *_primaryRegionIdentifier;
    NSString *_pushToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_regions;
    NSDate *_registrationDate;
    NSString *_secureElementID;
    BOOL _transactionServiceDisabled;
    NSMutableDictionary *_verificationRequestsByPassUniqueID;
    int _version;
}

@property (readonly) NSDictionary *TSMURLStringByPushTopic;
@property (copy) NSArray *certificates;
@property (retain) PKPaymentWebServiceConfiguration *configuration;
@property (copy) NSDate *configurationDate;
@property int consistencyCheckBackoffLevel;
@property BOOL devSigned;
@property (copy) NSString *deviceID;
@property (copy) NSString *lastUpdatedTag;
@property BOOL messageServiceDisabled;
@property (readonly) PKPaymentWebServiceRegion *primaryRegion;
@property (copy) NSString *primaryRegionIdentifier;
@property (copy) NSString *pushToken;
@property (retain) NSDictionary *regions;
@property (copy) NSDate *registrationDate;
@property (copy) NSString *secureElementID;
@property BOOL transactionServiceDisabled;
@property (retain) NSMutableDictionary *verificationRequestsByPassUniqueID;
@property int version;

+ (void)_migrateContext:(id)arg1;
+ (void)_migrateFrom0To1:(id)arg1;
+ (id)contextWithArchive:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)TSMPushTopics;
- (id)TSMURLStringByPushTopic;
- (void)addVerificationRequestRecord:(id)arg1 forUniqueID:(id)arg2;
- (void)archiveAtPath:(id)arg1;
- (id)certificates;
- (id)configuration;
- (id)configurationDate;
- (int)consistencyCheckBackoffLevel;
- (void)dealloc;
- (BOOL)devSigned;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastUpdatedTag;
- (BOOL)messageServiceDisabled;
- (id)primaryRegion;
- (id)primaryRegionIdentifier;
- (id)pushToken;
- (id)regionForIdentifier:(id)arg1;
- (id)regions;
- (id)registrationDate;
- (void)removeVerificationRequestRecordForUniqueID:(id)arg1;
- (id)secureElementID;
- (void)setCertificates:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationDate:(id)arg1;
- (void)setConsistencyCheckBackoffLevel:(int)arg1;
- (void)setDevSigned:(BOOL)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setLastUpdatedTag:(id)arg1;
- (void)setMessageServiceDisabled:(BOOL)arg1;
- (void)setPrimaryRegionIdentifier:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)setRegistrationDate:(id)arg1;
- (void)setSecureElementID:(id)arg1;
- (void)setTransactionServiceDisabled:(BOOL)arg1;
- (void)setVerificationRequestsByPassUniqueID:(id)arg1;
- (void)setVersion:(int)arg1;
- (BOOL)transactionServiceDisabled;
- (id)verificationRequestRecordForUniqueID:(id)arg1;
- (id)verificationRequestsByPassUniqueID;
- (int)version;

@end
