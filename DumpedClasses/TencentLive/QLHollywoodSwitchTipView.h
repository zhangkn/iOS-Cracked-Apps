//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLHollywoodBaseTipView.h"

@class NSString, UILabel;

@interface QLHollywoodSwitchTipView : QLHollywoodBaseTipView
{
    UILabel *_leftLabel;
    UILabel *_leftLabel2;
    UILabel *_switchLabel;
    NSString *_tipStr;
    CDUnknownBlockType _switchClickHandle;
}

@property(copy, nonatomic) CDUnknownBlockType switchClickHandle; // @synthesize switchClickHandle=_switchClickHandle;
- (void).cxx_destruct;
- (_Bool)shouldShowTipView;
- (void)layoutSubviews;
- (void)splitString;
- (void)setObject:(id)arg1;
- (void)switchVIPBtnClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end
