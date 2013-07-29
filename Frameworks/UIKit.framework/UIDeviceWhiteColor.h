/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDeviceWhiteColor : UIColor  {
    float whiteComponent;
    float alphaComponent;
    struct CGColor { } *cachedColor;
    long cachedColorOnceToken;
}


- (void)setStroke;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (BOOL)getWhite:(float*)arg1 alpha:(float*)arg2;
- (float)alphaComponent;
- (id)colorWithAlphaComponent:(float)arg1;
- (void)setFill;
- (struct CGColor { }*)CGColor;
- (void)set;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGColor { }*)_createCGColorWithAlpha:(float)arg1;
- (id)colorSpaceName;
- (BOOL)_getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;

@end