//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AMPMonitorItem : NSObject
{
    NSString *_monitor;
    NSString *_channel;
    NSString *_tag;
    double _stTime;
}

@property(nonatomic) double stTime; // @synthesize stTime=_stTime;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *monitor; // @synthesize monitor=_monitor;
- (void).cxx_destruct;

@end

