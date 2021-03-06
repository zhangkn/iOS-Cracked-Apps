//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FaceWallImageDelegate.h"

@class FaceWallImageView, NSString, QQChatViewTable, QQGroupRobotWelMsgExInfo, QQGroupRobotWelcomeAIOModel, UIActivityIndicatorView, UIImageView, UILabel;

@interface QQGroupRobotWelAIOMsgView : UIView <FaceWallImageDelegate>
{
    _Bool _isZhuanJuHua;
    QQGroupRobotWelcomeAIOModel *_groupRobotAIOModel;
    QQGroupRobotWelMsgExInfo *_robotExInfo;
    UILabel *_title;
    UILabel *_voiceNumLabel;
    UIView *_backgroudView;
    UIView *_contentView;
    FaceWallImageView *_iconDownloader;
    UIImageView *_iconImgView;
    QQChatViewTable *_chatViewTable;
    double _nickNameHeight;
    UIActivityIndicatorView *_juHuaView;
    UIImageView *_voiceImgView;
}

+ (id)labelWithFontSize:(double)arg1 color:(id)arg2;
+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) UIImageView *voiceImgView; // @synthesize voiceImgView=_voiceImgView;
@property(nonatomic) _Bool isZhuanJuHua; // @synthesize isZhuanJuHua=_isZhuanJuHua;
@property(retain, nonatomic) UIActivityIndicatorView *juHuaView; // @synthesize juHuaView=_juHuaView;
@property(nonatomic) double nickNameHeight; // @synthesize nickNameHeight=_nickNameHeight;
@property(nonatomic) __weak QQChatViewTable *chatViewTable; // @synthesize chatViewTable=_chatViewTable;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) FaceWallImageView *iconDownloader; // @synthesize iconDownloader=_iconDownloader;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(retain, nonatomic) UILabel *voiceNumLabel; // @synthesize voiceNumLabel=_voiceNumLabel;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) QQGroupRobotWelMsgExInfo *robotExInfo; // @synthesize robotExInfo=_robotExInfo;
@property(retain, nonatomic) QQGroupRobotWelcomeAIOModel *groupRobotAIOModel; // @synthesize groupRobotAIOModel=_groupRobotAIOModel;
- (void).cxx_destruct;
- (void)notifyNetWorkError:(id)arg1;
- (void)notifyDownloadFail:(id)arg1;
- (void)notifyDownloadSuccess:(id)arg1;
- (void)onAnimationStop;
- (void)onClickMsgView:(id)arg1;
- (void)voiceOverSupport;
- (struct CGRect)bubleFrame;
- (void)setModel:(id)arg1;
- (void)juHuaZhuan:(id)arg1;
- (void)checkjuHua;
- (void)layoutSubviews;
- (void)commonInit;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithChatViewTable:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

