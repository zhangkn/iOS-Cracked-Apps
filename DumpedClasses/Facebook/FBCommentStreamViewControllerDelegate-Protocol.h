//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBCommentStreamViewController, FBMemComment;

@protocol FBCommentStreamViewControllerDelegate <NSObject>

@optional
- (void)commentStreamViewControllerDidReceiveLikeActionForComment:(FBMemComment *)arg1 didLike:(_Bool)arg2;
- (void)commentStreamViewControllerDidReceivePostCommentAction:(FBCommentStreamViewController *)arg1;
- (void)commentStreamViewControllerDidReceiveDoneAction:(FBCommentStreamViewController *)arg1;
- (void)commentStreamViewControllerDidLoadComments:(FBCommentStreamViewController *)arg1 isFirstCommentLoad:(_Bool)arg2;
@end

