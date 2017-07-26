//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface DeliverInfoInOrderDetailModel : CTBusinessBean
{
    _Bool _guarantee;
    _Bool _isNeedDeliveryStatus;
    int _sendTicketCityID;
    int _cantonID;
    int _addressID;
    int _sendTicketFee;
    NSString *_deliveryType;
    NSString *_receiver;
    NSString *_province;
    NSString *_city;
    NSString *_canton;
    NSString *_address;
    NSString *_postCode;
    NSString *_airport;
    NSString *_sendTicketETime;
    NSString *_sendTicketLTime;
    NSString *_tel;
    NSString *_mobilePhone;
    NSString *_packageInfo;
}

@property(nonatomic) _Bool isNeedDeliveryStatus; // @synthesize isNeedDeliveryStatus=_isNeedDeliveryStatus;
@property(copy, nonatomic) NSString *packageInfo; // @synthesize packageInfo=_packageInfo;
@property(nonatomic) int sendTicketFee; // @synthesize sendTicketFee=_sendTicketFee;
@property(nonatomic) _Bool guarantee; // @synthesize guarantee=_guarantee;
@property(copy, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(copy, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(copy, nonatomic) NSString *sendTicketLTime; // @synthesize sendTicketLTime=_sendTicketLTime;
@property(copy, nonatomic) NSString *sendTicketETime; // @synthesize sendTicketETime=_sendTicketETime;
@property(copy, nonatomic) NSString *airport; // @synthesize airport=_airport;
@property(copy, nonatomic) NSString *postCode; // @synthesize postCode=_postCode;
@property(nonatomic) int addressID; // @synthesize addressID=_addressID;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) int cantonID; // @synthesize cantonID=_cantonID;
@property(copy, nonatomic) NSString *canton; // @synthesize canton=_canton;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *receiver; // @synthesize receiver=_receiver;
@property(nonatomic) int sendTicketCityID; // @synthesize sendTicketCityID=_sendTicketCityID;
@property(copy, nonatomic) NSString *deliveryType; // @synthesize deliveryType=_deliveryType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
