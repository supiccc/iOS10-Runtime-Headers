/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBRestoreInfo : NSObject <NSCoding, NSCopying> {
    NSString *_backupBuildVersion;
    NSDate *_date;
    NSString *_deviceBuildVersion;
    BOOL _wasCloudRestore;
}

@property (readonly) NSString *backupBuildVersion;
@property (readonly) NSDate *date;
@property (readonly) NSString *deviceBuildVersion;
@property (readonly) BOOL wasCloudRestore;

- (id)backupBuildVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)deviceBuildVersion;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)setBackupBuildVersion:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDeviceBuildVersion:(id)arg1;
- (void)setWasCloudRestore:(BOOL)arg1;
- (BOOL)wasCloudRestore;

@end
