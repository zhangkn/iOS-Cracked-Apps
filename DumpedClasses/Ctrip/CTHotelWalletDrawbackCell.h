//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class UIButton, UILabel;

@interface CTHotelWalletDrawbackCell : CTCustomeGroupTableViewCell
{
    UIButton *_illustrationBtn;
    UIButton *_drawBackBtn;
    UILabel *_lbDrawbackTitle;
    UILabel *_lbDrawbackDesc;
}

@property(nonatomic) __weak UILabel *lbDrawbackDesc; // @synthesize lbDrawbackDesc=_lbDrawbackDesc;
@property(nonatomic) __weak UILabel *lbDrawbackTitle; // @synthesize lbDrawbackTitle=_lbDrawbackTitle;
@property(nonatomic) __weak UIButton *drawBackBtn; // @synthesize drawBackBtn=_drawBackBtn;
@property(retain, nonatomic) UIButton *illustrationBtn; // @synthesize illustrationBtn=_illustrationBtn;
- (void).cxx_destruct;
- (void)fillDrawbackItem:(id)arg1;
- (void)initBaseView;

@end
