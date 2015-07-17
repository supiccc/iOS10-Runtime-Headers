/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSMagnifyMode : NSObject <NSCopying> {
    NSString *_localizedName;
    NSString *_name;
    NSArray *_previewHTMLStrings;
    NSArray *_previewStyleSheets;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    BOOL _zoomed;
}

@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *previewHTMLStrings;
@property (nonatomic, retain) NSArray *previewStyleSheets;
@property (nonatomic) struct CGSize { float x1; float x2; } size;
@property (getter=isZoomed, nonatomic) BOOL zoomed;

+ (id)magnifyModeWithSize:(struct CGSize { float x1; float x2; })arg1 name:(id)arg2 localizedName:(id)arg3 isZoomed:(BOOL)arg4;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isZoomed;
- (id)localizedName;
- (id)name;
- (id)previewHTMLStrings;
- (id)previewStyleSheets;
- (void)setLocalizedName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPreviewHTMLStrings:(id)arg1;
- (void)setPreviewStyleSheets:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setZoomed:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })size;

@end
