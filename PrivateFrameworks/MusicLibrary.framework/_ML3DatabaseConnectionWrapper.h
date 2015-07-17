/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface _ML3DatabaseConnectionWrapper : NSObject {
    NSThread *_borrowingThread;
    ML3DatabaseConnection *_connection;
    NSThread *_owningThread;
    unsigned int _useCount;
}

@property (nonatomic, retain) NSThread *borrowingThread;
@property (nonatomic, retain) ML3DatabaseConnection *connection;
@property (nonatomic, retain) NSThread *owningThread;
@property (nonatomic) unsigned int useCount;

- (void).cxx_destruct;
- (id)borrowingThread;
- (id)connection;
- (id)description;
- (id)initWithConnection:(id)arg1;
- (id)owningThread;
- (void)setBorrowingThread:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setOwningThread:(id)arg1;
- (void)setUseCount:(unsigned int)arg1;
- (unsigned int)useCount;

@end
