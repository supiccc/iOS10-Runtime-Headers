/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDataCollector : NSObject <MFGuaranteedCollectingDataConsumer> {
    MFBufferedDataConsumer *_consumer;
    BOOL _incomplete;
    MFMailMessageLibrary *_library;
    MFLibraryMessage *_message;
    NSString *_part;
    BOOL _partial;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (int)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(BOOL)arg4 incomplete:(BOOL)arg5;
- (id)pathForStorage;

@end
