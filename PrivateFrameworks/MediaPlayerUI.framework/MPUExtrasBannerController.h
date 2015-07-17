/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasBannerController : NSObject {
    UIView *_anchorView;
    NSLayoutConstraint *_anchorViewConstraint;
    IKDocumentBannerElement *_bannerElement;
    UIImageView *_bannerImageView;
    NSLayoutConstraint *_bannerImageViewHeightConstraint;
    NSArray *_installedConstraints;
    UIView *_installedView;
    UIView *_maskView;
    UIScrollView *_trackingScrollView;
    UIImageView *_vignetteImageView;
    unsigned int _vignetteType;
}

@property (nonatomic, readonly) NSLayoutConstraint *anchorConstraint;
@property (nonatomic, retain) UIView *anchorView;
@property (nonatomic, readonly) IKDocumentBannerElement *bannerElement;
@property (nonatomic, retain) UIImageView *bannerImageView;
@property (nonatomic, retain) NSLayoutConstraint *bannerImageViewHeightConstraint;
@property (nonatomic, retain) NSArray *installedConstraints;
@property (nonatomic) UIView *installedView;
@property (nonatomic, retain) UIView *maskView;
@property (nonatomic) UIScrollView *trackingScrollView;
@property (nonatomic, retain) UIImageView *vignetteImageView;
@property (nonatomic) unsigned int vignetteType;

- (void).cxx_destruct;
- (void)_configureBanner;
- (void)_doAllSetup;
- (void)_updateVignetteImage;
- (id)anchorConstraint;
- (id)anchorView;
- (id)bannerElement;
- (id)bannerImageView;
- (id)bannerImageViewHeightConstraint;
- (id)initWithBannerElement:(id)arg1;
- (void)installBannerOnView:(id)arg1 anchoredToScrollView:(id)arg2;
- (id)installedConstraints;
- (id)installedView;
- (id)maskView;
- (void)setAnchorView:(id)arg1;
- (void)setBannerImageView:(id)arg1;
- (void)setBannerImageViewHeightConstraint:(id)arg1;
- (void)setInstalledConstraints:(id)arg1;
- (void)setInstalledView:(id)arg1;
- (void)setMaskView:(id)arg1;
- (void)setTrackingScrollView:(id)arg1;
- (void)setVignetteImageView:(id)arg1;
- (void)setVignetteType:(unsigned int)arg1;
- (id)trackingScrollView;
- (id)vignetteImageView;
- (unsigned int)vignetteType;

@end
