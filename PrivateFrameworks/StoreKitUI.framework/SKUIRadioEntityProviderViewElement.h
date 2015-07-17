/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRadioEntityProviderViewElement : SKUIAbstractEntityProviderViewElement <SKUIEntityProviding> {
    int _countLimit;
    BOOL _hasValidStations;
    int _radioEntityProviderType;
    RadioModel *_radioModel;
    NSMapTable *_stationToStationEntityValueProvider;
    NSArray *_stations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_entityValueProviderForStation:(id)arg1;
- (void)_invalidateWithContext:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (id)_stations;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)dealloc;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (id)indexBarEntryEntityValueProviderAtIndex:(unsigned int)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (unsigned int)numberOfEntitiesInSection:(unsigned int)arg1;
- (unsigned int)numberOfIndexBarEntries;
- (unsigned int)numberOfSections;
- (id)sectionEntityValueProviderAtIndex:(int)arg1;
- (unsigned int)sectionForSectionIndexBarEntryAtIndex:(unsigned int)arg1;

@end
