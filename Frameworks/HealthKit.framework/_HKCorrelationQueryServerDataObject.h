/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCorrelationQueryServerDataObject : _HKQueryServerDataObject {
    NSDictionary *_filterDictionary;
    int _version;
}

@property (nonatomic, retain) NSDictionary *filterDictionary;
@property (nonatomic) int version;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)filterDictionary;
- (id)initWithCoder:(id)arg1;
- (void)setFilterDictionary:(id)arg1;
- (void)setVersion:(int)arg1;
- (int)version;

@end
