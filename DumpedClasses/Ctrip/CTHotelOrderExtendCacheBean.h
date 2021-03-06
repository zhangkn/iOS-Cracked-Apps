//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBaseHotelOrderCacheBean.h"

@class HotelInvoiceDeliveryModeInformationModel, NSMutableArray, NSString;

@interface CTHotelOrderExtendCacheBean : CTBaseHotelOrderCacheBean
{
    _Bool _isShowMaxQuatityMessage;
    _Bool _showCashToPrepay;
    _Bool _isOriginalOrderExtendTwice;
    NSString *_roomName;
    NSString *_passengers;
    NSString *_specialRemark;
    NSMutableArray *_auditRoomList;
    NSString *_roomProxyRemark;
    NSString *_guranteeRemark;
    NSString *_originalOrderID;
    long long _roomID;
    long long _checkAVID;
    NSString *_ratePlanID;
    NSString *_maxQuantityMessage;
    NSString *_gurranteeToPPRemark;
    NSString *_originalOrderExtendTwiceInfo;
    HotelInvoiceDeliveryModeInformationModel *_invoiceDeliveryModeFromOrder;
}

@property(retain, nonatomic) HotelInvoiceDeliveryModeInformationModel *invoiceDeliveryModeFromOrder; // @synthesize invoiceDeliveryModeFromOrder=_invoiceDeliveryModeFromOrder;
@property(copy, nonatomic) NSString *originalOrderExtendTwiceInfo; // @synthesize originalOrderExtendTwiceInfo=_originalOrderExtendTwiceInfo;
@property(nonatomic) _Bool isOriginalOrderExtendTwice; // @synthesize isOriginalOrderExtendTwice=_isOriginalOrderExtendTwice;
@property(copy, nonatomic) NSString *gurranteeToPPRemark; // @synthesize gurranteeToPPRemark=_gurranteeToPPRemark;
@property(nonatomic) _Bool showCashToPrepay; // @synthesize showCashToPrepay=_showCashToPrepay;
@property(copy, nonatomic) NSString *maxQuantityMessage; // @synthesize maxQuantityMessage=_maxQuantityMessage;
@property(nonatomic) _Bool isShowMaxQuatityMessage; // @synthesize isShowMaxQuatityMessage=_isShowMaxQuatityMessage;
@property(copy, nonatomic) NSString *ratePlanID; // @synthesize ratePlanID=_ratePlanID;
@property(nonatomic) long long checkAVID; // @synthesize checkAVID=_checkAVID;
@property(nonatomic) long long roomID; // @synthesize roomID=_roomID;
@property(copy, nonatomic) NSString *originalOrderID; // @synthesize originalOrderID=_originalOrderID;
@property(copy, nonatomic) NSString *guranteeRemark; // @synthesize guranteeRemark=_guranteeRemark;
@property(copy, nonatomic) NSString *roomProxyRemark; // @synthesize roomProxyRemark=_roomProxyRemark;
@property(retain, nonatomic) NSMutableArray *auditRoomList; // @synthesize auditRoomList=_auditRoomList;
@property(copy, nonatomic) NSString *specialRemark; // @synthesize specialRemark=_specialRemark;
@property(copy, nonatomic) NSString *passengers; // @synthesize passengers=_passengers;
@property(copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
- (void).cxx_destruct;
- (void)calculatePassengerList;
- (void)initCache;

@end

