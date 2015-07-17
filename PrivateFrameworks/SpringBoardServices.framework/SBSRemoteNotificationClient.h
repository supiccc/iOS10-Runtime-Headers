/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteNotificationClient : NSObject

+ (unsigned int)_remoteNotificationServerPort;
+ (id)getNotificationUserInfoForToken:(int)arg1;
+ (id)getPendingNotificationUserInfo;
+ (void)getSupportedBundleIdentifiers:(id*)arg1 enabledBundleIdentifiers:(id*)arg2;
+ (BOOL)isRegisteredForRemoteNotifications;
+ (unsigned char)legacyRegisteredRemoteNotificationTypes;
+ (void)registerForRemoteNotifications;
+ (void)registerForRemoteNotificationsWithLegacyTypes:(unsigned char)arg1;
+ (void)setAllowed:(BOOL)arg1 forBundleIdentifier:(id)arg2;
+ (void)unregisterForRemoteNotifications;

@end
