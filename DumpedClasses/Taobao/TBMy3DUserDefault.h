//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface TBMy3DUserDefault : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *cache;
}

+ (id)cacheFilePath;
+ (id)standardDefault;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)init;

@end

