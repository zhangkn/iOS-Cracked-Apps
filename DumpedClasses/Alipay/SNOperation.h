//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBlockOperation.h"

@class SNRetryTask;

@interface SNOperation : NSBlockOperation
{
    SNRetryTask *_task;
}

@property(retain, nonatomic) SNRetryTask *task; // @synthesize task=_task;
- (void).cxx_destruct;

@end
