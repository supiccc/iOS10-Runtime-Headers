/* Generated by RuntimeBrowser.
 */

@protocol MTLTextureSPI <MTLTexture, MTLResourceSPI>

@required

- (struct __IOSurface { }*)iosurface;
- (unsigned int)iosurfacePlane;
- (BOOL)isDrawable;
- (unsigned int)numFaces;
- (unsigned int)rotation;

@end
