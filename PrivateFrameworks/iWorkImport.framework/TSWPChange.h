/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying> {
    BOOL _changeWasAddedToDocumentRoot;
    NSDate *_date;
    int _kind;
    TSWPStorage *_parentStorage;
    TSWPChangeSession *_session;
}

@property (nonatomic, readonly) TSUColor *changeAdornmentsColor;
@property (nonatomic) BOOL changeWasAddedToDocumentRoot;
@property (nonatomic, retain) NSDate *date;
@property (getter=isHidden, nonatomic, readonly) BOOL hidden;
@property (nonatomic, readonly) BOOL isDeletion;
@property (nonatomic, readonly) BOOL isInsertion;
@property (nonatomic) TSWPStorage *parentStorage;
@property (nonatomic, retain) TSWPChangeSession *session;
@property (nonatomic, readonly) BOOL showsHiddenDeletionMarkup;
@property (nonatomic, readonly) BOOL showsMarkup;
@property (nonatomic, readonly) TSUColor *textMarkupColor;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)canMergeWithKind:(int)arg1 session:(id)arg2;
- (id)changeAdornmentsColor;
- (BOOL)changeWasAddedToDocumentRoot;
- (id)copyWithContext:(id)arg1;
- (id)date;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 kind:(int)arg2 session:(id)arg3;
- (BOOL)isDeletion;
- (BOOL)isFromChangeSession:(id)arg1;
- (BOOL)isHidden;
- (BOOL)isInsertion;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1 key:(id)arg2;
- (id)parentStorage;
- (void)saveToArchiver:(id)arg1;
- (id)session;
- (void)setChangeWasAddedToDocumentRoot:(BOOL)arg1;
- (void)setDate:(id)arg1;
- (void)setParentStorage:(id)arg1;
- (void)setSession:(id)arg1;
- (BOOL)showsHiddenDeletionMarkup;
- (BOOL)showsMarkup;
- (id)textMarkupColor;
- (void)trackedTextDidChange;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
