//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSString, QLJCEONAVRSSFeed, QLVRssSubscribeSingleItemView, UICollectionView;

@interface QLVRssSubscribeVideoListCell : QLBaseTabelViewCell <UICollectionViewDataSource, UICollectionViewDelegate>
{
    QLVRssSubscribeSingleItemView *_titleView;
    UICollectionView *_collectionView;
    QLJCEONAVRSSFeed *_vrssFeed;
}

+ (double)heightForPoster:(id)arg1 userInfo:(id)arg2;
@property(retain, nonatomic) QLJCEONAVRSSFeed *vrssFeed; // @synthesize vrssFeed=_vrssFeed;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) QLVRssSubscribeSingleItemView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)vRssSubscribeEngineFireSubscribe:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setContentOffset;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (id)horiScrollView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

