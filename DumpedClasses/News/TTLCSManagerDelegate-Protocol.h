//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TTLCSManagerDelegate <NSObject>

@optional
- (void)ttlcs_onReceivedUnknownPushMessageWithPayload:(NSString *)arg1;
- (void)ttlcs_onPushManagerConnectionError:(NSString *)arg1 connectionState:(unsigned long long)arg2 url:(NSString *)arg3;
- (void)ttlcs_onPushManagerConnectionStateChanged:(unsigned long long)arg1 url:(NSString *)arg2;
@end

