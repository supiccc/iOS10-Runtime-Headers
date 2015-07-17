/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCControlsView : UIView {
    RCAVState *_AVState;
    UIColor *_bottomSeparatorLineColor;
    BOOL _canEnableCaptureButton;
    BOOL _canEnableDoneButton;
    BOOL _canEnablePreviewButton;
    BOOL _canRecord;
    int _controlsConfiguration;
    <RCControlsViewDelegate> *_delegate;
    UIButton *_doneButton;
    RCLayoutMetrics *_layoutMetrics;
    UIButton *_leftPlayStateButton;
    UIAlertController *_noMicAlertViewController;
    RCRecorderStateButton *_recordingStateButton;
    BOOL _showsBottomSeparatorLine;
    float _topPadding;
    NSLayoutConstraint *_topPaddingCn;
}

@property (nonatomic, copy) RCAVState *AVState;
@property (nonatomic, readonly) UIColor *bottomSeparatorLineColor;
@property (nonatomic) BOOL canEnableCaptureButton;
@property (nonatomic) BOOL canEnableDoneButton;
@property (nonatomic) BOOL canEnablePreviewButton;
@property (nonatomic) BOOL canRecord;
@property (nonatomic) int controlsConfiguration;
@property (nonatomic) <RCControlsViewDelegate> *delegate;
@property (nonatomic, readonly) UIButton *doneButton;
@property (nonatomic, retain) RCLayoutMetrics *layoutMetrics;
@property (nonatomic, readonly) UIButton *leftPlayStateButton;
@property (nonatomic, readonly) UIAlertController *noMicAlertViewController;
@property (nonatomic, readonly) RCRecorderStateButton *recordingStateButton;
@property (nonatomic) BOOL showsBottomSeparatorLine;
@property (nonatomic) float topPadding;
@property (nonatomic, readonly) NSLayoutConstraint *topPaddingCn;

- (void).cxx_destruct;
- (id)AVState;
- (int)_AVCaptureState;
- (int)_AVPreviewState;
- (void)_doneButtonPressed:(id)arg1;
- (void)_inputAvailabilityDidChangeNotification:(id)arg1;
- (BOOL)_isCaptureButtonEnabled;
- (BOOL)_isPreviewButtonEnabled;
- (BOOL)_isRecordingOrPausedRecording;
- (id)_leftPlayStateImageForAVPreviewState:(int)arg1;
- (void)_playStateButtonPressed:(id)arg1;
- (id)_recordButton;
- (void)_recordingStateButtonPressed:(id)arg1;
- (void)_updateButtonsAnimated:(BOOL)arg1;
- (id)bottomSeparatorLineColor;
- (BOOL)canEnableCaptureButton;
- (BOOL)canEnableDoneButton;
- (BOOL)canEnablePreviewButton;
- (BOOL)canRecord;
- (int)controlsConfiguration;
- (id)delegate;
- (id)doneButton;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (id)layoutMetrics;
- (id)leftPlayStateButton;
- (id)noMicAlertViewController;
- (void)performFailedToStartRecordingActions;
- (void)performRecordButtonPress;
- (id)recordingStateButton;
- (void)setAVState:(id)arg1;
- (void)setCanEnableCaptureButton:(BOOL)arg1;
- (void)setCanEnableDoneButton:(BOOL)arg1;
- (void)setCanEnablePreviewButton:(BOOL)arg1;
- (void)setCanRecord:(BOOL)arg1;
- (void)setControlsConfiguration:(int)arg1;
- (void)setControlsConfiguration:(int)arg1 animate:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLayoutMetrics:(id)arg1;
- (void)setShowsBottomSeparatorLine:(BOOL)arg1;
- (void)setTopPadding:(float)arg1;
- (BOOL)showsBottomSeparatorLine;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (float)topPadding;
- (id)topPaddingCn;
- (void)updateConstraints;

@end
