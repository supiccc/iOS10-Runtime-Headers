/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAOrCondition : AceObject <SASupportCondition>

@property (nonatomic, copy) NSArray *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)orCondition;
+ (id)orConditionWithDictionary:(id)arg1 context:(id)arg2;

- (id)conditions;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setConditions:(id)arg1;

@end
