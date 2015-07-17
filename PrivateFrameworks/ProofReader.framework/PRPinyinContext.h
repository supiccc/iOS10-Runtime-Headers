/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRPinyinContext : PRAutocorrectionContext {
    unsigned int _abbreviatedSyllableCount;
    NSMutableArray *_addedModifications;
    NSMutableArray *_addedRemovedModifications;
    char *_altBuffer;
    char *_altBufferScores;
    char *_buffer;
    void *_connection;
    unsigned int _endIndex;
    NSMutableArray *_geometryDataArray;
    unsigned int _lastIndexes;
    BOOL _lastSyllableIsPartial;
    unsigned int _length;
    unsigned int _lengthBeforeApostrophes;
    NSMutableArray *_modifications;
    unsigned int _nextIndexes;
    NSMutableArray *_prefixes;
    unsigned int _previouslyAnalyzedLength;
    NSMutableArray *_removedModifications;
    unsigned int _startIndex;
    unsigned int _startingPoint;
    unsigned int *_syllableLengthArray;
    double _validSequenceCorrectionThreshold;
}

- (void)_addDeletions;
- (BOOL)_addEnglishWordForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 quickly:(BOOL)arg2;
- (BOOL)_addEnglishWordsEndingAtIndex:(unsigned int)arg1 quickly:(BOOL)arg2;
- (void)_addEnglishWordsQuickly:(BOOL)arg1;
- (void)_addInsertions;
- (void)_addPrefixes;
- (void)_addReplacements;
- (void)_addSpecialEnglishWords;
- (void)_addTranspositions;
- (void)_addValidSequenceReplacements;
- (void)_advanceIndexes;
- (void)_filterModifications;
- (void)_removeModificationsAndMoveStartingPoint;
- (void)_removePrefixes;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3;
- (id)addedModifications;
- (id)currentModifications;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)prefixes;
- (void)removeNumberOfInputCharacters:(unsigned int)arg1;
- (id)removedModifications;
- (void)reset;
- (void)setValidSequenceCorrectionThreshold:(double)arg1;
- (double)validSequenceCorrectionThreshold;

@end
