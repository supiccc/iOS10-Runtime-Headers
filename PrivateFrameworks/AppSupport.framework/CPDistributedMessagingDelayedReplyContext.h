/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPDistributedMessagingDelayedReplyContext : NSObject {
    BOOL _portPassing;
    unsigned int _replyPort;
}

@property (nonatomic) BOOL portPassing;
@property (nonatomic) unsigned int replyPort;

- (void)dealloc;
- (id)initWithReplyPort:(unsigned int)arg1 portPassing:(BOOL)arg2;
- (BOOL)portPassing;
- (unsigned int)replyPort;
- (void)setPortPassing:(BOOL)arg1;
- (void)setReplyPort:(unsigned int)arg1;

@end
