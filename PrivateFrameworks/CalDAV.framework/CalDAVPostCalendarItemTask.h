/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVPostCalendarItemTask : CoreDAVPostTask {
    NSString *_previousScheduleTag;
}

@property (nonatomic) <CalDAVPostCalendarItemTaskDelegate> *delegate;
@property (nonatomic, retain) NSString *previousScheduleTag;

- (id)additionalHeaderValues;
- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;
- (id)previousScheduleTag;
- (void)setPreviousScheduleTag:(id)arg1;

@end
