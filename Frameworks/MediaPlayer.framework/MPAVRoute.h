/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoute : NSObject {
    NSDictionary *_avRouteDescription;
    int _displayRouteType;
    int _pickableRouteType;
    BOOL _picked;
    BOOL _requiresPassword;
    NSString *_routeName;
    int _routeSubtype;
    int _routeType;
    NSString *_routeUID;
    MPAVRoute *_wirelessDisplayRoute;
}

@property (nonatomic, readonly) BOOL displayIsPicked;
@property (nonatomic, readonly) int displayRouteType;
@property (nonatomic, readonly) int passwordType;
@property (nonatomic, readonly) int pickableRouteType;
@property (getter=isPicked, nonatomic, readonly) BOOL picked;
@property (nonatomic, readonly) int rc_audioRouteType;
@property (nonatomic, readonly) BOOL rc_shouldExpectFaceContact;
@property (nonatomic, readonly) BOOL requiresPassword;
@property (nonatomic, readonly) NSString *routeName;
@property (nonatomic, readonly) int routeSubtype;
@property (nonatomic, readonly) int routeType;
@property (nonatomic, readonly) NSString *routeUID;
@property (nonatomic, readonly) MPAVRoute *wirelessDisplayRoute;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (id)_initWithAVRouteDescription:(id)arg1;
- (void)_routingControllerPickedRouteNotification:(id)arg1;
- (id)avRouteDescription;
- (void)dealloc;
- (id)description;
- (BOOL)displayIsPicked;
- (int)displayRouteType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPicked;
- (int)passwordType;
- (int)pickableRouteType;
- (BOOL)requiresPassword;
- (id)routeName;
- (int)routeSubtype;
- (int)routeType;
- (id)routeUID;
- (void)setAVRouteDescription:(id)arg1;
- (void)setDisplayRouteType:(int)arg1;
- (void)setPicked:(BOOL)arg1;
- (void)setRouteName:(id)arg1;
- (void)setWirelessDisplayRoute:(id)arg1;
- (id)wirelessDisplayRoute;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (int)rc_audioRouteType;
- (BOOL)rc_shouldExpectFaceContact;

@end
