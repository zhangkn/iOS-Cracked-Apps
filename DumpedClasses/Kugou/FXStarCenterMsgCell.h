//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeButton, KGThemeImageView, KGThemeLabel, KGThemeView, UIImageView, UIView;

@interface FXStarCenterMsgCell : UITableViewCell
{
    id <FXMessageTurnToStarCenterDelegate> _delegate;
    double _contentHeight;
    KGThemeButton *_inRoomBtn;
    KGThemeLabel *_timeLabel;
    KGThemeLabel *_titleLabel;
    UIImageView *_headerImageV;
    KGThemeLabel *_guestLabel;
    KGThemeLabel *_talkTimeLabel;
    KGThemeLabel *_guestDescLabel;
    UIView *_lineView;
    KGThemeView *_contentBgView;
    KGThemeImageView *_btnSelectView;
}

@property(retain, nonatomic) KGThemeImageView *btnSelectView; // @synthesize btnSelectView=_btnSelectView;
@property(retain, nonatomic) KGThemeView *contentBgView; // @synthesize contentBgView=_contentBgView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) KGThemeLabel *guestDescLabel; // @synthesize guestDescLabel=_guestDescLabel;
@property(retain, nonatomic) KGThemeLabel *talkTimeLabel; // @synthesize talkTimeLabel=_talkTimeLabel;
@property(retain, nonatomic) KGThemeLabel *guestLabel; // @synthesize guestLabel=_guestLabel;
@property(retain, nonatomic) UIImageView *headerImageV; // @synthesize headerImageV=_headerImageV;
@property(retain, nonatomic) KGThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) KGThemeLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) KGThemeButton *inRoomBtn; // @synthesize inRoomBtn=_inRoomBtn;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) __weak id <FXMessageTurnToStarCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)inRoomBtnClick:(id)arg1;
- (_Bool)isThisYear:(id)arg1;
- (id)isShowDate:(id)arg1;
- (double)calculateCellHeightWithContent:(id)arg1;
- (id)timeFormatted:(id)arg1;
- (void)updateViewWithModel:(id)arg1 andTag:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
