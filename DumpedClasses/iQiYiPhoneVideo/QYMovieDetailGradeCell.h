//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYMovieDetailBaseCell.h"

@class QYCinemaMovieDetailData, UIImageView, UILabel, UIView;
@protocol QYMovieDetailGradeCellDelegate;

@interface QYMovieDetailGradeCell : QYMovieDetailBaseCell
{
    id <QYMovieDetailGradeCellDelegate> _delegate;
    UIImageView *_backgroundImage;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UIImageView *_moreGrade;
    QYCinemaMovieDetailData *_cinemaMovieData;
    UIView *_line;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) QYCinemaMovieDetailData *cinemaMovieData; // @synthesize cinemaMovieData=_cinemaMovieData;
@property(retain, nonatomic) UIImageView *moreGrade; // @synthesize moreGrade=_moreGrade;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) __weak id <QYMovieDetailGradeCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewTap;
- (void)initSubView;
- (double)cellHeightForData:(id)arg1 limitedToWidth:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

