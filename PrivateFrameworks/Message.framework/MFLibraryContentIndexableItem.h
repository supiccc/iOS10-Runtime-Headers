/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibraryContentIndexableItem : NSObject {
    NSArray *_cc;
    NSString *_content;
    unsigned int _documentIdentifier;
    unsigned int _mailboxID;
    NSArray *_senders;
    NSString *_subject;
    NSArray *_to;
}

@property (nonatomic, copy) NSArray *cc;
@property (nonatomic, copy) NSString *content;
@property (nonatomic) unsigned int documentIdentifier;
@property (nonatomic) unsigned int mailboxID;
@property (nonatomic, copy) NSArray *senders;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSArray *to;

- (id)cc;
- (int)compare:(id)arg1;
- (id)content;
- (void)dealloc;
- (unsigned int)documentIdentifier;
- (id)initWithDocumentIdentifier:(unsigned int)arg1;
- (unsigned int)mailboxID;
- (id)senders;
- (void)setCc:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDocumentIdentifier:(unsigned int)arg1;
- (void)setMailboxID:(unsigned int)arg1;
- (void)setSenders:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTo:(id)arg1;
- (id)subject;
- (id)to;

@end
