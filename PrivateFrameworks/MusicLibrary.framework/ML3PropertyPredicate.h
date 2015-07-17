/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3PropertyPredicate : ML3Predicate {
    NSString *_property;
}

@property (nonatomic, copy) NSString *property;

+ (id)predicateWithProperty:(id)arg1;

- (void).cxx_destruct;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1;
- (BOOL)isDynamicForEntityClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)property;
- (void)setProperty:(id)arg1;

@end
