//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class NSString;

@interface QLBanabaSettingModel : QLRequestModel
{
    NSString *_contentKey;
}

@property(copy, nonatomic) NSString *contentKey; // @synthesize contentKey=_contentKey;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (_Bool)processResponce:(id)arg1 isCache:(_Bool)arg2;
- (void)requestBanabaSettingWithContentKey:(id)arg1;
- (void)requestDidRetryRequest:(id)arg1;
- (void)cancelDataRequest;
- (void)dealloc;

// Remaining properties
@property(nonatomic) __weak id <QLBanabaSettingModelDelegate> delegate;

@end

