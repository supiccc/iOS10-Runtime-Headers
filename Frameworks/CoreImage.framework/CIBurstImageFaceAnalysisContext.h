/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstImageFaceAnalysisContext : NSObject {
    int _version;
    NSMutableDictionary *curConfig;
    FCRFaceDetector *faceDetector;
    int faceIdCounter;
    NSMutableDictionary *faceIdMapping;
    NSMutableArray *faceInfoArray;
    NSMutableArray *faceTimestampArray;
    BOOL forceFaceDetectionEnable;
    int lastFaceIndex;
    double latestFaceTimestamp;
    double latestImageTimestamp;
    int numFramesNoFaces;
    int numFramesSinceFullFaceCore;
    NSMutableDictionary *renameMapping;
    double timeBlinkDetectionDone;
    double timeFaceDetectionDone;
}

@property BOOL forceFaceDetectionEnable;
@property double latestFaceTimestamp;
@property double timeBlinkDetectionDone;
@property double timeFaceDetectionDone;
@property int version;

- (void)addFaceToArray:(id)arg1;
- (void)addFacesToImageStat:(id)arg1 imageSize:(struct CGSize { float x1; float x2; })arg2;
- (void)adjustFaceIdsForImageStat:(id)arg1;
- (void)calcFaceScores:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateFaceCoreROI:(id)arg1 imageStat:(id)arg2 needFaceCore:(BOOL*)arg3;
- (void)calculateFaceFocusInImage:(id)arg1 imageStat:(id)arg2;
- (void)dealloc;
- (void)dumpFaceInfoArray;
- (void)extractFacesFromMetadata:(id)arg1;
- (int)findFacesInImage:(id)arg1 imageStat:(id)arg2;
- (BOOL)forceFaceDetectionEnable;
- (id)initWithVersion:(id)arg1;
- (BOOL)isSmallFace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)latestFaceTimestamp;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })padRoiRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 paddingX:(float)arg2 paddingY:(float)arg3;
- (id)processSmallFaces:(id)arg1 imageStat:(id)arg2 faces:(id)arg3 extractOptions:(id)arg4;
- (void)setForceFaceDetectionEnable:(BOOL)arg1;
- (void)setLatestFaceTimestamp:(double)arg1;
- (void)setTimeBlinkDetectionDone:(double)arg1;
- (void)setTimeFaceDetectionDone:(double)arg1;
- (void)setVersion:(int)arg1;
- (void)setupFaceDetector;
- (double)timeBlinkDetectionDone;
- (double)timeFaceDetectionDone;
- (int)version;

@end
