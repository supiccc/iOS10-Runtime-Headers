/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOdometerProxy : NSObject {
    double _averageSpeed;
    int _mode;
    CMOdometer *_odometer;
    double _startDate;
    double _totalDistance;
    NSObject<OS_dispatch_queue> *fCallbackQueue;
    int fGpsAvailability;
    id /* block */ fHandler;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    struct CLConnectionClient { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; id x2; id x3; struct CLConnection {} x4; struct CLNameValuePair { int (**x_5_1_1)(); struct __CFDictionary {} *x_5_1_2; } x5; struct CLNameValuePair { int (**x_6_1_1)(); struct __CFDictionary {} *x_6_1_2; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_7_1_1; } x7; id /* block */ x8; id /* block */ x9; id x10; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x11; id /* block */ x12; } *fLocationdConnection;
}

@property double averageSpeed;
@property int mode;
@property (nonatomic) CMOdometer *odometer;
@property double startDate;
@property double totalDistance;

- (void)_startDaemonConnection;
- (void)_startOdometerUpdatesForActivity:(int)arg1 withHandler:(id /* block */)arg2;
- (void)_stopOdometerUpdates;
- (void)_teardown;
- (double)averageSpeed;
- (void)dealloc;
- (id)initWithOdometer:(id)arg1;
- (int)mode;
- (id)odometer;
- (void)setAverageSpeed:(double)arg1;
- (void)setMode:(int)arg1;
- (void)setOdometer:(id)arg1;
- (void)setStartDate:(double)arg1;
- (void)setTotalDistance:(double)arg1;
- (double)startDate;
- (double)totalDistance;

@end
