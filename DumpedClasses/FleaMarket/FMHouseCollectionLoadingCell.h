//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMHouseCollectionBaseCell.h"

@class FMHouseMatchCardViewEmptyHeader, FMRefreshLoadingView, UIImageView, UIView;

@interface FMHouseCollectionLoadingCell : FMHouseCollectionBaseCell
{
    UIView *_gifBGView;
    FMHouseMatchCardViewEmptyHeader *_header;
    UIImageView *_imageView;
    FMRefreshLoadingView *_gifView;
}

@property(retain, nonatomic) FMRefreshLoadingView *gifView; // @synthesize gifView=_gifView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) FMHouseMatchCardViewEmptyHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

