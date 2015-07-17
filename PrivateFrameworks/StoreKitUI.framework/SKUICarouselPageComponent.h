/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICarouselPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {
    NSArray *_carouselItems;
    double _cycleInterval;
    int _missingItemCount;
}

@property (nonatomic, readonly) NSArray *carouselItems;
@property (nonatomic, readonly) double cycleInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SKUICarouselViewElement *viewElement;

- (void).cxx_destruct;
- (id)carouselItems;
- (int)componentType;
- (double)cycleInterval;
- (void)enumerateMissingItemIdentifiersFromIndex:(int)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (id)initWithViewElement:(id)arg1;
- (BOOL)isMissingItemData;
- (id)metricsElementName;
- (void)updateWithMissingItems:(id)arg1;
- (id)valueForMetricsField:(id)arg1;

@end
