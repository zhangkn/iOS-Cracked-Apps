//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGYueKuPlayBarViewController.h"

@class KGRadioPlayListViewController;

@interface KGDianTaiPlayBarViewController : KGYueKuPlayBarViewController
{
    KGRadioPlayListViewController *_radioPlayListViewController;
}

@property(retain, nonatomic) KGRadioPlayListViewController *radioPlayListViewController; // @synthesize radioPlayListViewController=_radioPlayListViewController;
- (void).cxx_destruct;
- (void)playStateChange:(id)arg1;
- (void)handleNotification:(id)arg1;
- (_Bool)unshowKGPlayListViewController;
- (void)showKGPlayListViewController;
- (void)playListBtnTaped:(id)arg1;
- (void)playNext:(id)arg1;
- (void)changeUIShow;
- (void)upDateUI;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

