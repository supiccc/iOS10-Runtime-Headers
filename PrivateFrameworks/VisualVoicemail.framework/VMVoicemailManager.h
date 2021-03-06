/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMVoicemailManager : NSObject <VMClientXPCProtocol> {
    VMVoicemailCapabilities * _capabilities;
    VMClientWrapper * _client;
    bool  _messageWaiting;
    bool  _online;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _storageUsage;
    bool  _subscribed;
    bool  _syncInProgress;
    int  _token;
    NSMutableSet * _trashedMessages;
    NSArray * _voicemails;
}

@property (nonatomic, readonly) NSArray *allVoicemails;
@property (nonatomic, readonly) bool canChangeGreeting;
@property (nonatomic, readonly) bool canChangePassword;
@property (nonatomic, retain) VMVoicemailCapabilities *capabilities;
@property (nonatomic, retain) VMClientWrapper *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mailboxGreetingState;
@property (nonatomic, readonly) bool mailboxRequiresSetup;
@property (nonatomic, readonly) double maximumGreetingDuration;
@property (nonatomic, readonly) unsigned long long maximumPasswordLength;
@property (getter=isMessageWaiting, nonatomic) bool messageWaiting;
@property (nonatomic, readonly) unsigned long long minimumPasswordLength;
@property (getter=isOnline, nonatomic) bool online;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long storageUsage;
@property (getter=isSubscribed, nonatomic) bool subscribed;
@property (readonly) Class superclass;
@property (getter=isSyncInProgress, nonatomic, readonly) bool syncInProgress;
@property (nonatomic) int token;
@property (nonatomic, retain) NSMutableSet *trashedMessages;
@property (nonatomic, retain) NSArray *voicemails;

- (void).cxx_destruct;
- (void)_removeDuplicateVoicemails;
- (void)_requestInitialStateIfNecessaryAndSendNotifications:(bool)arg1;
- (id)_voicemailWithIdentifier:(unsigned long long)arg1;
- (id)allVoicemails;
- (bool)canChangeGreeting;
- (bool)canChangePassword;
- (id)capabilities;
- (void)changePassword:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)client;
- (unsigned long long)countOfVoicemailsPassingTest:(id /* block */)arg1;
- (id)dataForVoicemailWithIdentifier:(unsigned long long)arg1;
- (void)dealloc;
- (void)deleteAllVoicemails;
- (void)deleteVoicemail:(id)arg1;
- (void)deleteVoicemailsPassingTest:(id /* block */)arg1;
- (id)init;
- (bool)isMessageWaiting;
- (bool)isOnline;
- (bool)isSubscribed;
- (bool)isSyncInProgress;
- (long long)mailboxGreetingState;
- (bool)mailboxRequiresSetup;
- (void)markVoicemailAsRead:(id)arg1;
- (void)markVoicemailsAsReadPassingTest:(id /* block */)arg1;
- (double)maximumGreetingDuration;
- (unsigned long long)maximumPasswordLength;
- (unsigned long long)minimumPasswordLength;
- (id)queue;
- (void)removeVoicemailFromTrash:(id)arg1;
- (void)reportTranscriptionProblemForVoicemail:(id)arg1;
- (void)reportTranscriptionRatedAccurate:(bool)arg1 forVoicemail:(id)arg2;
- (void)retrieveGreetingWithCompletionHandler:(id /* block */)arg1;
- (void)saveGreeting:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)serverConnection;
- (id)serverConnectionWithErrorHandler:(id /* block */)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setMessageWaiting:(bool)arg1;
- (void)setOnline:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setStorageUsage:(unsigned long long)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setSyncInProgress:(bool)arg1;
- (void)setToken:(int)arg1;
- (void)setTrashedMessages:(id)arg1;
- (void)setVoicemails:(id)arg1;
- (unsigned long long)storageUsage;
- (void)synchronize;
- (id)synchronousServerConnectionWithErrorHandler:(id /* block */)arg1;
- (int)token;
- (void)trashVoicemail:(id)arg1;
- (void)trashVoicemails:(id)arg1;
- (void)trashVoicemailsPassingTest:(id /* block */)arg1;
- (id)trashedMessages;
- (id)uniqueIdentifierForVoiceMail:(id)arg1;
- (id)voicemailForData:(id)arg1;
- (id)voicemailWithIdentifier:(unsigned long long)arg1;
- (id)voicemails;
- (id)voicemailsPassingTest:(id /* block */)arg1;
- (void)voicemailsUpdated:(id)arg1;

@end
