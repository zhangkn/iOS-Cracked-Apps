//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol MQQTodayNetSpeedManagerDelegate;

@interface MQQTodayNetSpeedManager : NSObject
{
    id <MQQTodayNetSpeedManagerDelegate> _delegate;
    struct Traffic _preTraffic;
    _Bool _isNetSpeedAvailable;
    double _updateDuration;
    long long _currentUplinkSpeed;
    long long _currentWifiUplinkSpeed;
    long long _currentCellularUplinkSpeed;
    long long _currentDownlinkSpeed;
    long long _currentWifiDownlinkSpeed;
    long long _currentCellularDownlinkSpeed;
    NSTimer *_timer;
}

+ (id)sharedNetSpeedManager;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) _Bool isNetSpeedAvailable; // @synthesize isNetSpeedAvailable=_isNetSpeedAvailable;
@property(readonly, nonatomic) long long currentCellularDownlinkSpeed; // @synthesize currentCellularDownlinkSpeed=_currentCellularDownlinkSpeed;
@property(readonly, nonatomic) long long currentWifiDownlinkSpeed; // @synthesize currentWifiDownlinkSpeed=_currentWifiDownlinkSpeed;
@property(readonly, nonatomic) long long currentDownlinkSpeed; // @synthesize currentDownlinkSpeed=_currentDownlinkSpeed;
@property(readonly, nonatomic) long long currentCellularUplinkSpeed; // @synthesize currentCellularUplinkSpeed=_currentCellularUplinkSpeed;
@property(readonly, nonatomic) long long currentWifiUplinkSpeed; // @synthesize currentWifiUplinkSpeed=_currentWifiUplinkSpeed;
@property(readonly, nonatomic) long long currentUplinkSpeed; // @synthesize currentUplinkSpeed=_currentUplinkSpeed;
@property double updateDuration; // @synthesize updateDuration=_updateDuration;
- (void)updateCurrentSpeed;
- (long long)countDifference:(long long)arg1 withPreTraffic:(long long)arg2;
- (void)stopNetSpeedMonitorAndClearDelegate;
- (void)beginNetSpeedMonitorWithDelegate:(id)arg1;
@property(nonatomic) id <MQQTodayNetSpeedManagerDelegate> delegate;
- (void)dealloc;
- (id)init;

@end

