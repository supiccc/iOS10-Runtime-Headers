/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSGzipOutputStream : NSOutputStream {
    NSOutputStream *_actualOutputStream;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned int total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned int total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned int adler; 
        unsigned int reserved; 
    } _stream;
    unsigned int _streamContentLength;
    NSError *_streamError;
    char *_streamOutBuffer;
    unsigned int _streamOutBufferSize;
}

- (int)_consumeStreamOutput:(BOOL)arg1;
- (void)_setStreamError:(int)arg1 context:(id)arg2;
- (void)close;
- (void)dealloc;
- (BOOL)hasSpaceAvailable;
- (id)init;
- (id)initToFileAtPath:(id)arg1 append:(BOOL)arg2;
- (id)initToMemory;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (unsigned int)streamContentLength;
- (id)streamError;
- (unsigned int)streamStatus;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;

@end
