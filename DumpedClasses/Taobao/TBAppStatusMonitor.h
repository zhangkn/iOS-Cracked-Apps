//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableString, NSString, NSTimer, TBInstanceMonitor, TBNetworkMonitor, TBRuntimeProfileV2;

@interface TBAppStatusMonitor : NSObject
{
    _Bool _isEnableTLog;
    CDUnknownBlockType _trafficMonitorBlock;
    id <TBAppStatusMonitorDelegate> _delegate;
    NSArray *_filterArray;
    id <TBMonitorDataHandlerProtocol> _defaultHandler;
    TBNetworkMonitor *_trafficMonitor;
    NSMutableArray *_handlerArray;
    NSTimer *_monitorTimer;
    NSString *_pageName;
    id <TBMonitorDataHandlerProtocol> _periodicHandler;
    TBNetworkMonitor *_periodicTrafficMonitor;
    NSMutableString *_appStateRecord;
    TBRuntimeProfileV2 *_offlineMsgSendCostMonitor;
    TBInstanceMonitor *_onlineInstanceMonitor;
    NSDictionary *_lastInstancesInfo;
}

+ (id)shareInstance;
+ (void)load;
@property(retain, nonatomic) NSDictionary *lastInstancesInfo; // @synthesize lastInstancesInfo=_lastInstancesInfo;
@property(retain, nonatomic) TBInstanceMonitor *onlineInstanceMonitor; // @synthesize onlineInstanceMonitor=_onlineInstanceMonitor;
@property(retain, nonatomic) TBRuntimeProfileV2 *offlineMsgSendCostMonitor; // @synthesize offlineMsgSendCostMonitor=_offlineMsgSendCostMonitor;
@property(retain, nonatomic) NSMutableString *appStateRecord; // @synthesize appStateRecord=_appStateRecord;
@property(retain, nonatomic) TBNetworkMonitor *periodicTrafficMonitor; // @synthesize periodicTrafficMonitor=_periodicTrafficMonitor;
@property(retain, nonatomic) id <TBMonitorDataHandlerProtocol> periodicHandler; // @synthesize periodicHandler=_periodicHandler;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSTimer *monitorTimer; // @synthesize monitorTimer=_monitorTimer;
@property(retain, nonatomic) NSMutableArray *handlerArray; // @synthesize handlerArray=_handlerArray;
@property(retain, nonatomic) TBNetworkMonitor *trafficMonitor; // @synthesize trafficMonitor=_trafficMonitor;
@property(retain, nonatomic) id <TBMonitorDataHandlerProtocol> defaultHandler; // @synthesize defaultHandler=_defaultHandler;
@property(retain, nonatomic) NSArray *filterArray; // @synthesize filterArray=_filterArray;
@property(nonatomic) _Bool isEnableTLog; // @synthesize isEnableTLog=_isEnableTLog;
@property(nonatomic) __weak id <TBAppStatusMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType trafficMonitorBlock; // @synthesize trafficMonitorBlock=_trafficMonitorBlock;
- (void).cxx_destruct;
- (void)runtimeProfileEndSnapshot:(id)arg1;
- (void)runtimeProfileMakeSnapshot:(id)arg1;
- (void)triggerOnlineMonitor:(unsigned long long)arg1 pageChangeType:(long long)arg2 pageName:(id)arg3;
- (void)startOnlineMonitor:(unsigned long long)arg1;
- (id)generatePerformanceData:(id)arg1;
- (id)endTLogMonitor:(id)arg1;
- (id)makeTLogMonitor:(id)arg1;
- (void)beginTLogMonitor;
- (void)setAppStatusMonitorEnableTLog:(id)arg1;
- (void)shutoffOnlineMonitor:(unsigned long long)arg1 pageName:(id)arg2;
- (void)appDidEnterBackground:(id)arg1;
- (void)appDidFinishLaunching:(id)arg1;
- (void)monitorTimerFired:(id)arg1;
- (void)stopPeriodicMonitor;
- (void)startPeriodicMonitor;
- (void)endSnapshot:(id)arg1;
- (void)makeSnapshot:(id)arg1;
- (void)beginSnapshot:(id)arg1;
- (void)removeHandler:(id)arg1;
- (void)addHandler:(id)arg1;
- (void)stopAllTypeMonitor;
- (void)startAllTypeMonitor;
- (void)handleAllData;
- (void)handleMethodTimeConsumingData:(id)arg1;
- (void)handleTrafficData:(id)arg1;
- (void)endHandle;
- (void)beginHandle;
- (void)dealloc;
- (id)init;

@end
