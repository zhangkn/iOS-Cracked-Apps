//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"

@class NSString, QQRelationSearchEngine, UIColor, UISearchBar, UISearchDisplayController;

@interface QQSearchBaseViewController : QQViewController <UISearchBarDelegate, UISearchDisplayDelegate>
{
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchDisplay;
    QQRelationSearchEngine *_searchEngine;
    UIColor *_originBackgroundColor;
    long long _originStatusBarStyle;
    unsigned long long _originLayoutEdgeInsets;
    _Bool _originAutomaticallyAdjustsScrollViewInsets;
    double _originNavigationControllerViewHeight;
    double _originMainViewHeight;
    _Bool _cancelSearchWhenDisappear;
    _Bool _isSearching;
    NSString *_from;
}

@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) _Bool cancelSearchWhenDisappear; // @synthesize cancelSearchWhenDisappear=_cancelSearchWhenDisappear;
@property(retain, nonatomic) QQRelationSearchEngine *searchEngine; // @synthesize searchEngine=_searchEngine;
@property(retain, nonatomic) UISearchDisplayController *searchDisplay; // @synthesize searchDisplay=_searchDisplay;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)willMoveToParentViewController:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)handleListChangedWhenSearchAfterDelay;
- (void)handleListChangedWhenSearch;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)searchResultTableReloadAppearance;
- (void)reloadAppearance;
- (void)cancelSearch;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

