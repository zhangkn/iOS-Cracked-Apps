//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface QRGiftItemCell : UICollectionViewCell
{
    UIImageView *_giftImageView;
    UILabel *_numLable;
    UILabel *_priceLable;
}

@property(retain, nonatomic) UILabel *priceLable; // @synthesize priceLable=_priceLable;
@property(retain, nonatomic) UILabel *numLable; // @synthesize numLable=_numLable;
@property(retain, nonatomic) UIImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
- (void).cxx_destruct;
- (void)loadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

