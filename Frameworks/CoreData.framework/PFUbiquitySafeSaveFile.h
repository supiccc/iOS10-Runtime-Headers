/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySafeSaveFile : NSObject {
    BOOL _continueCheckingDownload;
    BOOL _continueCheckingUpload;
    PFUbiquityLocation *_currentLocation;
    NSError *_downloadError;
    BOOL _downloadSuccess;
    BOOL _isRegistered;
    NSString *_localPeerID;
    BOOL _moveAfterSave;
    PFUbiquityLocation *_permanentLocation;
    NSError *_safeSaveError;
    PFUbiquityLocation *_safeSaveLocation;
    NSObject<OS_dispatch_semaphore> *_safeSaveSemaphore;
    BOOL _safeSaveSuccess;
}

@property (nonatomic, readonly) BOOL continueCheckingDownload;
@property (nonatomic, readonly) BOOL continueCheckingUpload;
@property (nonatomic, retain) PFUbiquityLocation *currentLocation;
@property (nonatomic, readonly) NSError *downloadError;
@property (nonatomic, readonly) BOOL downloadSuccess;
@property (nonatomic, readonly) BOOL existsAtPermanentLocation;
@property (nonatomic, readonly) BOOL existsAtSafeSaveLocation;
@property (nonatomic, readonly) BOOL existsInCloud;
@property (nonatomic, readonly) BOOL isRegistered;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) BOOL moveAfterSave;
@property (nonatomic, readonly) PFUbiquityLocation *permanentLocation;
@property (nonatomic, readonly) NSError *safeSaveError;
@property (nonatomic, readonly) PFUbiquityLocation *safeSaveLocation;
@property (nonatomic, readonly) BOOL safeSaveSuccess;

- (void)checkFileDownload;
- (void)checkSafeSaveFileUpload;
- (void)checkSafeSaveFileUploadAsync;
- (BOOL)continueCheckingDownload;
- (BOOL)continueCheckingUpload;
- (id)currentLocation;
- (void)dealloc;
- (id)description;
- (id)downloadError;
- (void)downloadFinished;
- (BOOL)downloadLatestVersion:(BOOL)arg1 error:(id*)arg2;
- (BOOL)downloadSuccess;
- (BOOL)existsAtPermanentLocation;
- (BOOL)existsAtSafeSaveLocation;
- (BOOL)existsInCloud;
- (id)init;
- (id)initWithPermanentLocation:(id)arg1 safeSaveLocation:(id)arg2 andLocalPeerID:(id)arg3;
- (BOOL)isFileDownloaded:(id*)arg1;
- (BOOL)isFileUploaded:(id*)arg1;
- (BOOL)isRegistered;
- (BOOL)loadFile:(id*)arg1;
- (BOOL)loadFileFromLocation:(id)arg1 error:(id*)arg2;
- (id)localPeerID;
- (BOOL)moveAfterSave;
- (BOOL)moveToPermanentLocation:(id*)arg1;
- (id)permanentLocation;
- (BOOL)removeFile:(id*)arg1;
- (BOOL)removeFileFromLocation:(id)arg1 error:(id*)arg2;
- (id)safeSaveError;
- (BOOL)safeSaveFile:(BOOL)arg1 moveToPermanentLocation:(BOOL)arg2 error:(id*)arg3;
- (void)safeSaveFinishedUpload;
- (id)safeSaveLocation;
- (BOOL)safeSaveSuccess;
- (void)setCurrentLocation:(id)arg1;
- (void)setDownloadError:(id)arg1;
- (void)setDownloadSuccess:(BOOL)arg1;
- (void)setSafeSaveError:(id)arg1;
- (void)setSafeSaveSuccess:(BOOL)arg1;
- (BOOL)waitForFileToDownload:(id*)arg1;
- (BOOL)waitForFileToUpload:(id*)arg1;
- (BOOL)writeFile:(id*)arg1;
- (BOOL)writeFileToLocation:(id)arg1 error:(id*)arg2;

@end
