//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class InterviewHorizontalChatToolBar, NSString;

@protocol InterviewHorizontalChatToolBarDelegate <NSObject>

@optional
- (void)liveBottomisShowing:(_Bool)arg1;
- (void)horizontalChatToolbarWillShow;
- (void)liveBottomViewNeedTips:(NSString *)arg1;
- (void)liveBottomViewIsActing:(InterviewHorizontalChatToolBar *)arg1;
- (void)liveBottomClickSendGiftBtn;
- (void)liveBottomClickSendChatMessage:(NSString *)arg1;
@end

