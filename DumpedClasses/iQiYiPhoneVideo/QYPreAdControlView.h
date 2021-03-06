//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYVIPTimeViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, QYAdsLogoView, QYPlayerViewController, QYPreAdControlViewVRManger, QYPreadFingerHintView, UIButton, UILabel;
@protocol QYPreAdControlViewDelegate;

@interface QYPreAdControlView : UIView <QYVIPTimeViewDelegate>
{
    UIButton *_switchScreenBtn;
    UILabel *_titleLabel;
    _Bool _isBeginValid;
    _Bool _isMultipleEpisodes;
    int _curMode;
    int _curStep;
    _Bool _isAdSound;
    _Bool _isMute;
    _Bool _curIsMute;
    _Bool _isHardChangeSound;
    double _soundValue;
    QYAdsLogoView *_adsLogoView;
    QYPlayerViewController *_playerViewController;
    _Bool _isSetAdBgViewFrame;
    _Bool _canResetAirplayButton;
    _Bool _mRAd;
    _Bool _showMRAdView;
    id <QYPreAdControlViewDelegate> _delegate;
    NSMutableDictionary *_adMessageDictionary;
    NSMutableDictionary *_adMessages;
    NSString *_currentAdID;
    QYPreAdControlViewVRManger *_adVRManger;
    QYPreadFingerHintView *_preadClickHintView;
    long long _touchMoveState;
}

@property(nonatomic) long long touchMoveState; // @synthesize touchMoveState=_touchMoveState;
@property(retain, nonatomic) QYAdsLogoView *adsLogoView; // @synthesize adsLogoView=_adsLogoView;
@property(nonatomic) _Bool showMRAdView; // @synthesize showMRAdView=_showMRAdView;
@property(nonatomic, getter=isMRAd) _Bool mRAd; // @synthesize mRAd=_mRAd;
@property(retain, nonatomic) QYPreadFingerHintView *preadClickHintView; // @synthesize preadClickHintView=_preadClickHintView;
@property(retain, nonatomic) QYPreAdControlViewVRManger *adVRManger; // @synthesize adVRManger=_adVRManger;
@property(retain, nonatomic) NSString *currentAdID; // @synthesize currentAdID=_currentAdID;
@property(retain, nonatomic) NSMutableDictionary *adMessages; // @synthesize adMessages=_adMessages;
@property(retain, nonatomic) NSMutableDictionary *adMessageDictionary; // @synthesize adMessageDictionary=_adMessageDictionary;
@property(nonatomic) __weak id <QYPreAdControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isPreadOnlyButtonClick;
- (_Bool)isOpenInMainPlayerController;
- (void)dealloc;
- (float)volumeValue;
- (void)doMagicHandle:(id)arg1;
- (void)layoutViewsFrame;
- (void)refreshAdTimeRelatedView;
- (void)removeAdsSubViewForNextPlay;
- (void)removeAdsSubViewForAdsEnd;
- (void)adRollend:(int)arg1;
- (void)adRollBegin:(int)arg1;
- (void)releasePreadClickHintView;
- (void)createPreadClickHintView:(struct CGRect)arg1;
- (void)updateAdsViewWithAdTime:(double)arg1 isCanClick:(_Bool)arg2;
- (void)adSoundOnOff:(id)arg1;
- (void)updateContentSound;
- (void)updateAndRecordAdSound;
- (void)resetState;
- (void)setPlayButtonState:(_Bool)arg1;
- (void)continueOtherAds:(id)arg1;
- (void)doWatchVIPMovie;
- (void)doAdsDetailBtn;
- (CDStruct_60d9add8)getAdTimeFrameByTureViewScore:(int)arg1 totalScore:(int)arg2 hintText:(id)arg3 isTrueView:(_Bool)arg4;
- (struct CGRect)getAdTimeFrame;
- (struct CGRect)getAdsButtonRect;
- (void)showAdButton;
- (void)closeAdBtnClick:(id)arg1;
- (void)jumpAdPlay;
- (_Bool)isShowAdTimeView;
- (int)curLabelAdTime;
- (void)showOrHiddenAdDetailBtn:(_Bool)arg1;
- (_Bool)isShowMRAdContinueView;
- (void)updateAdTimeViewForMRAid:(_Bool)arg1;
- (void)updateAdTimeView:(int)arg1;
- (void)resetAirplayButton;
- (void)updateVIPAdView:(int)arg1;
- (void)hideTimeView:(_Bool)arg1;
- (_Bool)isCurrentAdCreativeMidsoleAd;
- (_Bool)isVIPCardAd:(id)arg1;
- (_Bool)isCurrentAdVIP;
- (id)getVIPAdLongTitle:(id)arg1;
- (id)getVIPAdShortTitle:(id)arg1;
- (id)getPreadDetailText;
- (void)removeCreativeMidsoleAd;
- (void)removeVIPAdVertise;
- (void)callBackNextADInfo:(id)arg1;
- (void)setAdVIPTimeViewMode:(int)arg1;
- (void)setAdVIPTitleViewMode:(int)arg1;
- (void)showVipAdvertise:(id)arg1 andTime:(int)arg2;
- (void)updateAdVIPWatchBtnWithVIPAdMessage:(id)arg1;
- (void)updateVIPTextAtMainThread;
- (int)updatePreadViewStyle;
- (id)getPreAdModel;
- (int)getPreadViewStyle;
- (_Bool)isLocalFileAndNoWifi;
- (_Bool)canPreadShowClickHint;
- (_Bool)canPreadShowDetailButton;
- (void)setCurrentAd:(id)arg1;
- (void)advertise:(unsigned int)arg1 dataReady:(id)arg2;
- (void)callBackADInfo:(id)arg1;
- (void)showAdTimeView:(int)arg1;
- (void)closeAdsLogoView;
- (void)showAdsLogoView:(id)arg1;
- (void)doSwitchScreen:(id)arg1;
- (void)changeForPlayerMode:(int)arg1 step:(int)arg2;
- (void)switchPlayOnOff:(id)arg1;
- (void)backPlayer:(id)arg1;
- (void)updateViewsShowOrHidden;
- (void)showControlSubView;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (void)jumpVIPAdvertise:(id)arg1;
- (void)setPreadClickHintView;
- (id)initWithFrame:(struct CGRect)arg1 andPlayerViewController:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)resetAdSoundState;
- (void)updateAvailableDevices:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

