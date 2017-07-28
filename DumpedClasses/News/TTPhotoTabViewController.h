//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TTCategorySelectorViewDelegate.h"
#import "TTCollectionListPageCellDelegate.h"
#import "TTCollectionPageViewControllerDelegate.h"
#import "TTInteractExitProtocol.h"

@class NSArray, NSString, TTCategorySelectorView, TTCollectionPageViewController, TTFeedRefreshView, UIView;

@interface TTPhotoTabViewController : UIViewController <TTCategorySelectorViewDelegate, TTCollectionPageViewControllerDelegate, TTCollectionListPageCellDelegate, TTInteractExitProtocol>
{
    TTCollectionPageViewController *_pageViewController;
    TTCategorySelectorView *_categorySelectorView;
    UIView *_barView;
    long long _lastSelectedPageIndex;
    NSArray *_categories;
    double _topInset;
    double _bottomInset;
    TTFeedRefreshView *_feedRefreshView;
}

@property(retain, nonatomic) TTFeedRefreshView *feedRefreshView; // @synthesize feedRefreshView=_feedRefreshView;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) long long lastSelectedPageIndex; // @synthesize lastSelectedPageIndex=_lastSelectedPageIndex;
@property(retain, nonatomic) UIView *barView; // @synthesize barView=_barView;
@property(retain, nonatomic) TTCategorySelectorView *categorySelectorView; // @synthesize categorySelectorView=_categorySelectorView;
@property(retain, nonatomic) TTCollectionPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (void).cxx_destruct;
- (id)suitableFinishBackView;
- (void)receiveIarNotification:(id)arg1;
- (void)receivePhotoTabbarClickedNotification:(id)arg1;
- (void)listViewOfTTCollectionPageCellEndLoading:(id)arg1;
- (void)listViewOfTTCollectionPageCellStartLoading:(id)arg1;
- (_Bool)shouldAnimateRefreshViewWithPageCell:(id)arg1;
- (void)hiddenFeedRefreshViewIfNeeded;
- (void)handleRefreshButtonSettingEnabledNotification:(id)arg1;
- (void)feedRefreshButtonPressed:(id)arg1;
- (void)setupFeedRefreshView;
- (void)pageViewController:(id)arg1 willPagingToIndex:(long long)arg2;
- (void)pageViewController:(id)arg1 didPagingToIndex:(long long)arg2;
- (void)pageViewController:(id)arg1 pagingFromIndex:(long long)arg2 toIndex:(long long)arg3 completePercent:(double)arg4;
- (void)categorySelectorView:(id)arg1 selectCategory:(id)arg2;
- (double)statusBarHeight;
- (void)setInset;
- (void)fetchCategoryData;
- (void)setupConstraints;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
