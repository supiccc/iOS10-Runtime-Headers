/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask {
    int _absoluteOrder;
    NSURL *_priorOrderedURL;
    NSSet *_propertiesToSet;
    BOOL _sendOrder;
}

@property (nonatomic) int absoluteOrder;
@property (nonatomic) <CoreDAVTaskDelegate> *delegate;
@property (nonatomic, retain) NSURL *priorOrderedURL;
@property (nonatomic, retain) NSSet *propertiesToSet;

- (int)absoluteOrder;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)priorOrderedURL;
- (id)propertiesToSet;
- (id)requestBody;
- (void)setAbsoluteOrder:(int)arg1;
- (void)setPriorOrderedURL:(id)arg1;
- (void)setPropertiesToSet:(id)arg1;

@end
