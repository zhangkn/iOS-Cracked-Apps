//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AUActivityIndicatorView, BeeVideoErrorView, BeeVideoPlayerToolBar, BeeVideoPlayerTopBar, BeeVideoProgressView, UIButton;

@interface BeeVideoPlayerControlView : UIView
{
    id <BeeVideoPlayerControlViewDelegate> _delegate;
    BeeVideoPlayerTopBar *_topBar;
    BeeVideoPlayerToolBar *_toolBar;
    UIButton *_centerPlayBtn;
    BeeVideoProgressView *_progressView;
    AUActivityIndicatorView *_loadingView;
    BeeVideoErrorView *_errorView;
}

@property(retain, nonatomic) BeeVideoErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) AUActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) BeeVideoProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *centerPlayBtn; // @synthesize centerPlayBtn=_centerPlayBtn;
@property(retain, nonatomic) BeeVideoPlayerToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) BeeVideoPlayerTopBar *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) __weak id <BeeVideoPlayerControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showLoading:(id)arg1;
- (void)btnClicked:(id)arg1;
- (void)resetUI;
- (void)updateUIWithState:(long long)arg1;
- (void)showTopBar:(_Bool)arg1;
- (void)showErrorWithInfo:(id)arg1;
- (void)showCenterPlay:(_Bool)arg1;
- (void)layoutSubviews;

@end
