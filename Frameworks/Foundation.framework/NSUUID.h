/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUUID : NSObject <NSCopying, NSSecureCoding, PASerializable, PQLValuable>

@property (readonly, copy) NSString *UUIDString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)UUID;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)supportsSecureCoding;

- (id)UUIDString;
- (unsigned long)_cfTypeID;
- (struct __CFString { }*)_cfUUIDString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getUUIDBytes:(unsigned char)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDBytes:(unsigned char)arg1;
- (id)initWithUUIDString:(id)arg1;
- (BOOL)isEqual:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_UUIDWithData:(id)arg1;

- (id)hk_dataForUUIDBytes;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)description;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)newFromSqliteValue:(struct Mem { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

+ (id)newFromSqliteValue:(struct Mem { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

- (id)description;

// Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long)sizeInBytesForSerializedVersion;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (id)tsp_initWithMessage:(const struct UUID { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; unsigned long long x6; }*)arg1;
- (void)tsp_saveToMessage:(struct UUID { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; unsigned long long x6; }*)arg1;

@end
