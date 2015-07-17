/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFContactsSearchTaskContext : NSObject {
    <MFContactsSearchConsumer> *_consumer;
    NSMutableSet *_operations;
    NSMutableSet *_searchQueries;
    NSString *_text;
}

@property (nonatomic, readonly) <MFContactsSearchConsumer> *consumer;
@property (nonatomic, readonly) NSMutableSet *operations;
@property (nonatomic, readonly) NSMutableSet *searchQueries;
@property (nonatomic, readonly) NSString *text;

+ (id)contextWithConsumer:(id)arg1 text:(id)arg2 operations:(id)arg3 searchQueries:(id)arg4;

- (id)consumer;
- (void)dealloc;
- (BOOL)done;
- (id)operations;
- (id)searchQueries;
- (id)text;

@end
