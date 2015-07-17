/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextAttachmentView : UIView <NSTextAttachmentCell> {
    NSTextAttachment *_attachment;
    UIImage *_image;
}

@property (nonatomic) NSTextAttachment *attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } drawingBounds;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImage *image;
@property (readonly) Class superclass;

+ (id)viewForData:(id)arg1 ofType:(id)arg2;
+ (id)viewForImage:(id)arg1;

- (id)attachment;
- (struct CGPoint { float x1; float x2; })cellBaselineOffset;
- (struct CGSize { float x1; float x2; })cellSize;
- (id)contentView;
- (void)dealloc;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 characterIndex:(unsigned int)arg3;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 characterIndex:(unsigned int)arg3 layoutManager:(id)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })drawingBounds;
- (id)image;
- (id)initWithContentView:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setDrawingBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;

@end
