/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3TruthPredicate : ML3Predicate {
    BOOL _truthValue;
}

+ (id)falsePredicate;
+ (id)truePredicate;

- (id)_predicateString;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFalseAlways;
- (BOOL)isTrueAlways;

@end
