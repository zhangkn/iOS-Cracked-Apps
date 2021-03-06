//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACDSRPCMarshal.h"

@class NSNumber, NSString;

@interface ACDSSendMessageResult : ACDSRPCMarshal
{
    _Bool _isNotify;
    _Bool _isSuccess;
    NSNumber *_sendSyncId;
    NSNumber *_sendTime;
    NSString *_notifyContent;
    NSString *_notifyContentExt;
    NSNumber *_msgId;
    NSString *_activeContent;
}

@property(copy, nonatomic) NSString *activeContent; // @synthesize activeContent=_activeContent;
@property(retain, nonatomic) NSNumber *msgId; // @synthesize msgId=_msgId;
@property(copy, nonatomic) NSString *notifyContentExt; // @synthesize notifyContentExt=_notifyContentExt;
@property(copy, nonatomic) NSString *notifyContent; // @synthesize notifyContent=_notifyContent;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(nonatomic) _Bool isNotify; // @synthesize isNotify=_isNotify;
@property(retain, nonatomic) NSNumber *sendTime; // @synthesize sendTime=_sendTime;
@property(retain, nonatomic) NSNumber *sendSyncId; // @synthesize sendSyncId=_sendSyncId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

