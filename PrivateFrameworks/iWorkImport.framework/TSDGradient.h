/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGradient : TSDFill <NSCopying, NSMutableCopying, TSDMixing, TSSPreset, TSSPresetSource> {
    BOOL mIsAdvancedGradient;
    float mOpacity;
    struct CGShading { } *mShadingRef;
    NSMutableArray *mStops;
    unsigned int mType;
}

@property (nonatomic, readonly) TSUColor *firstColor;
@property (nonatomic, readonly, retain) NSArray *gradientStops;
@property (nonatomic, readonly) unsigned int gradientType;
@property (nonatomic, readonly) BOOL hasAlpha;
@property (nonatomic) BOOL isAdvancedGradient;
@property (nonatomic, readonly) BOOL isOpaque;
@property (nonatomic, readonly) TSUColor *lastColor;
@property (nonatomic) float opacity;
@property (nonatomic, readonly) NSString *presetKind;
@property (nonatomic, readonly) struct CGShading { }*shadingRef;

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (void)disableInflections;
+ (void)enableInflections;
+ (id)instanceWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 unarchiver:(id)arg2;
+ (id)linearGradientWithGradientStops:(id)arg1;
+ (id)linearGradientWithStartColor:(id)arg1 endColor:(id)arg2;
+ (id)presetKinds;
+ (id)radialGradientWithGradientStops:(id)arg1;
+ (id)radialGradientWithStartColor:(id)arg1 endColor:(id)arg2;
+ (void)sortStopsArray:(id)arg1;
+ (BOOL)useInflections;
+ (BOOL)useQuartzShadings;

- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })centeredRadialTransformInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (struct CGPoint { float x1; float x2; })endPointForPath:(id)arg1 andBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (int)fillType;
- (id)firstColor;
- (id)gradientStops;
- (unsigned int)gradientType;
- (BOOL)hasAlpha;
- (unsigned int)hash;
- (id)init;
- (id)initWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 unarchiver:(id)arg2;
- (id)initWithGradientStops:(id)arg1 type:(unsigned int)arg2;
- (id)initWithGradientStops:(id)arg1 type:(unsigned int)arg2 opacity:(float)arg3;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned int)arg3;
- (BOOL)isAdvancedGradient;
- (BOOL)isAdvancedGradientIgnoringFlag;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualIgnoringTransform:(id)arg1;
- (BOOL)isOpaque;
- (id)lastColor;
- (SEL)mapThemeAssetSelector;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newColorAtFraction:(float)arg1;
- (float)opacity;
- (struct CGContext { }*)p_beginBitmapWrapperContextInContext:(struct CGContext { }*)arg1 returningIntegralBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2;
- (void)p_endBitmapWrapperContext:(struct CGContext { }*)arg1 inContext:(struct CGContext { }*)arg2 withIntegralBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)p_evenlyDistributeStops;
- (void)p_insertGradientStop:(id)arg1;
- (id)p_insertStopAtFraction:(float)arg1;
- (id)p_insertStopAtFraction:(float)arg1 withColor:(id)arg2;
- (void)p_moveStopAtIndex:(unsigned int)arg1 toFraction:(float)arg2;
- (void)p_removeStop:(id)arg1;
- (id)p_removeStopAtIndex:(unsigned int)arg1;
- (void)p_reverseStopOrder;
- (void)p_setAlpha:(struct CGContext { }*)arg1;
- (void)p_setColorOfStopAtIndex:(unsigned int)arg1 toColor:(id)arg2;
- (void)p_setGradientStops:(id)arg1;
- (void)p_setGradientType:(unsigned int)arg1;
- (void)p_setInflectionOfStopAtIndex:(unsigned int)arg1 toInflection:(float)arg2;
- (void)p_swapStopAtIndex:(unsigned int)arg1 withStopAtIndex:(unsigned int)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 atAngle:(float)arg3;
- (id)presetKind;
- (id)referenceColor;
- (void)releaseShadingRef;
- (void)saveToArchive:(struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 archiver:(id)arg2;
- (void)setIsAdvancedGradient:(BOOL)arg1;
- (void)setOpacity:(float)arg1;
- (struct CGShading { }*)shadingRef;
- (struct CGPoint { float x1; float x2; })startPointForPath:(id)arg1 andBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)stopAfterFraction:(float)arg1;
- (id)stopAtIndex:(unsigned int)arg1;
- (id)stopBeforeFraction:(float)arg1;

@end
