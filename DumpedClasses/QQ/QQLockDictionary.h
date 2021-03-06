//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, QQWeakContainer;

@interface QQLockDictionary : NSObject
{
    NSRecursiveLock *_lock;
    NSMutableDictionary *_dict;
    QQWeakContainer *_validChecker;
    _Bool _bCheckWild;
}

+ (id)dictionaryWithMutableDictionary:(id)arg1;
- (int)count;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allKeysForObject:(id)arg1;
- (id)allValues;
- (id)allKeys;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (int)intForKey:(id)arg1;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (id)fetchDictionary;
- (void)setDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithMutableDictionary:(id)arg1;
- (id)initWithMutableDictionary:(id)arg1 withValidChecker:(id)arg2;
- (id)initWithMutableDictionary:(id)arg1 withValidChecker:(id)arg2 withCheckWild:(_Bool)arg3;
- (id)init;

@end

