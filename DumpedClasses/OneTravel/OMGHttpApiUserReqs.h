//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSTimer, OMGNetworkObservers;

@interface OMGHttpApiUserReqs : NSObject
{
    _Bool _open;
    double _timerTime;
    NSMutableDictionary *_cacheDictionary;
    NSTimer *_timer;
    OMGNetworkObservers *_observer;
    unsigned long long _todayRequestNum;
    unsigned long long _maxRequestNum;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long maxRequestNum; // @synthesize maxRequestNum=_maxRequestNum;
@property(nonatomic) unsigned long long todayRequestNum; // @synthesize todayRequestNum=_todayRequestNum;
@property(retain, nonatomic) OMGNetworkObservers *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableDictionary *cacheDictionary; // @synthesize cacheDictionary=_cacheDictionary;
@property(nonatomic) double timerTime; // @synthesize timerTime=_timerTime;
@property(nonatomic, getter=IsOpen, setter=SetOpen:) _Bool open; // @synthesize open=_open;
- (void).cxx_destruct;
- (void)clean;
- (void)dealloc;
- (id)ToString;
- (void)UploadEvent;
- (void)HttpApiUserReqs:(id)arg1;
- (id)init;

@end
