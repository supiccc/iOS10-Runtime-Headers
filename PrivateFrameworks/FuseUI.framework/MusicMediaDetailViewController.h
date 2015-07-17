/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaDetailViewController : UIViewController <MusicLayoutMarginProxyViewDelegate, MusicMediaDetailHeaderViewControllerDelegate, MusicMediaDetailSplitViewControllerDelegate, SKUINavigationBarDisplayConfiguring, SKUIProxyScrollViewDelegate> {
    MusicMediaDetailTintInformation *_detailTintInformation;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _externalContentInset;
    BOOL _hairlineRightInsetIgnoresLayoutMargin;
    MusicHairlineView *_hairlineView;
    BOOL _hasAttemptedSplitDetailViewControllerCreation;
    BOOL _hasReceivedViewDidAppear;
    UIViewController<MusicMediaDetailHeaderContentViewController> *_headerContentViewController;
    float _headerHeight;
    float _headerTransitionProgress;
    float _headerVerticalOffset;
    UIViewController<MusicMediaDetailHeaderViewController> *_headerViewController;
    BOOL _isHandlingScrollViewUpdate;
    float _maximumHeaderHeight;
    float _maximumHeaderHeightAdditions;
    float _navigationTitleViewAlphaTransitionProgressDelay;
    SKUIProxyScrollView *_proxyScrollView;
    BOOL _showingSplitDetailViewController;
    UIViewController<MusicMediaDetailSplitViewController> *_splitDetailViewController;
    id /* block */ _splitDetailViewControllerCreationBlock;
    UIViewController<MusicMediaDetailSplitViewController> *_splitMainViewController;
    NSMapTable *_splitScrollViewToScrollingContext;
    NSArray *_splitScrollViews;
    BOOL _supportsSplitDetailViewController;
    NSMapTable *_viewControllerToClippingView;
}

@property (nonatomic, readonly) UIScrollView *currentPrimaryScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) MusicMediaDetailTintInformation *detailTintInformation;
@property (nonatomic) BOOL hairlineRightInsetIgnoresLayoutMargin;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIViewController<MusicMediaDetailHeaderContentViewController> *headerContentViewController;
@property (nonatomic, readonly) float headerTransitionProgress;
@property (nonatomic, retain) UIViewController<MusicMediaDetailHeaderViewController> *headerViewController;
@property (nonatomic) float maximumHeaderHeightAdditions;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } maximumHeaderSize;
@property (nonatomic) float navigationTitleViewAlphaTransitionProgressDelay;
@property (getter=isShowingSplitDetailViewController, nonatomic, readonly) BOOL showingSplitDetailViewController;
@property (nonatomic, readonly) UIViewController<MusicMediaDetailSplitViewController> *splitDetailViewController;
@property (nonatomic, copy) id /* block */ splitDetailViewControllerCreationBlock;
@property (getter=isSplitDetailViewControllerLoaded, nonatomic, readonly) BOOL splitDetailViewControllerLoaded;
@property (nonatomic, retain) UIViewController<MusicMediaDetailSplitViewController> *splitMainViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsSplitDetailViewController;

- (void).cxx_destruct;
- (void)_addViewControllerViewToHierarchy:(id)arg1;
- (void)_applyDetailTintInformation;
- (float)_calculateDisappearanceProgressForHeaderHeight:(float)arg1;
- (id)_calculateHairlineColor;
- (BOOL)_calculateShowingSplitDetailViewController;
- (BOOL)_calculateSupportsSplitDetailViewControllerAllowingMakingSplitDetailViewController:(BOOL)arg1;
- (id)_currentPrimaryScrollView;
- (float)_effectiveHeaderHeightForContentOffset:(struct CGPoint { float x1; float x2; })arg1 externalScrollViewContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (BOOL)_hasVisibleNavigationBar;
- (float)_minimumHeaderHeight;
- (void)_removeViewControllerViewFromHierarchy:(id)arg1;
- (id)_scrollingContextForSplitScrollView:(id)arg1;
- (id)_splitDetailContentScrollView;
- (id)_splitDetailViewController;
- (id)_splitMainContentScrollView;
- (id)_splitMainViewController;
- (void)_updateHairlineProperties;
- (void)_updateHeaderViewFrameWithHeaderHeight:(float)arg1;
- (BOOL)_updateMaximumHeaderHeight;
- (void)_updateScrollViewConsistentContentOffset:(id)arg1;
- (void)_updateScrollViewWithOriginatingScrollView:(id)arg1 contentOffset:(struct CGPoint { float x1; float x2; })arg2 shouldAlwaysAdjustContentOffset:(BOOL)arg3;
- (void)_updateScrollViewWithOriginatingScrollView:(id)arg1 shouldAlwaysAdjustContentOffset:(BOOL)arg2;
- (void)_updateSplitDetailViewControllerVisibility;
- (BOOL)_updateSplitScrollViews;
- (BOOL)allowsHairline;
- (BOOL)allowsShowingSplitDetailViewController;
- (id)contentScrollView;
- (id)currentPrimaryScrollView;
- (void)dealloc;
- (id)detailTintInformation;
- (void)detailTintInformationDidChange;
- (BOOL)hairlineRightInsetIgnoresLayoutMargin;
- (id)headerContentViewController;
- (float)headerTransitionProgress;
- (id)headerViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isShowingSplitDetailViewController;
- (BOOL)isSplitDetailViewControllerLoaded;
- (void)layoutMarginProxyViewLayoutMarginsDidChange:(id)arg1;
- (void)loadView;
- (float)maximumHeaderHeightAdditions;
- (struct CGSize { float x1; float x2; })maximumHeaderSize;
- (void)maximumMediaDetailHeaderHeightDidChangeForHeaderViewController:(id)arg1;
- (void)mediaDetailSplitViewController:(id)arg1 contentScrollViewWillEndDraggingWithVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)mediaDetailSplitViewControllerContentScrollViewContentSizeDidChange:(id)arg1;
- (void)mediaDetailSplitViewControllerContentScrollViewDidScroll:(id)arg1;
- (int)navigationBarTintAdjustmentMode;
- (id)navigationBarTintColor;
- (id)navigationBarTitleTextTintColor;
- (float)navigationTitleViewAlphaTransitionProgressDelay;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (int)preferredStatusBarStyle;
- (BOOL)prefersNavigationBarBackgroundViewHidden;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)setDetailTintInformation:(id)arg1;
- (void)setHairlineRightInsetIgnoresLayoutMargin:(BOOL)arg1;
- (void)setHeaderContentViewController:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setMaximumHeaderHeightAdditions:(float)arg1;
- (void)setNavigationTitleViewAlphaTransitionProgressDelay:(float)arg1;
- (void)setNeedsAllowsHairlineUpdate;
- (void)setNeedsAllowsShowingSplitDetailViewControllerUpdate;
- (void)setSplitDetailViewControllerCreationBlock:(id /* block */)arg1;
- (void)setSplitMainViewController:(id)arg1;
- (void)showingSplitDetailViewControllerDidChange;
- (id)splitDetailViewController;
- (id /* block */)splitDetailViewControllerCreationBlock;
- (id)splitMainViewController;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)supportsSplitDetailViewController;
- (void)supportsSplitDetailViewControllerDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithHeaderHeight:(float)arg1 maximumHeaderHeight:(float)arg2 headerVerticalOffset:(float)arg3 transitionProgress:(float)arg4;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
