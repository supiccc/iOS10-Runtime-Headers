/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncChunk : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *postGen;
@property (nonatomic, copy) NSString *preGen;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *toAdd;
@property (nonatomic, copy) NSArray *toRemove;
@property (nonatomic, copy) NSString *validity;

+ (id)chunk;
+ (id)chunkWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)key;
- (id)postGen;
- (id)preGen;
- (void)setKey:(id)arg1;
- (void)setPostGen:(id)arg1;
- (void)setPreGen:(id)arg1;
- (void)setToAdd:(id)arg1;
- (void)setToRemove:(id)arg1;
- (void)setValidity:(id)arg1;
- (id)toAdd;
- (id)toRemove;
- (id)validity;

@end
