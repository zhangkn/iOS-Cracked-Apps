//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

@class KGThemeLabel, KGThemeLine, KTVPlayerBaseInfo, KtvUserAvatar, UIImageView;

@interface KTVOneKeyInviteCell : KFCommedTableViewCell
{
    KTVPlayerBaseInfo *_playerInfo;
    KtvUserAvatar *_headImgView;
    KGThemeLabel *_nickName;
    UIImageView *_sexImgview;
    KGThemeLabel *_hotcount;
    KGThemeLine *_topSeparateline;
    KGThemeLine *_bottomSeparateline;
}

@property(retain, nonatomic) KGThemeLine *bottomSeparateline; // @synthesize bottomSeparateline=_bottomSeparateline;
@property(retain, nonatomic) KGThemeLine *topSeparateline; // @synthesize topSeparateline=_topSeparateline;
@property(retain, nonatomic) KGThemeLabel *hotcount; // @synthesize hotcount=_hotcount;
@property(retain, nonatomic) UIImageView *sexImgview; // @synthesize sexImgview=_sexImgview;
@property(retain, nonatomic) KGThemeLabel *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) KtvUserAvatar *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) KTVPlayerBaseInfo *playerInfo; // @synthesize playerInfo=_playerInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
