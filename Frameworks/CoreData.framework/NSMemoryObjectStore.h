/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMemoryObjectStore : NSMappedObjectStore

+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;

- (id)_archivedData;
- (void)_preflightCrossCheck;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (void)saveDocumentToPath:(id)arg1;
- (id)type;

@end
