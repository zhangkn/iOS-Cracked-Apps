//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMArtist, NMEvent, NMFriendJoinHintView, NMFriendsView, NMNearBy, NMNearByBanner, NMRmdActivity, NMUser, NSString;

@protocol NMInFashionViewDelegate <NSObject>
- (void)postVideoButtonClicked;
- (void)postEventButtonClicked;
- (NMFriendJoinHintView *)joinHintView;
- (void)allTopicsEntryClicked;
- (void)topicClicked:(NMRmdActivity *)arg1;
- (void)httpLinkClicked:(NSString *)arg1;
- (void)activityNameClicked:(NSString *)arg1;
- (void)activityLinkClicked:(NSString *)arg1;
- (void)draftBoxButtonTouched;
- (void)rcmdArtistTouched:(NMArtist *)arg1;
- (void)noticeCountViewTouched;
- (void)atUserNickNameClickedInFriendsView:(NSString *)arg1 gotoEventTab:(_Bool)arg2;
- (void)atUserNickNameClickedInFriendsView:(NSString *)arg1;
- (void)multiImageClicked:(NMFriendsView *)arg1 event:(NMEvent *)arg2 atIndex:(unsigned long long)arg3;
- (void)avatarClickedInEventWithUserId:(NSString *)arg1;
- (void)eventObjectClicked:(NMEvent *)arg1;
- (void)forwardClickedOnEvent:(NMEvent *)arg1;
- (void)commentClickedOnEvent:(NMEvent *)arg1;
- (void)eventSelected:(NMEvent *)arg1;
- (void)nearbyBannerClicked:(NMNearByBanner *)arg1;
- (void)nearbySongInfoClicked:(NMNearBy *)arg1;
- (void)nearbyUserInfoClicked:(NMNearBy *)arg1;

@optional
- (void)focusButtonTouchedWithEvent:(NMEvent *)arg1 user:(NMUser *)arg2;
@end

