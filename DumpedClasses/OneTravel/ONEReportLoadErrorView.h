//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface ONEReportLoadErrorView : UIView
{
    UIImageView *_errorImgView;
    UILabel *_errorLabel;
    UIButton *_loadButton;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) UIButton *loadButton; // @synthesize loadButton=_loadButton;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIImageView *errorImgView; // @synthesize errorImgView=_errorImgView;
- (void).cxx_destruct;
- (void)refreshContentView:(_Bool)arg1;
- (void)reloadButtonClick:(id)arg1;
- (void)configSubViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 clickBlock:(CDUnknownBlockType)arg2;

@end

