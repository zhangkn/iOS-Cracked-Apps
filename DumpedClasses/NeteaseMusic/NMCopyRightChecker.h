//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NMCopyRightChecker : NSObject
{
}

+ (long long)checkMVAndAlertCopyrightIssue:(id)arg1 action:(unsigned long long)arg2 needAlert:(_Bool)arg3;
+ (long long)checkMVCopyright:(id)arg1 action:(unsigned long long)arg2 needAlert:(_Bool)arg3;
+ (long long)checkMVCopyrightOnly:(id)arg1 action:(unsigned long long)arg2;
+ (_Bool)isMVCopyrighted:(id)arg1 action:(unsigned long long)arg2;
+ (void)alertMVCopyrightFeeIssue:(id)arg1 action:(unsigned long long)arg2;
+ (_Bool)alertCommentFeeIssueWithThreadId:(id)arg1;
+ (void)alertDownloadOnlyIssue:(id)arg1 dismissedBlock:(CDUnknownBlockType)arg2;
+ (void)alertDownloadOnlyIssue:(id)arg1;
+ (void)alertPlayOnlyIssue;
+ (void)alertQQCacheOnlyVipExpiredIssue:(id)arg1 action:(unsigned long long)arg2 ignoreSingleBuy:(_Bool)arg3;
+ (void)alertCopyrightFlag:(long long)arg1 preferredVipTipType:(unsigned long long)arg2 song:(id)arg3 action:(unsigned long long)arg4;
+ (void)alertCopyrightFeeIssueForIpad;
+ (void)alertAlbumCopyrightFeeIssue:(id)arg1 action:(unsigned long long)arg2;
+ (void)alertCopyrightFeeIssue:(unsigned long long)arg1 songId:(id)arg2 bitrate:(long long)arg3 fee:(long long)arg4 action:(unsigned long long)arg5 dismissed:(CDUnknownBlockType)arg6;
+ (void)alertCopyrightFeeIssue:(unsigned long long)arg1 songId:(id)arg2 bitrate:(long long)arg3 fee:(long long)arg4 action:(unsigned long long)arg5;
+ (void)alertUnavailableOperate;
+ (void)alertCanPlayCannotDownloadMV:(id)arg1;
+ (void)alertCopyRightIssueForMVDownload:(id)arg1;
+ (void)alertCopyRightIssueForSong:(id)arg1;
+ (void)alertCopyRightOfflineIssueForSong:(id)arg1;
+ (long long)checkAndAlertCopyrightIssue:(id)arg1 action:(unsigned long long)arg2 needAlert:(_Bool)arg3;
+ (long long)checkCopyright:(id)arg1 action:(unsigned long long)arg2 needAlert:(_Bool)arg3;
+ (long long)checkCopyrightOnly:(id)arg1 action:(unsigned long long)arg2;
+ (_Bool)isCopyrighted:(id)arg1 action:(unsigned long long)arg2;
+ (_Bool)canBuySingle:(long long)arg1;

@end

