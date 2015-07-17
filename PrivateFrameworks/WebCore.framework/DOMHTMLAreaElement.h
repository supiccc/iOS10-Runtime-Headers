/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLAreaElement : DOMHTMLElement

@property (readonly, copy) NSURL *absoluteLinkURL;
@property (copy) NSString *accessKey;
@property (copy) NSString *alt;
@property (copy) NSString *coords;
@property (readonly, copy) NSString *hashName;
@property (readonly, copy) NSString *host;
@property (readonly, copy) NSString *hostname;
@property (copy) NSString *href;
@property BOOL noHref;
@property (readonly, copy) NSString *pathname;
@property (readonly, copy) NSString *port;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *search;
@property (copy) NSString *shape;
@property (copy) NSString *target;

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

- (id)absoluteLinkURL;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })absoluteQuadWithOwner:(id)arg1;
- (id)absoluteQuadsWithOwner:(id)arg1;
- (id)accessKey;
- (id)alt;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBoxWithOwner:(id)arg1;
- (id)boundingBoxesWithOwner:(id)arg1;
- (id)coords;
- (id)hashName;
- (id)host;
- (id)hostname;
- (id)href;
- (BOOL)noHref;
- (id)pathname;
- (id)ping;
- (id)port;
- (id)protocol;
- (id)search;
- (void)setAccessKey:(id)arg1;
- (void)setAlt:(id)arg1;
- (void)setCoords:(id)arg1;
- (void)setHref:(id)arg1;
- (void)setNoHref:(BOOL)arg1;
- (void)setPing:(id)arg1;
- (void)setShape:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)shape;
- (id)target;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (id)absoluteQuadsAtPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
