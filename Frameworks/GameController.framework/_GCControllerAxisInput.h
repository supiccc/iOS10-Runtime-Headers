/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCControllerAxisInput : GCControllerAxisInput {
    GCControllerElement *_collection;
    BOOL _digital;
    BOOL _flipped;
    GCControllerButtonInput *_negative;
    GCControllerButtonInput *_positive;
    float _value;
    id /* block */ _valueChangedHandler;
}

- (void).cxx_destruct;
- (BOOL)_setValue:(float)arg1;
- (id)collection;
- (id)initWithCollection:(id)arg1 flipped:(BOOL)arg2 digital:(BOOL)arg3;
- (BOOL)isAnalog;
- (BOOL)isDigital;
- (BOOL)isFlipped;
- (id)negative;
- (id)positive;
- (BOOL)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (float)value;
- (id /* block */)valueChangedHandler;

@end
