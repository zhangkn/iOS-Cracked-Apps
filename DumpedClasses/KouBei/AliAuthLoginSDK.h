//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AliAuthAppInfo, NSString;

@interface AliAuthLoginSDK : NSObject
{
    CDUnknownBlockType _callbackBlock;
    NSString *_appAESKey;
    AliAuthAppInfo *_appInfo;
    unsigned long long _environment;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long environment; // @synthesize environment=_environment;
@property(retain, nonatomic) AliAuthAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(copy, nonatomic) NSString *appAESKey; // @synthesize appAESKey=_appAESKey;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hideProgress;
- (void)showProgress;
- (id)openAlipayURL:(id)arg1 uuid:(id)arg2 targetURL:(id)arg3;
- (void)loginWithAlipayAuth:(id)arg1 uuid:(id)arg2;
- (void)loginWithAlipayAuth:(id)arg1;
- (void)loginWithAuthToken:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)handleOpenURL:(id)arg1;
- (_Bool)canHandleOpenURL:(id)arg1;
- (_Bool)canSupportAuthLogin;
- (_Bool)canOpenAlipay;
- (void)initializeWith:(id)arg1 env:(unsigned long long)arg2 appInfo:(id)arg3 delegate:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

