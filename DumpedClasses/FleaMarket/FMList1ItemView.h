//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMImageView, FMPriceView, NSString, UIImage, UILabel;

@interface FMList1ItemView : UIView
{
    _Bool _showPriceCutHover;
    NSString *_originPrice;
    FMImageView *_imageView;
    UILabel *_descLabel;
    UILabel *_priceLabel;
    UILabel *_originPriceLabel;
    UILabel *_statusInfoLabel;
    FMPriceView *_priceView;
}

@property(retain, nonatomic) FMPriceView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) UILabel *statusInfoLabel; // @synthesize statusInfoLabel=_statusInfoLabel;
@property(retain, nonatomic) UILabel *originPriceLabel; // @synthesize originPriceLabel=_originPriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) FMImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool showPriceCutHover; // @synthesize showPriceCutHover=_showPriceCutHover;
@property(copy, nonatomic) NSString *originPrice; // @synthesize originPrice=_originPrice;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *statusInfo;
@property(copy, nonatomic) NSString *price;
@property(copy, nonatomic) NSString *desc;
@property(copy, nonatomic) NSString *imageURLString;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

