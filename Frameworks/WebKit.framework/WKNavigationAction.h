/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNavigationAction : NSObject {
    BOOL _canHandleRequest;
    int _navigationType;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    } _originalURL;
    struct RetainPtr<NSURLRequest> { 
        void *m_ptr; 
    } _request;
    struct RetainPtr<WKFrameInfo> { 
        void *m_ptr; 
    } _sourceFrame;
    struct RetainPtr<WKFrameInfo> { 
        void *m_ptr; 
    } _targetFrame;
    BOOL _userInitiated;
}

@property (nonatomic, readonly) BOOL _canHandleRequest;
@property (nonatomic, readonly) NSURL *_originalURL;
@property (setter=_setOriginalURL:, nonatomic, copy) NSURL *_originalURL;
@property (getter=_isUserInitiated, nonatomic, readonly) BOOL _userInitiated;
@property (nonatomic, readonly) int navigationType;
@property (nonatomic, copy) NSURLRequest *request;
@property (nonatomic, copy) WKFrameInfo *sourceFrame;
@property (nonatomic, copy) WKFrameInfo *targetFrame;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_canHandleRequest;
- (id)_initWithNavigationActionData:(const struct NavigationActionData { int x1; int x2; int x3; bool x4; bool x5; }*)arg1;
- (BOOL)_isUserInitiated;
- (id)_originalURL;
- (void)_setOriginalURL:(id)arg1;
- (id)description;
- (int)navigationType;
- (id)request;
- (void)setRequest:(id)arg1;
- (void)setSourceFrame:(id)arg1;
- (void)setTargetFrame:(id)arg1;
- (id)sourceFrame;
- (id)targetFrame;

@end
