//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBMeasureMonitorUtil : NSObject
{
}

+ (id)getTrackName:(unsigned long long)arg1;
+ (id)getPageName:(unsigned long long)arg1;
+ (id)getAlarmMonitorPoint:(unsigned long long)arg1;
+ (id)getStartModeByType:(unsigned long long)arg1;
+ (id)createErrorFrom:(id)arg1;
+ (id)createArgStr:(unsigned long long)arg1 pageName:(id)arg2 extends:(id)arg3;
+ (void)commitAlarm:(unsigned long long)arg1 pageName:(id)arg2 error:(id)arg3 msg:(id)arg4;
+ (void)commitPerformance:(unsigned long long)arg1 pageType:(id)arg2 time:(id)arg3 imageSize:(double)arg4;
+ (void)registerAppMonitorPerformance;
+ (void)updatePage:(id)arg1 params:(id)arg2;
+ (void)updatePageName:(id)arg1 pageName:(id)arg2;
+ (void)commitExposure:(id)arg1 args:(id)arg2 onPage:(id)arg3;
+ (void)commitEvent:(unsigned long long)arg1 pageName:(id)arg2 params:(id)arg3;

@end

