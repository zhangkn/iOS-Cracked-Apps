//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBOMenuItemInfo>, NSArray<TBOTag>, NSMutableArray, NSString, TBOChatroom, TBOCommunity;

@interface TBOWeexHeader : TBJSONModel
{
    _Bool _subscribed;
    NSArray<TBOTag> *_circleTabs;
    TBOCommunity *_community;
    NSArray<TBOMenuItemInfo> *_tabs;
    NSMutableArray *_circleActions;
    TBOChatroom *_chatroom;
    NSString *_answerText;
    NSString *_canAnswer;
    NSString *_answerUrl;
    NSString *_shareUrl;
    NSString *_shareTitle;
    NSString *_answerToast;
}

@property(retain, nonatomic) NSString *answerToast; // @synthesize answerToast=_answerToast;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) NSString *answerUrl; // @synthesize answerUrl=_answerUrl;
@property(retain, nonatomic) NSString *canAnswer; // @synthesize canAnswer=_canAnswer;
@property(retain, nonatomic) NSString *answerText; // @synthesize answerText=_answerText;
@property(retain, nonatomic) TBOChatroom *chatroom; // @synthesize chatroom=_chatroom;
@property(retain, nonatomic) NSMutableArray *circleActions; // @synthesize circleActions=_circleActions;
@property(retain, nonatomic) NSArray<TBOMenuItemInfo> *tabs; // @synthesize tabs=_tabs;
@property(retain, nonatomic) TBOCommunity *community; // @synthesize community=_community;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) NSArray<TBOTag> *circleTabs; // @synthesize circleTabs=_circleTabs;
- (void).cxx_destruct;

@end

