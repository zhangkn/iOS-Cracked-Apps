//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppMonitorSwitchDataConverter : NSObject
{
}

+ (id)getInstanceID;
+ (void)setInstanceID:(id)arg1;
+ (id)sharedInstance;
- (id)getSwitchResultForCountAndAlarm:(id)arg1 monitorPoint:(id)arg2 Type:(id)arg3 Arg:(id)arg4 RandomNum:(int)arg5;
- (id)getSwitchResultForStat:(id)arg1 monitorPoint:(id)arg2 Dimension:(id)arg3 RandomNum:(int)arg4;
- (_Bool)isEmptyofDic;
- (void)setDicContent:(id)arg1;
- (void)removeDicContent;
- (id)init;

@end

