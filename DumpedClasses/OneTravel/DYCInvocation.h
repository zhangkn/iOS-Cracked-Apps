//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMethodSignature;

@interface DYCInvocation : NSObject
{
    NSMethodSignature *_methodSignature;
    NSArray *_arguments;
    void *_function;
}

+ (id)invocationWithMethodSignature:(id)arg1;
@property(nonatomic) void *function; // @synthesize function=_function;
@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(readonly, nonatomic) NSMethodSignature *methodSignature; // @synthesize methodSignature=_methodSignature;
- (void).cxx_destruct;
- (id)invoke;

@end

