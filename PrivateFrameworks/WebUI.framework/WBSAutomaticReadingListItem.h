/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSAutomaticReadingListItem : NSObject {
    UIImage *_fallbackProfileImage;
    BOOL _fetchingProfileImage;
    NSString *_originatorDisplayName;
    id _originatorID;
    UIImage *_originatorProfileImage;
    BOOL _repostedByAuthenticatedUser;
    NSString *_reposterDisplayName;
    NSString *_reposterScreenName;
    NSString *_socialSourceAccountIdentifier;
    NSDate *_sourceRecordCreationDate;
    id _sourceRecordID;
    NSString *_sourceRecordText;
    NSString *_uniqueIdentifier;
    NSString *_urlString;
}

@property (nonatomic, readonly) NSURL *biggerOriginatorProfileImageURL;
@property (nonatomic, readonly) NSString *continuousBannerDisplayString;
@property (nonatomic, readonly) NSString *continuousBannerTitle;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } displayURLRange;
@property (nonatomic, readonly) NSString *domainString;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } emphasizedTextRange;
@property (nonatomic) BOOL fetchingProfileImage;
@property (nonatomic, readonly, copy) NSString *originatorDisplayName;
@property (nonatomic, readonly, copy) id originatorID;
@property (nonatomic, retain) UIImage *originatorProfileImage;
@property (nonatomic, readonly) NSURL *originatorProfileImageURL;
@property (nonatomic, readonly) NSURL *originatorProfileURL;
@property (getter=isRepostedByAuthenticatedUser, nonatomic) BOOL repostedByAuthenticatedUser;
@property (nonatomic, readonly) NSString *reposterDisplayName;
@property (nonatomic, readonly) NSString *reposterScreenName;
@property (nonatomic, readonly) WBSAutomaticReadingListSocialSource *socialSource;
@property (nonatomic, readonly, copy) NSString *socialSourceAccountIdentifier;
@property (nonatomic, readonly, copy) NSDate *sourceRecordCreationDate;
@property (nonatomic, readonly, copy) id sourceRecordID;
@property (nonatomic, readonly, copy) NSString *sourceRecordText;
@property (nonatomic, readonly) NSURL *sourceRecordURL;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSString *urlString;

+ (id)keyPathsForValuesAffectingDomainString;

- (void).cxx_destruct;
- (void)_fetchOriginatorProfileImageForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_getFallbackImage;
- (id)bestOriginatorProfileImageForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)biggerOriginatorProfileImageURL;
- (id)continuousBannerDisplayString;
- (id)continuousBannerTitle;
- (id)description;
- (id)displayString;
- (struct _NSRange { unsigned int x1; unsigned int x2; })displayURLRange;
- (id)domainString;
- (struct _NSRange { unsigned int x1; unsigned int x2; })emphasizedTextRange;
- (BOOL)fetchingProfileImage;
- (unsigned int)hash;
- (id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2;
- (BOOL)isAcceptableOriginatorProfileImage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRepostedByAuthenticatedUser;
- (id)originatorDisplayName;
- (id)originatorID;
- (id)originatorProfileImage;
- (id)originatorProfileImageURL;
- (id)originatorProfileURL;
- (id)reposterDisplayName;
- (id)reposterScreenName;
- (void)setFetchingProfileImage:(BOOL)arg1;
- (void)setOriginatorProfileImage:(id)arg1;
- (void)setRepostedByAuthenticatedUser:(BOOL)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)socialSource;
- (id)socialSourceAccountIdentifier;
- (id)sourceRecordCreationDate;
- (id)sourceRecordID;
- (id)sourceRecordText;
- (id)sourceRecordURL;
- (id)uniqueIdentifier;
- (void)updateFallbackImageIfNecessary;
- (id)urlString;

@end
