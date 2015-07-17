/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStepper : UIControl {
    BOOL _autorepeat;
    BOOL _continuous;
    NSMutableDictionary *_dividerImages;
    BOOL _isRtoL;
    double _maximumValue;
    UIImageView *_middleView;
    double _minimumValue;
    UIButton *_minusButton;
    UIButton *_plusButton;
    int _repeatCount;
    NSTimer *_repeatTimer;
    double _stepValue;
    double _value;
    BOOL _wraps;
}

@property (nonatomic) BOOL autorepeat;
@property (getter=isContinuous, nonatomic) BOOL continuous;
@property (nonatomic) double maximumValue;
@property (nonatomic) double minimumValue;
@property (nonatomic) double stepValue;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) double value;
@property (nonatomic) BOOL wraps;

- (void)_commonStepperInit;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)_setDecrementImage:(id)arg1 forState:(unsigned int)arg2;
- (void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3;
- (void)_setIncrementImage:(id)arg1 forState:(unsigned int)arg2;
- (void)_startTimer;
- (void)_stopTimer;
- (void)_updateButtonEnabled;
- (void)_updateCount:(id)arg1;
- (void)_updateDividerImageForButtonState;
- (void)_updateHighlightingAtPoint:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_updateImages;
- (BOOL)autorepeat;
- (id)backgroundImageForState:(unsigned int)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)decrementImageForState:(unsigned int)arg1;
- (id)dividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)incrementImageForState:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isContinuous;
- (void)layoutSubviews;
- (double)maximumValue;
- (double)minimumValue;
- (void)setAutorepeat:(BOOL)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setContinuous:(BOOL)arg1;
- (void)setDecrementImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIncrementImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setStepValue:(double)arg1;
- (void)setTintColor:(id)arg1;
- (void)setValue:(double)arg1;
- (void)setWraps:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (double)stepValue;
- (double)value;
- (BOOL)wraps;

@end
