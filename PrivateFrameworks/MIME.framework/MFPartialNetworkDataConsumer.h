/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer> {
    unsigned int _length;
    <MFGuaranteedCollectingDataConsumer> *_rawDataConsumer;
    unsigned int _seenNetworkLineEndings;
    NSData *_strippedData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (int)appendData:(id)arg1;
- (id)copyDataWithUnixLineEndings;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)init;
- (unsigned int)length;
- (void)purge;

@end
