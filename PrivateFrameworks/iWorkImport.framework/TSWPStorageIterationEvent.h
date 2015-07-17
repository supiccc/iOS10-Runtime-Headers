/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageIterationEvent : NSObject {
    NSObject *_object;
    NSString *_providerIdentifier;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    TSWPStorage *_storage;
    int _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSObject *object;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property (nonatomic) TSWPStorage *storage;
@property (nonatomic, readonly) int type;

+ (id)characterEventWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
+ (id)eventWithType:(int)arg1 providerIdentifier:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 object:(id)arg4;

- (id).cxx_construct;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)initWithCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithType:(int)arg1 providerIdentifier:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 object:(id)arg4;
- (BOOL)isRangeEnd;
- (id)object;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)setStorage:(id)arg1;
- (id)storage;
- (int)type;

@end
