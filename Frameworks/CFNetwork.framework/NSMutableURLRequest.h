/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSMutableURLRequest : NSURLRequest

@property (copy) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property (copy) NSString *HTTPMethod;
@property BOOL HTTPShouldHandleCookies;
@property BOOL HTTPShouldUsePipelining;
@property (copy) NSURL *URL;
@property (copy) NSDictionary *allHTTPHeaderFields;
@property BOOL allowsCellularAccess;
@property unsigned int cachePolicy;
@property (copy) NSURL *mainDocumentURL;
@property unsigned int networkServiceType;
@property double timeoutInterval;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

- (void)_setTimeWindowDelay:(double)arg1;
- (void)_setTimeWindowDuration:(double)arg1;
- (void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)requestPriority;
- (void)setAllHTTPHeaderFields:(id)arg1;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setBoundInterfaceIdentifier:(id)arg1;
- (void)setCachePolicy:(unsigned int)arg1;
- (void)setContentDispositionEncodingFallbackArray:(id)arg1;
- (void)setExpectedWorkload:(unsigned long long)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)setHTTPBodyStream:(id)arg1;
- (void)setHTTPContentType:(id)arg1;
- (void)setHTTPExtraCookies:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setHTTPReferrer:(id)arg1;
- (void)setHTTPShouldHandleCookies:(BOOL)arg1;
- (void)setHTTPShouldUsePipelining:(BOOL)arg1;
- (void)setHTTPUserAgent:(id)arg1;
- (void)setMainDocumentURL:(id)arg1;
- (void)setNetworkServiceType:(unsigned int)arg1;
- (void)setRequestPriority:(unsigned int)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setURL:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)arg1 preferUsingPassword:(BOOL)arg2;
- (void)aa_addDeviceIDHeader;
- (void)aa_addDeviceInternalDevHeaderIfEnabled;
- (void)aa_addDeviceProvisioningInfoHeadersWithAccount:(id)arg1;
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1;
- (BOOL)aa_addDeviceProvisioningInfoHeadersWithDSIDFromReponse:(id)arg1;
- (BOOL)aa_addGrandSlamAuthorizationHeaderWithAccount:(id)arg1 grandslamToken:(id)arg2;
- (void)aa_addLocationSharingAllowedHeader;
- (void)aa_addLoggedInAppleIDHeaderWithAccount:(id)arg1;
- (void)aa_addiTunesHeadersWithAccount:(id)arg1;
- (void)aa_setBodyWithParameters:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CaptiveNetwork.framework/CaptiveNetwork

- (void)bindToCommand:(struct __CNPluginCommand { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFDictionary {} *x2; unsigned int x3; }*)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3;
+ (int)hashForPlayerID:(id)arg1;

- (void)setBuildVersion:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setGameDescriptor:(id)arg1;
- (void)setInternal:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;
- (void)setProcessName:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setSAPSignature:(id)arg1;
- (void)setSAPversion:(id)arg1;
- (void)setStoreMode:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (void)_web_setHTTPContentType:(id)arg1;
- (void)_web_setHTTPReferrer:(id)arg1;
- (void)_web_setHTTPUserAgent:(id)arg1;

@end
