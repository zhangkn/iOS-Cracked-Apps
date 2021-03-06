//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class DTRpcAsyncCaller, TALLYCORETallyScenesManager;

@interface AliAssetTallyBaseOperation : NSOperation
{
    DTRpcAsyncCaller *_rpcCaller;
    TALLYCORETallyScenesManager *_scenesManager;
    CDUnknownBlockType _callBack;
    CDUnknownBlockType _picUploadCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType picUploadCallBack; // @synthesize picUploadCallBack=_picUploadCallBack;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) TALLYCORETallyScenesManager *scenesManager; // @synthesize scenesManager=_scenesManager;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcCaller; // @synthesize rpcCaller=_rpcCaller;
- (void).cxx_destruct;

@end

