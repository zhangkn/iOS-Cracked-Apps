//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLJCEMediaPosterBottomInfoViewDataSource.h"
#import "QLJCEMediaPosterBottomInfoViewDelegate.h"

@class NSString, QLFanTuanLightActionModel, QLJCEAction, QLJCEShareItem, QLJCEVideoAttentItem, UIButton;

@interface QLJCEMediaBottomViewProxy : NSObject <QLJCEMediaPosterBottomInfoViewDataSource, QLJCEMediaPosterBottomInfoViewDelegate>
{
    id <QLJCEFeedInfoProtocol> _feedInfo;
    UIButton *_upBtn;
    UIButton *_commentBtn;
    QLFanTuanLightActionModel *_fanTuanLightModel;
}

@property(retain, nonatomic) QLFanTuanLightActionModel *fanTuanLightModel; // @synthesize fanTuanLightModel=_fanTuanLightModel;
@property(retain, nonatomic) UIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) UIButton *upBtn; // @synthesize upBtn=_upBtn;
@property(retain, nonatomic) id <QLJCEFeedInfoProtocol> feedInfo; // @synthesize feedInfo=_feedInfo;
- (void).cxx_destruct;
- (void)__fanTuanFavoriteAction;
- (void)__momentFavoriteAction;
- (void)__posterBottomView:(id)arg1 didTapUpBtn:(id)arg2;
- (void)posterBottomView:(id)arg1 didClickWholeView:(id)arg2;
- (id)posterBottomView:(id)arg1 getAttentItem:(id)arg2;
- (id)posterBottomView:(id)arg1 getShareItem:(id)arg2;
- (double)posterBottomView:(id)arg1 minimumLineSpacingForItemViewAtIndexPath:(id)arg2;
- (void)posterBottomView:(id)arg1 didClickItemViewAtIndexPath:(id)arg2;
- (struct CGSize)posterBottomView:(id)arg1 sizeForItemViewAtIndexPath:(id)arg2;
- (id)posterBottomView:(id)arg1 itemViewAtIndexPath:(id)arg2;
- (long long)posterBottomView:(id)arg1 numberOfActionMenu:(id)arg2;
@property(readonly, nonatomic) _Bool isLike;
@property(readonly, nonatomic) QLJCEVideoAttentItem *attentItem;
@property(readonly, nonatomic) QLJCEShareItem *shareItem;
@property(readonly, nonatomic) QLJCEAction *action;
@property(readonly, nonatomic) long long feedType;
@property(readonly, nonatomic) long long commentCount;
@property(readonly, nonatomic) long long likeCount;
@property(readonly, nonatomic) NSString *feedId;
- (void)likeStateChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFeedInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

