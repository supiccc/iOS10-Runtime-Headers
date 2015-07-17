/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRAuthorizedDeviceManager : NSObject {
    NSMutableDictionary *_authorizationList;
}

@property (nonatomic, readonly) NSArray *deviceIdentifiers;

+ (id)_dataForDeviceIdentifier:(id)arg1;
+ (id)_deviceIdentifierForData:(id)arg1;
+ (id)currentDeviceIdentifier;
+ (id)sharedDeviceManager;

- (void).cxx_destruct;
- (id)_deviceAuthorizationDirectory;
- (id)_deviceAuthorizationFilePath;
- (BOOL)addDeviceWithIdentifier:(id)arg1 forDeviceName:(id)arg2 error:(id*)arg3;
- (id)deviceIdentifiers;
- (id)deviceNameForIdentifier:(id)arg1;
- (id)init;
- (BOOL)isAuthorizedDeviceWithIdentifier:(id)arg1;
- (BOOL)removeDeviceWithIdentifier:(id)arg1 error:(id*)arg2;

@end
