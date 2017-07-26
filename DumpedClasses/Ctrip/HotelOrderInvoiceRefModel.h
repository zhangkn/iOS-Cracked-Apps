//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelOrderInvoiceRefModel : CTBusinessBean
{
    int _invoicebody;
    int _postType;
    int _postPayType;
    int _invoiceType;
    NSString *_title;
    NSString *_address;
    NSString *_provinceName;
    NSString *_cityName;
    NSString *_districtName;
    NSString *_receiver;
    NSString *_postCode;
    NSString *_mobilephone;
    long long _orderID;
    NSString *_taxPayNumber;
    NSString *_email;
}

@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *taxPayNumber; // @synthesize taxPayNumber=_taxPayNumber;
@property(nonatomic) int invoiceType; // @synthesize invoiceType=_invoiceType;
@property(nonatomic) long long orderID; // @synthesize orderID=_orderID;
@property(nonatomic) int postPayType; // @synthesize postPayType=_postPayType;
@property(nonatomic) int postType; // @synthesize postType=_postType;
@property(copy, nonatomic) NSString *mobilephone; // @synthesize mobilephone=_mobilephone;
@property(copy, nonatomic) NSString *postCode; // @synthesize postCode=_postCode;
@property(copy, nonatomic) NSString *receiver; // @synthesize receiver=_receiver;
@property(copy, nonatomic) NSString *districtName; // @synthesize districtName=_districtName;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *provinceName; // @synthesize provinceName=_provinceName;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) int invoicebody; // @synthesize invoicebody=_invoicebody;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
