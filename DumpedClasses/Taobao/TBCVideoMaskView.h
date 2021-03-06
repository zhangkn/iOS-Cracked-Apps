//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSString, UIImageView, UILabel;

@interface TBCVideoMaskView : UIView
{
    UIImageView *_ivPlayImage;
    UIImageView *_ivVedioImage;
    UILabel *_lbText;
    CALayer *_maskLayer;
    NSString *_sourceVideoUrl;
    NSString *_cloudVideoUrl;
}

@property(copy, nonatomic) NSString *cloudVideoUrl; // @synthesize cloudVideoUrl=_cloudVideoUrl;
@property(copy, nonatomic) NSString *sourceVideoUrl; // @synthesize sourceVideoUrl=_sourceVideoUrl;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UILabel *lbText; // @synthesize lbText=_lbText;
@property(retain, nonatomic) UIImageView *ivVedioImage; // @synthesize ivVedioImage=_ivVedioImage;
@property(retain, nonatomic) UIImageView *ivPlayImage; // @synthesize ivPlayImage=_ivPlayImage;
- (void).cxx_destruct;
- (void)setPlayImageSize:(struct CGSize)arg1;
- (void)loadData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

