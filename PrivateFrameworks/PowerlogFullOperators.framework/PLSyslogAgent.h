/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

@interface PLSyslogAgent : PLAgent {
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    struct __CFRunLoopSource { } *fileDescriptorSource;
    int kq;
    unsigned int lastMessageID;
    unsigned int syslogdPid;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;

+ (id)accountingGroupDefinitions;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (id)batteryLevelChanged;
- (void)enumerateResultsOfASLQuery:(struct __asl_object_s { }*)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (void)initOperatorDependancies;
- (void)listenForSyslogDeath;
- (void)log;
- (void)logEventPointLogLine;
- (void)resetMessageIndex;
- (void)setBatteryLevelChanged:(id)arg1;

@end
