//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class QLHTMLFontLabel, UIView;

@interface QLONATimeLineTitleCell : QLBaseTabelViewCell
{
    UIView *_colorDot;
    UIView *_colorLine;
    UIView *_colorLineExtra;
    QLHTMLFontLabel *_titleLabel;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) QLHTMLFontLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *colorLineExtra; // @synthesize colorLineExtra=_colorLineExtra;
@property(retain, nonatomic) UIView *colorLine; // @synthesize colorLine=_colorLine;
@property(retain, nonatomic) UIView *colorDot; // @synthesize colorDot=_colorDot;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
