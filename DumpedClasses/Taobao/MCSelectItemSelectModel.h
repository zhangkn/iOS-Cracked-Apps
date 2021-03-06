//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCBaseModel.h"

#import "MCSelectItemTabContentDelegate.h"

@class NSMutableArray, NSMutableArray<MCShareItemObject>, NSString;

@interface MCSelectItemSelectModel : MCBaseModel <MCSelectItemTabContentDelegate>
{
    unsigned long long _maxSelectCount;
    unsigned long long _selectedTabIndex;
    id <MCSelectItemSelectModelDelegate> _delegate;
    NSMutableArray<MCShareItemObject> *_selectItemList;
    NSMutableArray *_contentData;
    NSMutableArray *_extTabContent;
}

@property(retain, nonatomic) NSMutableArray *extTabContent; // @synthesize extTabContent=_extTabContent;
@property(retain, nonatomic) NSMutableArray *contentData; // @synthesize contentData=_contentData;
@property(retain, nonatomic) NSMutableArray<MCShareItemObject> *selectItemList; // @synthesize selectItemList=_selectItemList;
@property(nonatomic) __weak id <MCSelectItemSelectModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
@property(nonatomic) unsigned long long maxSelectCount; // @synthesize maxSelectCount=_maxSelectCount;
- (void).cxx_destruct;
- (void)selectItemTabContent:(id)arg1 loadFailWithError:(id)arg2;
- (void)selectItemTabContent:(id)arg1 loadFinishWithData:(id)arg2;
- (void)removeSelectedShareItem:(id)arg1;
- (void)addSelectedShareItem:(id)arg1;
- (id)selectedShareItemList;
- (id)contentDataAtTabIndex:(unsigned long long)arg1;
- (id)emptyTitleTextList;
- (id)tabTextList;
- (void)loadMoreAtTabIndex:(unsigned long long)arg1;
- (void)loadContentData;
- (void)refreshDataAtTabIndex:(unsigned long long)arg1;
- (id)initWithBizKey:(id)arg1 delegate:(id)arg2 tabContents:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

