//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "QBPopupMenuDelegate.h"
#import "QLActionMenuDelegate.h"
#import "QLBaseInputViewDelegate.h"
#import "QLMomentDraftManagerDelegate.h"
#import "QLMomentPopupMenuDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, QLMomentPublish;

@interface QLMomentComListView : UITableView <QLMomentPopupMenuDelegate, QBPopupMenuDelegate, QLMomentDraftManagerDelegate, UITableViewDataSource, UITableViewDelegate, QLActionMenuDelegate, QLBaseInputViewDelegate>
{
    NSArray *_commentList;
    QLMomentPublish *_momentItem;
    unsigned long long _maxCommentLine;
    id <QLMomentComListViewDelegate><NSObject> _listDelegate;
}

@property(nonatomic) __weak id <QLMomentComListViewDelegate><NSObject> listDelegate; // @synthesize listDelegate=_listDelegate;
@property(nonatomic) unsigned long long maxCommentLine; // @synthesize maxCommentLine=_maxCommentLine;
@property(retain, nonatomic) QLMomentPublish *momentItem; // @synthesize momentItem=_momentItem;
@property(retain, nonatomic) NSArray *commentList; // @synthesize commentList=_commentList;
- (void).cxx_destruct;
- (id)getUserIDForDraftSpace;
- (void)momentPopupMenuDidReportAction:(id)arg1;
- (void)momentPopupMenuDidDeleteAction:(id)arg1;
- (void)momentPopupMenuDidCopyAction:(id)arg1;
- (void)popupMenuWillDisappear:(id)arg1;
- (void)actionMenu:(id)arg1 didSelectAtIndex:(long long)arg2;
- (void)momentInputViewDidPressSendButton:(id)arg1;
- (void)momentInputViewDidPressKeyBoardButton:(id)arg1;
- (void)momentInputViewDidPressEmojiButton:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)retrySendCommnent:(id)arg1;
- (void)didLongPressInCommentCell:(id)arg1;
- (void)loadDataWithCommentList:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
