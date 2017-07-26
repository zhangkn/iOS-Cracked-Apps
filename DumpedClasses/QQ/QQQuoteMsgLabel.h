//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQRecentLabel, UILabel;

@interface QQQuoteMsgLabel : UIView
{
    QQRecentLabel *_msgLabel;
    UILabel *_quoteLabel;
    struct CGRect _maxRect;
}

@property(nonatomic) struct CGRect maxRect; // @synthesize maxRect=_maxRect;
@property(retain, nonatomic) UILabel *quoteLabel; // @synthesize quoteLabel=_quoteLabel;
@property(retain, nonatomic) QQRecentLabel *msgLabel; // @synthesize msgLabel=_msgLabel;
- (void)dealloc;
- (void)gotoQutoMsg;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setFontFromTextView:(id)arg1;
- (void)setContent:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
