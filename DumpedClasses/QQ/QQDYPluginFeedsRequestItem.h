//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMLBSRequestItem.h"

@class NSArray, NSString;

@interface QQDYPluginFeedsRequestItem : SAMLBSRequestItem
{
    int _reqEventSource;
    NSArray *_feedReqList;
    NSString *_skey;
    NSString *_qua;
}

@property(nonatomic) int reqEventSource; // @synthesize reqEventSource=_reqEventSource;
@property(copy, nonatomic) NSString *qua; // @synthesize qua=_qua;
@property(copy, nonatomic) NSString *skey; // @synthesize skey=_skey;
@property(retain, nonatomic) NSArray *feedReqList; // @synthesize feedReqList=_feedReqList;
- (void).cxx_destruct;
- (id)fetchPluginsDescriptionInfoFrom:(id)arg1;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;

@end
