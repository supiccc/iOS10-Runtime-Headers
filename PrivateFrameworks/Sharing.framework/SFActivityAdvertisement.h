/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFActivityAdvertisement : NSObject <NSSecureCoding> {
    NSData *_activityPayload;
    NSData *_advertisementPayload;
    SFPeerDevice *_device;
    NSDictionary *_options;
}

@property (copy) NSData *activityPayload;
@property (readonly, copy) NSData *advertisementPayload;
@property (readonly, retain) SFPeerDevice *device;
@property (readonly, copy) NSString *deviceIdentifier;
@property (readonly, copy) NSString *deviceModelIdentifier;
@property (readonly, copy) NSString *deviceName;
@property (readonly, copy) NSDictionary *options;

+ (BOOL)supportsSecureCoding;

- (id)activityPayload;
- (id)advertisementPayload;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)deviceIdentifier;
- (id)deviceModelIdentifier;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdvertisementPayload:(id)arg1 options:(id)arg2 device:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)options;
- (void)setActivityPayload:(id)arg1;

@end
