//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NPSync : NSObject
{
}

+ (id)sharedInstance;
- (void)handleNotification:(id)arg1;
- (void)responseSyncNotify:(id)arg1;
- (void)unregisterSync:(id)arg1;
- (void)registerSync:(id)arg1;

@end

