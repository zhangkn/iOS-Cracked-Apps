//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PPChatCacheDelegate;

@interface PPBizDataCenter : NSObject
{
    PPChatCacheDelegate *_ppChatCache;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)parseChatMessage:(id)arg1;
- (void)globalDealAddFollowResult:(id)arg1 publicId:(id)arg2;
- (void)saveFollowObjectInfo:(id)arg1;
- (void)savePPChatAccountLayout:(id)arg1 withUserId:(id)arg2;
- (void)savePPChatAccountLayout:(id)arg1;
- (id)init;

@end

