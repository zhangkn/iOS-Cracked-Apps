//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDeliveryViewDO;

@interface FMDeliveryViewModel : NSObject
{
    FMDeliveryViewDO *_viewDO;
}

@property(retain, nonatomic) FMDeliveryViewDO *viewDO; // @synthesize viewDO=_viewDO;
- (void).cxx_destruct;
- (void)requestModifyLogisticsFailedWithErrMsg:(id)arg1 isIntercepted:(_Bool)arg2;
- (void)requestModifyLogisticsSuccessWithData:(id)arg1;
- (void)requestModifyLogistics;
- (void)requestDeliveryFailedWithErrMsg:(id)arg1 isIntercepted:(_Bool)arg2;
- (void)requestDeliverySuccessWithData:(id)arg1;
- (void)requestDelivery;
- (void)deliveryHandler;
- (void)setupModifyLogisticsCompany;
- (id)init;

@end

