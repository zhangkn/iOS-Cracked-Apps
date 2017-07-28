//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FALCGiftNumChooseView.h"

@class NSMutableArray, UIButton, UIColor;

@interface FALCLiveRoomGiftNumChooseView : FALCGiftNumChooseView
{
    NSMutableArray *_giftNumImgArray;
    double _duration;
    UIButton *_cancelBtn;
    _Bool _isStoreLib;
    long long _price;
    long long _sum;
    unsigned long long _numType;
    long long _storeNum;
    long long _fullStatus;
    UIColor *_configBgColor;
}

@property(retain, nonatomic) UIColor *configBgColor; // @synthesize configBgColor=_configBgColor;
@property(nonatomic) long long fullStatus; // @synthesize fullStatus=_fullStatus;
@property(nonatomic) long long storeNum; // @synthesize storeNum=_storeNum;
@property(nonatomic) _Bool isStoreLib; // @synthesize isStoreLib=_isStoreLib;
@property(nonatomic) unsigned long long numType; // @synthesize numType=_numType;
@property(nonatomic) long long sum; // @synthesize sum=_sum;
@property(nonatomic) long long price; // @synthesize price=_price;
- (void).cxx_destruct;
- (void)fxGiftNumCellViewSelected:(id)arg1;
- (void)okAction;
- (void)doneNumInputAction;
- (void)setBackgroundViewColor:(id)arg1;
- (void)hiddenAnimate;
- (void)showAnimate;
- (void)initMainView;
- (void)initData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 num:(id)arg2 type:(long long)arg3;

@end
