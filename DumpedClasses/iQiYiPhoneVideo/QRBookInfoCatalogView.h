//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel;

@interface QRBookInfoCatalogView : UIControl
{
    UILabel *_chapterNumLbl;
    UILabel *_updateTimeLbl;
    UIImageView *_rightArrowImageView;
    UILabel *_titleLbl;
}

@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) UIImageView *rightArrowImageView; // @synthesize rightArrowImageView=_rightArrowImageView;
@property(retain, nonatomic) UILabel *updateTimeLbl; // @synthesize updateTimeLbl=_updateTimeLbl;
@property(retain, nonatomic) UILabel *chapterNumLbl; // @synthesize chapterNumLbl=_chapterNumLbl;
- (void).cxx_destruct;
- (void)setUpdateTime:(long long)arg1;
- (void)hiddenDetailView;
- (void)setChapterNumber:(long long)arg1 isFinish:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

