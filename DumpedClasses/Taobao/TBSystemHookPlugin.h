//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AlibcBasePlugin.h"

#import "AlibcOutPluginProtocol.h"

@class NSString;

@interface TBSystemHookPlugin : AlibcBasePlugin <AlibcOutPluginProtocol>
{
}

- (void)outPluginService:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (_Bool)isLegalForSystemHookWithUrl:(id)arg1 config:(id)arg2;
- (_Bool)isBreak;
- (unsigned long long)module;
- (long long)prior;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

