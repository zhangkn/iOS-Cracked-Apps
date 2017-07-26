//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UISwitch, UITableView, UITableViewCell;

@interface CTInfoSetUpViewController : CTRootViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableViewCell *_serviceInfoCell;
    UITableViewCell *_promotionInfoCell;
    UITableViewCell *_localRecommendInfoCell;
    UITableView *_tableView;
    UISwitch *_promotionInfoSwitch;
    UISwitch *_localRecommendInfoSwitch;
}

+ (_Bool)isPromotionInfoSwitchOn;
+ (_Bool)isLocalInfoRecommendSwitchOn;
@property(nonatomic) __weak UISwitch *localRecommendInfoSwitch; // @synthesize localRecommendInfoSwitch=_localRecommendInfoSwitch;
@property(nonatomic) __weak UISwitch *promotionInfoSwitch; // @synthesize promotionInfoSwitch=_promotionInfoSwitch;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UITableViewCell *localRecommendInfoCell; // @synthesize localRecommendInfoCell=_localRecommendInfoCell;
@property(retain, nonatomic) UITableViewCell *promotionInfoCell; // @synthesize promotionInfoCell=_promotionInfoCell;
@property(retain, nonatomic) UITableViewCell *serviceInfoCell; // @synthesize serviceInfoCell=_serviceInfoCell;
- (void).cxx_destruct;
- (void)localRecommendInfoSwitch:(id)arg1;
- (void)promotionInfoSwitch:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)leftItemClicked;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
