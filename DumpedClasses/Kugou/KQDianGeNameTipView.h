//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NSTimer, UIImageView, UILabel;

@interface KQDianGeNameTipView : UIView
{
    _Bool _isStop;
    _Bool _isChange;
    UIView *_bgView;
    UIImageView *_peopleImgView;
    UILabel *_nameLabel;
    NSString *_name;
    long long _userId;
    NSString *_userImg;
    NSTimer *_spaceTimer;
}

@property(nonatomic) _Bool isChange; // @synthesize isChange=_isChange;
@property(nonatomic) _Bool isStop; // @synthesize isStop=_isStop;
@property(retain, nonatomic) NSTimer *spaceTimer; // @synthesize spaceTimer=_spaceTimer;
@property(copy, nonatomic) NSString *userImg; // @synthesize userImg=_userImg;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *peopleImgView; // @synthesize peopleImgView=_peopleImgView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)refreshUI;
- (void)changeDianGeName:(id)arg1 andUserId:(long long)arg2 andUserImg:(id)arg3;
- (void)stopAnimation;
- (void)startAnimation;
- (void)animationAgain;
- (void)animationFun;
- (struct CGSize)calculateTextSize;
- (void)initView;
- (void)dealloc;
- (id)initWithDianGeName:(id)arg1 andUserId:(long long)arg2 andUserImg:(id)arg3;

@end
