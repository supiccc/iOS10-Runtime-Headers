/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFilteredStorage : NSObject <TSWPTextSource> {
    unsigned int _length;
    TSWPDeletionRangeMap *_rangeMap;
    TSWPStorage *_storage;
    unsigned int _storageLength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (BOOL)adjustRangesByDelta:(int)arg1;
- (id)attachmentAtCharIndex:(unsigned int)arg1;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned int)arg1;
- (void)attributesAtCharIndex:(unsigned int)arg1 attributesOfInterest:(BOOL)arg2 attributesTable:(/* Warning: unhandled array encoding: '[19@]' */ id)arg3 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg4;
- (unsigned int)charIndexMappedFromStorage:(unsigned int)arg1;
- (unsigned int)charIndexMappedToStorage:(unsigned int)arg1;
- (unsigned int)charIndexRemappedFromStorage:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })charRangeMappedFromStorage:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })charRangeMappedToStorage:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (id)characterStyleAtCharIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)dealloc;
- (void)enumerateSmartFieldsWithAttributeKind:(int)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateWithAttributeKind:(int)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usingBlock:(id /* block */)arg3;
- (id)footnoteReferenceAtCharIndex:(unsigned int)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)hasColumnBreakAtCharIndex:(unsigned int)arg1;
- (BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned int)arg1;
- (BOOL)hasSmartFieldsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (long)hyphenationLocationBeforeIndex:(long)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 locale:(struct __CFLocale { }*)arg3 hyphenChar:(unsigned int*)arg4;
- (id)initWithStorage:(id)arg1 subRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithStorage:(id)arg1 subRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 removeRanges:(id)arg3;
- (BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned int)arg1;
- (unsigned int)length;
- (unsigned int)nextCharacterIndex:(unsigned int)arg1;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned int)arg1 forAttributeKind:(int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)paragraphStyleAtCharIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (unsigned int)previousCharacterIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeForSelectionAtCharIndex:(unsigned int)arg1 caretIndex:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })scanBackwardForWordAtCharIndex:(unsigned int)arg1;
- (id)smartFieldAtCharIndex:(unsigned int)arg1 attributeKind:(int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)smartFieldsWithAttributeKind:(int)arg1 intersectingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)storageLength;
- (id)string;
- (id)substringWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })whiteSpaceRangeAtCharIndex:(unsigned int)arg1 includingBreaks:(BOOL)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })wordAtCharIndex:(unsigned int)arg1 includePreviousWord:(BOOL)arg2;

@end
