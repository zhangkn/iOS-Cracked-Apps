//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTakeoutNewViewModel.h"

@class NSString, TBTakeoutNewStoreCommentGroupModel;

@interface TBTakeoutNewStoreCommentViewModel : TBTakeoutNewViewModel
{
    _Bool _isNeedReset;
    _Bool _isLoadFinsih;
    NSString *_storeId;
    long long _sceneType;
    long long _pageNo;
    long long _pageSize;
    long long _hasContent;
    long long _tagId;
    TBTakeoutNewStoreCommentGroupModel *_commentGroupModel;
}

@property(nonatomic) _Bool isLoadFinsih; // @synthesize isLoadFinsih=_isLoadFinsih;
@property(retain, nonatomic) TBTakeoutNewStoreCommentGroupModel *commentGroupModel; // @synthesize commentGroupModel=_commentGroupModel;
@property(nonatomic) _Bool isNeedReset; // @synthesize isNeedReset=_isNeedReset;
@property(nonatomic) long long tagId; // @synthesize tagId=_tagId;
@property(nonatomic) long long hasContent; // @synthesize hasContent=_hasContent;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;
@property(copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
- (void).cxx_destruct;
- (void)parseResult:(id)arg1;
- (id)serviceApi;
- (id)init;

@end

