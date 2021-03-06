//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWHomeDramaBaseClassView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class GWHomeShoppingMall, NSMutableArray, NSString, UICollectionView, UIPageControl;
@protocol GWHomePopularDramaViewDelegate;

@interface GWHomePopularDramaView : GWHomeDramaBaseClassView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    GWHomeShoppingMall *_model;
    id <GWHomePopularDramaViewDelegate> _popDelegate;
    UICollectionView *_adCollectionView;
    NSMutableArray *_adDataArray;
    UIPageControl *_pagingControl;
}

@property(retain, nonatomic) UIPageControl *pagingControl; // @synthesize pagingControl=_pagingControl;
@property(retain, nonatomic) NSMutableArray *adDataArray; // @synthesize adDataArray=_adDataArray;
@property(retain, nonatomic) UICollectionView *adCollectionView; // @synthesize adCollectionView=_adCollectionView;
@property(nonatomic) __weak id <GWHomePopularDramaViewDelegate> popDelegate; // @synthesize popDelegate=_popDelegate;
@property(retain, nonatomic) GWHomeShoppingMall *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)updateAdCollectionView:(id)arg1;
- (void)updateHomePopularDramaView:(id)arg1;
- (void)registPreView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (double)viewHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

