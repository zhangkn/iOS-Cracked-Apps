//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface UTMCEventStreamStrategy : NSObject
{
    NSMutableDictionary *mNormalStreamConfDict;
    NSMutableDictionary *mSpecStreamConfDict;
    _Bool mCEC;
}

- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;
- (id)matchWhichStream:(id)arg1;
- (id)generateRuleConf:(id)arg1;
- (_Bool)mCEC;
- (_Bool)isSpecStreamName:(id)arg1;
- (void)parseInit:(id)arg1 andCEC:(_Bool)arg2;
- (id)initWithConf:(id)arg1 andCEC:(_Bool)arg2;

@end
