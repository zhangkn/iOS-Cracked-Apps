//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ONELiveDetectResult : NSObject
{
    NSString *_sessionId;
    unsigned long long _resultNo;
    NSString *_msg;
}

+ (id)detectWithErrNo:(unsigned long long)arg1 msg:(id)arg2;
+ (id)detectWithSessionId:(id)arg1 errNo:(unsigned long long)arg2 msg:(id)arg3;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) unsigned long long resultNo; // @synthesize resultNo=_resultNo;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)description;

@end
