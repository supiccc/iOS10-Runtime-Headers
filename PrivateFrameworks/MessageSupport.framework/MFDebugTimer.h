/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MessageSupport.framework/MessageSupport
 */

@interface MFDebugTimer : NSObject {
    double _timer_base;
    unsigned long long _timer_end;
    double _timer_nsecs;
    unsigned long long _timer_start;
    unsigned long long _timer_ticks;
    NSString *name;
}

@property (retain) NSString *name;

+ (id)sharedTimer;
+ (id)timerWithName:(id)arg1;

- (id)initWithName:(id)arg1;
- (unsigned long long)measure;
- (unsigned long long)measureWithLogText:(id)arg1;
- (id)name;
- (id)rebase;
- (void)setName:(id)arg1;

@end
