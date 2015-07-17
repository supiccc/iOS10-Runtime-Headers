/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSParsecSearchResponse : NSObject {
    WBSParsecSearchCompletionResultSet *_bestResultSet;
    NSArray *_completionResultSets;
    double _maxAge;
    unsigned int _sizeInBytes;
}

@property (nonatomic, readonly) WBSParsecSearchCompletionResultSet *bestCompletionResultSet;
@property (nonatomic, readonly) NSArray *completionResultSets;
@property (nonatomic, readonly) NSArray *errorCodesForCompletionResultSets;
@property (nonatomic, readonly) double maxAge;
@property (nonatomic, readonly) unsigned int sizeInBytes;

- (void).cxx_destruct;
- (id)bestCompletionResultSet;
- (id)completionResultSets;
- (id)errorCodesForCompletionResultSets;
- (id)initWithArray:(id)arg1 responseHeaders:(id)arg2 sizeInBytes:(unsigned int)arg3 cache:(id)arg4;
- (double)maxAge;
- (unsigned int)sizeInBytes;

@end
