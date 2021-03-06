//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MFCloudImageView, UIImageView, UILabel;

@interface CHomeNewMessagesRemindView : UIView
{
    id <CHomeNewMessagesRemindViewDelegate> _delegate;
    UILabel *_titleLab;
    UILabel *_countLab;
    UIView *_redDot;
    MFCloudImageView *_headView;
    UIImageView *_arrowIcon;
    UIView *_bgView;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) MFCloudImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UILabel *countLab; // @synthesize countLab=_countLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(nonatomic) __weak id <CHomeNewMessagesRemindViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tapViewAction:(id)arg1;
- (void)layoutSubviews;
- (void)refreshWithRemindCount:(long long)arg1 headUrl:(id)arg2 business:(id)arg3;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

