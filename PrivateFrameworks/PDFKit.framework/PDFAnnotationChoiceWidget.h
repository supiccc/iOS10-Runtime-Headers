/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFAnnotationChoiceWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationChoiceWidgetPrivateVars * _private2;
}

- (void).cxx_destruct;
- (bool)accessibilityIsIgnored;
- (void)addOptionsToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (id)backgroundColor;
- (id)choices;
- (struct __CFDictionary { }*)commonCreateDictionaryRef;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultStringValue;
- (void)drawComboBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawDisclosureBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawListBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2;
- (id)fieldName;
- (id)font;
- (id)fontColor;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1 forPage:(id)arg2;
- (bool)isListChoice;
- (int)rotation;
- (void)secondaryInit;
- (void)setBackgroundColor:(id)arg1;
- (void)setChoices:(id)arg1;
- (void)setFieldName:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontColor:(id)arg1;
- (void)setIsListChoice:(bool)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)textForValue:(id)arg1;

@end