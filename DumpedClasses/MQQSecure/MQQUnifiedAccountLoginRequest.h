//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQSharkBaseRequest.h"

@class MQQIdentityInfoItem;

@interface MQQUnifiedAccountLoginRequest : MQQSharkBaseRequest
{
    MQQIdentityInfoItem *_mqqIdentityInfoItem;
}

@property(retain, nonatomic) MQQIdentityInfoItem *mqqIdentityInfoItem; // @synthesize mqqIdentityInfoItem=_mqqIdentityInfoItem;
- (void)didSharkDataFailInAccessLayer;
- (void)didSharkDataFail:(const vector_aa1d262e *)arg1 errCode:(long long)arg2;
- (void)didSharkDataFinish:(const vector_aa1d262e *)arg1;
- (_Bool)getCmdId:(int *)arg1 requestData:(vector_aa1d262e *)arg2;
- (void)sendAsyncWithIdentityInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end

