//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError;

@interface TBRateResponse : NSObject
{
    NSDictionary *perfStat;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *perfStat; // @synthesize perfStat;
- (void).cxx_destruct;
- (id)initWithError:(id)arg1;

@end

