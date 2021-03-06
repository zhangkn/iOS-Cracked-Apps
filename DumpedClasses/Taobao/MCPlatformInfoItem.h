//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MCPlatformInfoItem : NSObject
{
    NSString *_iconFont;
    long long _unreadCount;
    NSString *_title;
    NSString *_openUrl;
    long long _beforeColor;
    long long _afterColor;
    NSString *_messageTypeId;
    CDUnknownBlockType _actionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) NSString *messageTypeId; // @synthesize messageTypeId=_messageTypeId;
@property(nonatomic) long long afterColor; // @synthesize afterColor=_afterColor;
@property(nonatomic) long long beforeColor; // @synthesize beforeColor=_beforeColor;
@property(retain, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) NSString *iconFont; // @synthesize iconFont=_iconFont;
- (void).cxx_destruct;

@end

