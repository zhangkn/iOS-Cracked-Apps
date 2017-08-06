//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GWUserDateMovieModel, UIColor, UILabel;

@interface GWDateMovieTrendView : UIView
{
    GWUserDateMovieModel *_dateMovieModel;
    UILabel *_dateTimeLabel;
    UIColor *_textColor;
    UIColor *_borderColor;
}

@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UILabel *dateTimeLabel; // @synthesize dateTimeLabel=_dateTimeLabel;
@property(retain, nonatomic) GWUserDateMovieModel *dateMovieModel; // @synthesize dateMovieModel=_dateMovieModel;
- (void).cxx_destruct;
- (struct CGRect)loadSpecialView:(struct CGRect)arg1;
- (id)getPeriod:(long long)arg1;
- (struct CGRect)loadPeriodView;
- (void)loadAllViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
