//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBSNSBasicServiceDelegate.h"
#import "TBSNSNetServiceContainerDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, TBSNSNetServiceContainer, TBSNSShopTimeLineItem, TBSNSTopicService, UIButton, UIImageView, UILabel;

@interface TBSNSTopicHeaderView : UIView <UIAlertViewDelegate, TBSNSBasicServiceDelegate, TBSNSNetServiceContainerDelegate>
{
    CDUnknownBlockType _onCancelHostSuccess;
    TBSNSShopTimeLineItem *_headerItem;
    double _headerHeight;
    UIImageView *_bgImgView;
    UIImageView *_headerImgView;
    UILabel *_nameLabel;
    UILabel *_hotLabel;
    UILabel *_followLabel;
    UILabel *_hostNameLabel;
    UIView *_descriptionBGView;
    UILabel *_descriptionLabel;
    UIButton *_requestHostBtn;
    UIImageView *_requestHostImgView;
    UILabel *_requestHostLabel;
    TBSNSNetServiceContainer *_servicesContainer;
    TBSNSTopicService *_topicService;
}

@property(retain, nonatomic) TBSNSTopicService *topicService; // @synthesize topicService=_topicService;
@property(retain, nonatomic) TBSNSNetServiceContainer *servicesContainer; // @synthesize servicesContainer=_servicesContainer;
@property(retain, nonatomic) UILabel *requestHostLabel; // @synthesize requestHostLabel=_requestHostLabel;
@property(retain, nonatomic) UIImageView *requestHostImgView; // @synthesize requestHostImgView=_requestHostImgView;
@property(retain, nonatomic) UIButton *requestHostBtn; // @synthesize requestHostBtn=_requestHostBtn;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *descriptionBGView; // @synthesize descriptionBGView=_descriptionBGView;
@property(retain, nonatomic) UILabel *hostNameLabel; // @synthesize hostNameLabel=_hostNameLabel;
@property(retain, nonatomic) UILabel *followLabel; // @synthesize followLabel=_followLabel;
@property(retain, nonatomic) UILabel *hotLabel; // @synthesize hotLabel=_hotLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *headerImgView; // @synthesize headerImgView=_headerImgView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) TBSNSShopTimeLineItem *headerItem; // @synthesize headerItem=_headerItem;
@property(copy, nonatomic) CDUnknownBlockType onCancelHostSuccess; // @synthesize onCancelHostSuccess=_onCancelHostSuccess;
- (void).cxx_destruct;
- (void)result:(_Bool)arg1 markT:(int)arg2 withData:(id)arg3;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)dealloc;
- (void)showToast:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onRequestHostBtnClicked:(id)arg1;
- (_Bool)isHost;
- (_Bool)isRequestBarIsApplyHost;
- (void)setupRequestBarWithIsApply:(_Bool)arg1 descriptionHeight:(double)arg2;
- (void)createViews;
- (id)initWithHeaderItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

