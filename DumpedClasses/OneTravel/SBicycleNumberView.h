//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface SBicycleNumberView : UIView
{
    UILabel *_infoLabel;
    UILabel *_carNumberLabel;
    UILabel *_detailLabel;
}

@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *carNumberLabel; // @synthesize carNumberLabel=_carNumberLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
- (void).cxx_destruct;
- (void)updateLabelFrame;
- (void)setBicycleNumberModel:(id)arg1;
- (void)configDetailLabel;
- (void)configCarNumberLabel;
- (void)configInfoLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end
