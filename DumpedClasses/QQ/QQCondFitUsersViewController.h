//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "CFFootViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CFFootView, ConditionModel, NSMutableArray, NSString, NSTimer, ODRefreshControl, UILabel, UITableView;

@interface QQCondFitUsersViewController : QQViewController <CFFootViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_resultList;
    NSTimer *_timer;
    CFFootView *_footerView;
    UILabel *_footLabel;
    UITableView *_tableView;
    _Bool _lastPage;
    _Bool _isRequesting;
    int _pageNumber;
    int _session;
    ODRefreshControl *_refreshControl;
    _Bool _isFirstCome;
    _Bool _needRequest;
    struct {
        _Bool isReady;
        _Bool isRefresh;
        _Bool isMoreRequesting;
        _Bool isRequesting;
        _Bool hasMore;
        _Bool afterSet;
    } _flag;
    ConditionModel *_condSearchmodel;
}

@property(retain, nonatomic) ConditionModel *condSearchmodel; // @synthesize condSearchmodel=_condSearchmodel;
- (void).cxx_destruct;
- (void)startRefreshFoot:(id)arg1;
- (void)startRefresh:(id)arg1;
- (void)dropRefresh;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)delayShowFailTips;
- (void)delayShowSuccTips;
- (void)requestCondSearch:(_Bool)arg1 withLoadingIndicator:(_Bool)arg2;
- (void)onCondSearchCallback:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (void)setLastPage:(_Bool)arg1 pageNum:(int)arg2 session:(int)arg3;
- (void)setSearchResultList:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)unRegisterNotifications;
- (void)registerNotifications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
