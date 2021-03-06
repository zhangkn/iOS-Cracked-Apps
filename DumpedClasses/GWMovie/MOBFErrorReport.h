//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSString, UIWindow;

@interface MOBFErrorReport : NSObject <UIApplicationDelegate>
{
    _Bool _isAdded;
    NSString *_appKey;
    NSString *_sdkType;
    NSString *_sdkVersion;
    NSString *_uploadURL;
}

+ (id)sdkTypeStringByType:(unsigned long long)arg1;
@property(nonatomic) _Bool isAdded; // @synthesize isAdded=_isAdded;
@property(copy, nonatomic) NSString *uploadURL; // @synthesize uploadURL=_uploadURL;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *sdkType; // @synthesize sdkType=_sdkType;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (void)writeError:(id)arg1 forType:(unsigned long long)arg2;
- (void)writeErrorDataWithMsg:(id)arg1;
- (id)initWithAppKey:(id)arg1 productType:(id)arg2 sdkVersion:(id)arg3;
- (id)initWithAppKey:(id)arg1 sdkType:(unsigned long long)arg2 sdkVersion:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

