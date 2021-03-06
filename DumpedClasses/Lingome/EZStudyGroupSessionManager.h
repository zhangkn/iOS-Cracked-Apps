//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EMChatManagerDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface EZStudyGroupSessionManager : NSObject <EMChatManagerDelegate>
{
    NSMutableArray *_chatRooms;
    NSString *_createGroupSrc;
}

+ (void)updateStudyGroupPushSettings;
+ (void)updateStudyGroupPushNickName;
+ (void)setShouldShowRedDot:(_Bool)arg1;
+ (_Bool)shouldShowRedDot;
+ (id)groupCategories;
+ (id)sharedSessionManager;
@property(copy, nonatomic) NSString *createGroupSrc; // @synthesize createGroupSrc=_createGroupSrc;
- (void).cxx_destruct;
- (void)ignoreGroupPushNotificationForGroup:(id)arg1 shouldIgnore:(_Bool)arg2 withCompleitonBlock:(CDUnknownBlockType)arg3;
- (long long)loadUnreadMessagesInGroup;
- (void)sendPushContentForMessage:(id)arg1;
- (void)sendHuanXinMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendCMDDeleteUserFromGroup:(id)arg1 toReceiverId:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)sendCMDJoinGroupFail:(id)arg1 toReceiverId:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)huanxinMessageForJoinGroup:(id)arg1 withReceiverIMId:(id)arg2 userResourceId:(id)arg3;
- (void)sendCMDJoinGroupSuccess:(id)arg1 toUserIMId:(id)arg2 userResourceId:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)sendCMDApplyToGroupByNotification:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)sendCMDApplyToGroup:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)didFinishedReceiveOfflineCmdMessages:(id)arg1;
- (void)didReceiveCmdMessage:(id)arg1;
- (void)didReceiveMessage:(id)arg1;
- (void)showNotificationWithMessage:(id)arg1;
- (_Bool)needShowNotification:(id)arg1;
- (void)fetchUserNameAndPasswordWithCompletion:(CDUnknownBlockType)arg1;
- (void)loginIMServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)resendMessage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 toGroup:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 toUser:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)loginWithImportData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

