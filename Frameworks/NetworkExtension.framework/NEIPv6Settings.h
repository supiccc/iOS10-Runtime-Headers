/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIPv6Settings : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSString *_address;
    int _configMethod;
    int _prefixLength;
    NSString *_router;
}

@property (copy) NSString *address;
@property int configMethod;
@property int prefixLength;
@property (copy) NSString *router;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (int)configMethod;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)prefixLength;
- (id)router;
- (void)setAddress:(id)arg1;
- (void)setConfigMethod:(int)arg1;
- (void)setPrefixLength:(int)arg1;
- (void)setRouter:(id)arg1;

@end
