//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _EXLObjCAllocChecker;

@interface CHLObjCObjectRecognizerDuplicate : NSObject
{
    struct unordered_set<Class, std::__1::hash<Class>, std::__1::equal_to<Class>, std::__1::allocator<Class>> _classSet;
    _EXLObjCAllocChecker *_allocChecker;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)objectAtRange:(CDStruct_a508bfa1)arg1;
- (_Bool)isWhiteListed:(id)arg1;
- (void)checkStaticObjects:(id)arg1 pointeeList:(id)arg2;
- (_Bool)examineRange:(CDStruct_a508bfa1)arg1 deferredList:(id)arg2 validList:(id)arg3;
- (id)examineRange:(CDStruct_a508bfa1)arg1 pointeeList:(id)arg2 isValid:(_Bool *)arg3;
- (id)init;

@end

