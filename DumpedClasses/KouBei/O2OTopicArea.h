//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString, O2OCdpTopic, O2OMallDetail, O2OPromoInfo, O2OScrollAdvertisement, O2OShopRecommend;

@interface O2OTopicArea : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasType;
    _Bool _hasPromoInfo;
    _Bool _hasMallDetail;
    _Bool _hasCdpTopic;
    _Bool _hasYourRecommend;
    _Bool _hasAdvertisement;
    int _type;
    O2OPromoInfo *_promoInfo;
    O2OMallDetail *_mallDetail;
    O2OCdpTopic *_cdpTopic;
    O2OShopRecommend *_yourRecommend;
    O2OScrollAdvertisement *_advertisement;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) O2OScrollAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
@property(retain, nonatomic) O2OShopRecommend *yourRecommend; // @synthesize yourRecommend=_yourRecommend;
@property(retain, nonatomic) O2OCdpTopic *cdpTopic; // @synthesize cdpTopic=_cdpTopic;
@property(retain, nonatomic) O2OMallDetail *mallDetail; // @synthesize mallDetail=_mallDetail;
@property(retain, nonatomic) O2OPromoInfo *promoInfo; // @synthesize promoInfo=_promoInfo;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly) _Bool hasAdvertisement; // @synthesize hasAdvertisement=_hasAdvertisement;
@property(readonly) _Bool hasYourRecommend; // @synthesize hasYourRecommend=_hasYourRecommend;
@property(readonly) _Bool hasCdpTopic; // @synthesize hasCdpTopic=_hasCdpTopic;
@property(readonly) _Bool hasMallDetail; // @synthesize hasMallDetail=_hasMallDetail;
@property(readonly) _Bool hasPromoInfo; // @synthesize hasPromoInfo=_hasPromoInfo;
@property(readonly) _Bool hasType; // @synthesize hasType=_hasType;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

