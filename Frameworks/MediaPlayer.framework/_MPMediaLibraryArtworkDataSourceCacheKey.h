/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject {
    id _catalogIdentifier;
    struct CGSize { 
        float width; 
        float height; 
    } _representationSize;
}

@property (nonatomic, copy) id catalogIdentifier;
@property (nonatomic) struct CGSize { float x1; float x2; } representationSize;

- (void).cxx_destruct;
- (id)catalogIdentifier;
- (unsigned int)hash;
- (id)initWithArtworkCatalog:(id)arg1 representativeSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)isEqual:(id)arg1;
- (struct CGSize { float x1; float x2; })representationSize;
- (void)setCatalogIdentifier:(id)arg1;
- (void)setRepresentationSize:(struct CGSize { float x1; float x2; })arg1;

@end
