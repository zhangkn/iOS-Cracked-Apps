//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class QRJXIconView;

@interface QYReaderCardlyCategoryView : UIControl
{
    QRJXIconView *_paihangBtn;
    QRJXIconView *_mianfeiBtn;
    QRJXIconView *_bookShorageBtn;
    QRJXIconView *_baoyueBtn;
    QRJXIconView *_vipBtn;
}

+ (double)getCardH;
@property(retain) QRJXIconView *vipBtn; // @synthesize vipBtn=_vipBtn;
@property(retain) QRJXIconView *baoyueBtn; // @synthesize baoyueBtn=_baoyueBtn;
@property(retain, nonatomic) QRJXIconView *bookShorageBtn; // @synthesize bookShorageBtn=_bookShorageBtn;
@property(retain, nonatomic) QRJXIconView *mianfeiBtn; // @synthesize mianfeiBtn=_mianfeiBtn;
@property(retain, nonatomic) QRJXIconView *paihangBtn; // @synthesize paihangBtn=_paihangBtn;
- (void).cxx_destruct;
- (void)vipClick:(id)arg1;
- (void)baoyueClick:(id)arg1;
- (void)bookShortageClick:(id)arg1;
- (void)mianfeiClick:(id)arg1;
- (void)paihangClick:(id)arg1;
- (void)loadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

