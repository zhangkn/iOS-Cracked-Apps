//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWUCLoveBaseViewController.h"

@class NSString;
@protocol GWUCLoveStarViewDelegate;

@interface GWUCLoveStarViewController : GWUCLoveBaseViewController
{
    _Bool _showAnimation;
    _Bool _hiddenCell;
    int _requestType;
    id <GWUCLoveStarViewDelegate> delegate;
    NSString *_movieID;
    long long _page;
}

@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) _Bool hiddenCell; // @synthesize hiddenCell=_hiddenCell;
@property(nonatomic) _Bool showAnimation; // @synthesize showAnimation=_showAnimation;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSString *movieID; // @synthesize movieID=_movieID;
@property(nonatomic) __weak id <GWUCLoveStarViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)requestFinishedWithCurrentDataArray:(id)arg1 error:(id)arg2;
- (void)requestDidFinished:(id)arg1;
- (void)requestWillStart;
- (void)loadNextPageWithClear:(_Bool)arg1;
- (void)beginRefreshFromFooter;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cancel:(id)arg1;
- (void)setNaviButtons;
- (void)viewDidAppear:(_Bool)arg1;
- (void)refreshData;
- (void)viewDidLoad;
- (id)init;

@end

