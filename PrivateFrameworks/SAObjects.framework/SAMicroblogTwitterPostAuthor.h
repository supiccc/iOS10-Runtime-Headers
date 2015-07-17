/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogTwitterPostAuthor : SADomainObject

@property (nonatomic) int followersCount;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSURL *profileImageUrl;
@property (nonatomic, copy) NSString *screenName;
@property (nonatomic, copy) NSNumber *userId;
@property (nonatomic) BOOL verified;

+ (id)twitterPostAuthor;
+ (id)twitterPostAuthorWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (int)followersCount;
- (id)fullName;
- (id)groupIdentifier;
- (id)profileImageUrl;
- (id)screenName;
- (void)setFollowersCount:(int)arg1;
- (void)setFullName:(id)arg1;
- (void)setProfileImageUrl:(id)arg1;
- (void)setScreenName:(id)arg1;
- (void)setUserId:(id)arg1;
- (void)setVerified:(BOOL)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)userId;
- (BOOL)verified;

@end
