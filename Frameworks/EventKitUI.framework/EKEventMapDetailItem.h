/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventMapDetailItem : EKEventDetailItem <MKMapViewDelegate> {
    UITableViewCell *_cell;
    UIView *_loadingView;
    MKMapView *_mapView;
    UIView *_overlayView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)_mapHeight;
- (void)_setAnnotationForEventLocation;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (void)eventViewController:(id)arg1 didHighlightSubitem:(unsigned int)arg2;
- (void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned int)arg2;
- (void)eventViewController:(id)arg1 didUnhighlightSubitem:(unsigned int)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (void)mapViewWillStartRenderingMap:(id)arg1;

@end
