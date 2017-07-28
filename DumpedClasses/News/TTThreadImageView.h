//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTThreadCellItemBase.h"

@class NSMutableArray, TTThreadImageViewGifView;

@interface TTThreadImageView : TTThreadCellItemBase
{
    long long _currentViewStyple;
    NSMutableArray *_imageViewCells;
    TTThreadImageViewGifView *_gifView;
}

+ (struct CGSize)appropriateSizeForSingleGif:(struct CGSize)arg1 limitedWidth:(double)arg2;
+ (struct CGSize)oldAppropriateSizeForSingleImage:(struct CGSize)arg1 limitedWidth:(double)arg2;
+ (struct CGSize)appropriateSizeForSingleImage:(struct CGSize)arg1 limitedWidth:(double)arg2 isLongImage:(_Bool *)arg3;
+ (_Bool)shouldShowForData:(id)arg1 listType:(unsigned long long)arg2;
+ (double)heightForData:(id)arg1 width:(double)arg2 listType:(unsigned long long)arg3 viewStyle:(long long)arg4;
+ (double)heightForData:(id)arg1 width:(double)arg2 listType:(unsigned long long)arg3;
+ (double)normalStyleHeightWithOrderedData:(id)arg1 width:(double)arg2 imageCount:(unsigned long long)arg3;
@property(retain, nonatomic) TTThreadImageViewGifView *gifView; // @synthesize gifView=_gifView;
@property(retain, nonatomic) NSMutableArray *imageViewCells; // @synthesize imageViewCells=_imageViewCells;
@property(nonatomic) long long currentViewStyple; // @synthesize currentViewStyple=_currentViewStyple;
- (void).cxx_destruct;
- (void)refreshWithData:(id)arg1 listType:(unsigned long long)arg2 viewStyle:(long long)arg3;
- (void)refreshWithData:(id)arg1 listType:(unsigned long long)arg2;
- (void)refreshUI;
- (void)themeChanged:(id)arg1;
- (void)refreshLimitThreeStyleUI;
- (void)refreshLimitOneStyleUI;
- (void)refreshNormalStyleUI;
- (id)thumbImageForPhotoScrollView:(long long)arg1;
- (void)imageCellTapped:(id)arg1;
- (id)getNewImageCell;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
