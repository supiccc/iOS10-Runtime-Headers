/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUOverlayAction : NSObject {
    int _animationCount;
    UIViewController *_otherViewController;
    SUOverlayTransition *_transition;
    int _type;
    UIViewController *_viewController;
}

@property (nonatomic) int actionType;
@property (nonatomic) int animationCount;
@property (nonatomic, retain) UIViewController *otherViewController;
@property (nonatomic, retain) SUOverlayTransition *transition;
@property (nonatomic, retain) UIViewController *viewController;

- (int)actionType;
- (int)animationCount;
- (void)dealloc;
- (id)otherViewController;
- (void)setActionType:(int)arg1;
- (void)setAnimationCount:(int)arg1;
- (void)setOtherViewController:(id)arg1;
- (void)setTransition:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)transition;
- (id)viewController;

@end
