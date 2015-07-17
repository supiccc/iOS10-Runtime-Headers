/* Generated by RuntimeBrowser.
 */

@protocol IKJSRestrictions <JSExport>

@required

- (BOOL)allowArtistActivity;
- (BOOL)allowsErotica;
- (BOOL)allowsExplicit;
- (BOOL)appInstallationAllowed;
- (int)maxAppRank;
- (NSString *)maxAppRating;
- (int)maxMovieRank;
- (NSString *)maxMovieRatingForCountry:(JSValue *)arg1;
- (int)maxTVShowRank;
- (NSString *)maxTVShowRatingForCountry:(JSValue *)arg1;

@end
