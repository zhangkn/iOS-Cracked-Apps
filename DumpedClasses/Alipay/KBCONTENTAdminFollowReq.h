//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KBCONTENTBaseRpcRequest.h"

@class NSString;

@interface KBCONTENTAdminFollowReq : KBCONTENTBaseRpcRequest
{
    int _action;
    NSString *_targetId;
    NSString *_targetType;
    NSString *_sceneCode;
}

@property(retain, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(nonatomic) int action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *targetType; // @synthesize targetType=_targetType;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
- (void).cxx_destruct;

@end

