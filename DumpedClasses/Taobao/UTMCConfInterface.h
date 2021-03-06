//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface UTMCConfInterface : NSObject
{
    id confMrg;
    NSMutableDictionary *sysConfig;
    _Bool _hasUpdateSysConfig;
    _Bool _mswPlugin;
}

+ (_Bool)isHasOrange;
+ (void)setHasOrange;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
@property _Bool mswPlugin; // @synthesize mswPlugin=_mswPlugin;
- (void).cxx_destruct;
- (id)getTimeStamp;
- (void)updateSysConfig:(id)arg1;
- (id)getSysConfig:(id)arg1;
- (_Bool)isDetail:(id)arg1 mp:(id)arg2 confName:(id)arg3;
- (_Bool)isOffLine:(id)arg1 mp:(id)arg2 confName:(id)arg3;
- (int)getAlarmSample:(id)arg1 with:(id)arg2 with:(_Bool)arg3;
- (int)getApSample:(id)arg1 with:(id)arg2 confName:(id)arg3;
- (id)_getConfigWaitForConfigArrive:(id)arg1;
- (id)getSysConfigTable:(id)arg1;
- (_Bool)isUTSampleSuccess:(id)arg1 with:(id)arg2;
- (void)removeSysConfigForUpdate:(id)arg1;
- (void)registerSysConfigForUpdate:(id)arg1 obserer:(id)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

