//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDEvent.h"

@class NSError;

@interface PSDPageEvent : PSDEvent
{
    NSError *_error;
}

+ (id)destroyEvent;
+ (id)loadErrorEvent:(id)arg1;
+ (id)loadCompleteEvent;
+ (id)loadDomReadyEvent;
+ (id)loadProgressEvent;
+ (id)loadFirstByteEvent;
+ (id)loadStartEvent;
+ (id)createEvent;
+ (id)allEvent;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;

@end

