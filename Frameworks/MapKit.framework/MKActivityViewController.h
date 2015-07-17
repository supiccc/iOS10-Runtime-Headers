/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKActivityViewController : UIActivityViewController <UIActivityViewControllerDelegate> {
    <MKActivityViewControllerDelegate> *_activityControllerDelegate;
}

@property (nonatomic) <MKActivityViewControllerDelegate> *activityControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_activityHandler;
- (id /* block */)_completionHandler;
- (id)activityControllerDelegate;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)arg1;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 activityProviderDelegate:(id)arg4;
- (id)initWithSource:(id)arg1 destination:(id)arg2 applicationActivities:(id)arg3;
- (id)initWithSource:(id)arg1 destination:(id)arg2 applicationActivities:(id)arg3 routeProviderDelegate:(id)arg4;
- (void)setActivityControllerDelegate:(id)arg1;

@end
