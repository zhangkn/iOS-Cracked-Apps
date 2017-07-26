//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VZFActionWrapper.h"

@class NSString;

@interface VZFBlockWrapper : NSObject <VZFActionWrapper>
{
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)invoke:(id)arg1;
- (void)invoke:(id)arg1 withCustomParam:(id)arg2;
- (void)invoke:(id)arg1 event:(id)arg2;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
