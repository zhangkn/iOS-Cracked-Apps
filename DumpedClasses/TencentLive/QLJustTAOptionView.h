//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSIndexPath, NSMutableArray, NSString, QLInteractiveVoteOperation, UITableView;

@interface QLJustTAOptionView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    QLInteractiveVoteOperation *_delegate;
    long long _selectedIndex;
    NSMutableArray *_dataArray;
    UITableView *_tableView;
    NSIndexPath *_selectedIndexPath;
    double _tableTopGap;
}

@property(nonatomic) double tableTopGap; // @synthesize tableTopGap=_tableTopGap;
@property(nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak QLInteractiveVoteOperation *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableViewSelectRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dismissView:(id)arg1;
- (void)createTableView;
- (void)resetList;
- (void)scrollToCurrentItem;
- (void)caculateTableTopGap;
- (double)maxTitleLength;
- (void)loadJustTAOptions:(id)arg1;
- (void)layoutSubviews;
- (void)clearResourse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

