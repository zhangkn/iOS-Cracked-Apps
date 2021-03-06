//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "PPUnFollowListProviderDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, PPFollowTableView, PPUnfollowListProvider, UIImage, UIView;

@interface PPUnfollowViewController : DTViewController <PPUnFollowListProviderDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isReloading;
    PPFollowTableView *_tableView;
    PPUnfollowListProvider *_sessionService;
    UIView *_sessionEmptyView;
    NSMutableArray *_sessionArray;
    UIImage *_cellDefaultImage;
}

@property _Bool isReloading; // @synthesize isReloading=_isReloading;
@property(retain, nonatomic) UIImage *cellDefaultImage; // @synthesize cellDefaultImage=_cellDefaultImage;
@property(retain, nonatomic) NSMutableArray *sessionArray; // @synthesize sessionArray=_sessionArray;
@property(retain, nonatomic) UIView *sessionEmptyView; // @synthesize sessionEmptyView=_sessionEmptyView;
@property(retain, nonatomic) PPUnfollowListProvider *sessionService; // @synthesize sessionService=_sessionService;
@property(retain, nonatomic) PPFollowTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)publicId:(id)arg1;
- (id)nameOfTopButtonText:(id)arg1;
- (void)deleteButtonTaped:(id)arg1;
- (int)cellForEditType:(id)arg1;
- (_Bool)shouldShowAlert:(id)arg1;
- (_Bool)canGestureOpretaion;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)configSessionCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setCellDetailMessage:(id)arg1 publicInfo:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)unfollowListShouldReload;
- (void)checkEmpty;
- (void)showSessionEmptyView:(_Bool)arg1;
- (void)setupParams;
- (void)setupUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

