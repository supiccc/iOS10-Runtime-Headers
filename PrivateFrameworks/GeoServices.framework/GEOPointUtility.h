/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPointUtility : NSObject

+ (void*)controlPoints:(id)arg1 usesZilch:(BOOL)arg2;
+ (struct { double x1; double x2; })pointAt:(unsigned int)arg1 pointData:(id)arg2 usesZilch:(BOOL)arg3;
+ (unsigned int)pointCount:(id)arg1 usesZilch:(BOOL)arg2;
+ (id)unpackBasicPoints:(id)arg1;
+ (id)unpackPoints:(id)arg1 usesZilch:(BOOL)arg2;
+ (id)unpackZilchPoints:(id)arg1;
+ (id)zilchData:(id)arg1 fromPointIndex:(unsigned int)arg2;
+ (BOOL)zilchPointsSupported;

@end
