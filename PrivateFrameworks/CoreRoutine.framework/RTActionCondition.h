/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTActionCondition : NSObject <NSSecureCoding> {
    NSDate *_date;
    NSString *_depiction;
    RTLocationOfInterest *_locationOfInterest;
    int _locationOfInterestState;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *depiction;
@property (nonatomic, readonly) RTLocationOfInterest *locationOfInterest;
@property (nonatomic, readonly) int locationOfInterestState;

+ (id)locationOfInterestStateToString:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (id)depiction;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLoi:(id)arg1 loiState:(int)arg2 date:(id)arg3 depiction:(id)arg4;
- (id)locationOfInterest;
- (int)locationOfInterestState;

@end
