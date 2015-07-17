/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioRoute : NSObject {
    NSDictionary *_route;
}

@property (getter=isAirTunes, nonatomic, readonly) BOOL airTunes;
@property (getter=isBluetooth, nonatomic, readonly) BOOL bluetooth;
@property (nonatomic, readonly) int bluetoothEndpointType;
@property (getter=isCarAudio, nonatomic, readonly) BOOL carAudio;
@property (getter=isReceiver, nonatomic, readonly) BOOL receiver;
@property (nonatomic, retain) NSDictionary *route;
@property (getter=isSpeaker, nonatomic, readonly) BOOL speaker;
@property (getter=isWirelessHeadset, nonatomic, readonly) BOOL wirelessHeadset;

- (BOOL)_routeNameEqualTo:(id)arg1;
- (int)bluetoothEndpointType;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isAirTunes;
- (BOOL)isBluetooth;
- (BOOL)isCarAudio;
- (BOOL)isReceiver;
- (BOOL)isSpeaker;
- (BOOL)isWirelessHeadset;
- (id)route;
- (void)setRoute:(id)arg1;

@end
