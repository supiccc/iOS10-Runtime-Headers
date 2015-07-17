/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleEvent : NSObject {
    id _data;
    id _data2;
    id _data3;
    BOOL _shouldDisplay;
    int _type;
}

@property (nonatomic) BOOL shouldDisplay;

+ (id)eventWithType:(int)arg1 data:(id)arg2;
+ (id)eventWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;

- (id)data;
- (id)data2;
- (id)data3;
- (void)dealloc;
- (id)description;
- (id)initWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;
- (void)setShouldDisplay:(BOOL)arg1;
- (BOOL)shouldDisplay;
- (int)type;

@end
