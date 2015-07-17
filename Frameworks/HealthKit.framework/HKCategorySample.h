/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCategorySample : HKSample <HDCoding> {
    int _value;
}

@property (readonly) HKCategoryType *categoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly) int value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_categorySampleWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(id)arg4 categoryType:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 value:(int)arg8;
+ (BOOL)_isConcreteObjectClass;
+ (id)categorySampleWithType:(id)arg1 value:(int)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)categorySampleWithType:(id)arg1 value:(int)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;
+ (BOOL)supportsSecureCoding;

- (void)_setValue:(int)arg1;
- (id)_validateConfiguration;
- (id)_valueDescription;
- (id)categoryType;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (int)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (BOOL)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

@end
