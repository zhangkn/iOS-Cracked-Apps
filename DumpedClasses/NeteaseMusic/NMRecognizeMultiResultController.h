//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSongCellBaseController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString;

@interface NMRecognizeMultiResultController : NMSongCellBaseController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_songs;
}

- (void).cxx_destruct;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshForVipStatusUpdated;
- (void)refreshDataForUMG;
- (void)backAction:(id)arg1;
- (void)reRecognizeButtonClicked:(id)arg1;
- (void)tableReloadData:(id)arg1;
- (void)tableReloadData;
- (void)viewDidLoad;
- (id)tableView;
- (id)resultView;
- (void)loadView;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (id)initWithSongs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

