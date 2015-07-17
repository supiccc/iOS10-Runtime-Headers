/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDiscreteCollectionCalculator : NSObject {
    struct map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats> > > { 
        struct __tree<std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDDiscreteStats> > > { 
            struct __tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } _bySource;
    struct { 
        double avg; 
        double max; 
        double min; 
        unsigned int count; 
    } _currentStats;
    BOOL _detailBySource;
}

@property (nonatomic) BOOL detailBySource;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCurrentValue:(double)arg1 sourceId:(long long)arg2;
- (void)advanceBucket;
- (int)dataCount;
- (id)description;
- (BOOL)detailBySource;
- (void)getCurrentBucketStats:(struct { double x1; double x2; double x3; unsigned int x4; }*)arg1;
- (BOOL)hasData;
- (id)init;
- (void)setDetailBySource:(BOOL)arg1;
- (id)statsBySource;

@end
