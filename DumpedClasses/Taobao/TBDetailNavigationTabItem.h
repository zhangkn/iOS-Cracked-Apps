//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBEventSubscriber.h"

@class NSString, TBDetailNavigationTabItemViewModel, UIImageView, UILabel, UITapGestureRecognizer;

@interface TBDetailNavigationTabItem : UIView <TBEventSubscriber>
{
    _Bool _highlighted;
    _Bool _useFgColor2;
    _Bool _locatorFlag;
    TBDetailNavigationTabItemViewModel *_viewModel;
    UIImageView *_imgView;
    UILabel *_titleLabel;
    UIImageView *_titleImgView;
    UITapGestureRecognizer *_gesture;
    NSString *_locatorId;
}

@property(nonatomic) _Bool locatorFlag; // @synthesize locatorFlag=_locatorFlag;
@property(retain, nonatomic) NSString *locatorId; // @synthesize locatorId=_locatorId;
@property(retain, nonatomic) UITapGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) UIImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(nonatomic) _Bool useFgColor2; // @synthesize useFgColor2=_useFgColor2;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) TBDetailNavigationTabItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)unRegisterSubscriber;
- (void)registSubscriber;
- (id)handleEvent:(id)arg1;
- (void)dealloc;
- (void)componentClicked:(id)arg1;
- (double)getTitleLeft;
- (void)setIcon;
- (void)adjustByImageSize:(struct CGSize)arg1;
- (void)setupLocatorId;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

