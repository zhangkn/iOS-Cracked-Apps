//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMEqualizerCell.h"

@class NMInnerCellWaveView, UILabel;

@interface NMPredicatorEqualizerCell : NMEqualizerCell
{
    UILabel *_subTitle;
    NMInnerCellWaveView *_waveView;
}

+ (double)expandedHeight;
+ (double)collapsedHeight;
+ (double)height;
- (void).cxx_destruct;
- (void)setEqualizer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
