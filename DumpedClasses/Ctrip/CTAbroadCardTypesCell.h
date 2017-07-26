//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTTableViewCell.h"

@class CTImageView, CTVectorImageView, NSString, UILabel;

@interface CTAbroadCardTypesCell : CTTableViewCell
{
    _Bool _isLimit;
    CTVectorImageView *_imageSelected;
    NSString *_titleName;
    CTImageView *_imageIcon;
    UILabel *_limitLabel;
    UILabel *_labelName;
}

+ (id)AbroadCardTypesCell;
@property(retain, nonatomic) UILabel *labelName; // @synthesize labelName=_labelName;
@property(retain, nonatomic) UILabel *limitLabel; // @synthesize limitLabel=_limitLabel;
@property(nonatomic) _Bool isLimit; // @synthesize isLimit=_isLimit;
@property(retain, nonatomic) CTImageView *imageIcon; // @synthesize imageIcon=_imageIcon;
@property(copy, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(retain, nonatomic) CTVectorImageView *imageSelected; // @synthesize imageSelected=_imageSelected;
- (void).cxx_destruct;
- (void)setUpCardCell;
- (void)setBankIconWithType:(int)arg1;

@end
