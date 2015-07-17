/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ContainsPredicate : ML3PropertyPredicate {
    id _values;
}

@property (nonatomic, copy) id values;

+ (id)predicateWithProperty:(id)arg1 valueSet:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;

- (void).cxx_destruct;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;
- (id)databaseStatementParameters;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1 values:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setValues:(id)arg1;
- (id)values;

@end
