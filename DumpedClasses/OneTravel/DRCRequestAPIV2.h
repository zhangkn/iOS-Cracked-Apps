//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class DRCAPIParams, NSDictionary, NSString;

@interface DRCRequestAPIV2 : NSOperation
{
    _Bool _isCallBackEnabled;
    DRCAPIParams *_apiParams;
    unsigned long long _requestType;
    NSString *_modelClassString;
    CDUnknownBlockType _succBLock;
    CDUnknownBlockType _failBlock;
    NSDictionary *_tasksDict;
    CDUnknownBlockType _retryDelayCalcBlock;
}

+ (id)requestWithHost:(id)arg1 APIName:(id)arg2 type:(unsigned long long)arg3 params:(CDUnknownBlockType)arg4 modelClass:(Class)arg5 success:(CDUnknownBlockType)arg6 failed:(CDUnknownBlockType)arg7 takeUntil:(id)arg8;
@property(copy, nonatomic) CDUnknownBlockType retryDelayCalcBlock; // @synthesize retryDelayCalcBlock=_retryDelayCalcBlock;
@property(retain, nonatomic) NSDictionary *tasksDict; // @synthesize tasksDict=_tasksDict;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType succBLock; // @synthesize succBLock=_succBLock;
@property(nonatomic) _Bool isCallBackEnabled; // @synthesize isCallBackEnabled=_isCallBackEnabled;
@property(retain, nonatomic) NSString *modelClassString; // @synthesize modelClassString=_modelClassString;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) DRCAPIParams *apiParams; // @synthesize apiParams=_apiParams;
- (void).cxx_destruct;
- (id)filterDataObjectInDic:(id)arg1;
- (id)checkErrorWithResponse:(id)arg1;
- (id)transformResponseData:(id)arg1;
- (id)uploadMultiPartFileWithAPIPath:(id)arg1 params:(id)arg2 success:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4 autoRetry:(unsigned long long)arg5 retryInterval:(unsigned long long)arg6 timeOut:(unsigned long long)arg7;
- (id)requestWithAPIPath:(id)arg1 type:(unsigned long long)arg2 params:(id)arg3 success:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5 autoRetry:(unsigned long long)arg6 retryInterval:(unsigned long long)arg7 timeOut:(unsigned long long)arg8;
- (id)requestWithAutoRetry:(long long)arg1 retryInterval:(long long)arg2 timeOut:(unsigned long long)arg3;
- (void)failedForException;
- (id)requestUrlWithAutoRetry:(long long)arg1 retryInterval:(long long)arg2 originalRequestCreator:(CDUnknownBlockType)arg3 originalFailure:(CDUnknownBlockType)arg4;
- (void)cancel;
- (void)startRequest;
- (void)main;
- (id)init;
- (void)dealloc;

@end

