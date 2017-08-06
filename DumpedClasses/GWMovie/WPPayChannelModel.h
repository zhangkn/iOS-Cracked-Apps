//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface WPPayChannelModel : GWObject
{
    NSString *_payname;
    long long _payType;
    NSString *_paymentMode;
    NSString *_gatewayCode;
    NSString *_merchantCode;
    NSString *_bankCode;
    NSString *_paydesc;
    NSString *_imgIcon;
    NSString *_imgHeight;
    NSString *_imgWidht;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *imgWidht; // @synthesize imgWidht=_imgWidht;
@property(copy, nonatomic) NSString *imgHeight; // @synthesize imgHeight=_imgHeight;
@property(retain, nonatomic) NSString *imgIcon; // @synthesize imgIcon=_imgIcon;
@property(copy, nonatomic) NSString *paydesc; // @synthesize paydesc=_paydesc;
@property(copy, nonatomic) NSString *bankCode; // @synthesize bankCode=_bankCode;
@property(copy, nonatomic) NSString *merchantCode; // @synthesize merchantCode=_merchantCode;
@property(copy, nonatomic) NSString *gatewayCode; // @synthesize gatewayCode=_gatewayCode;
@property(copy, nonatomic) NSString *paymentMode; // @synthesize paymentMode=_paymentMode;
@property(nonatomic) long long payType; // @synthesize payType=_payType;
@property(retain, nonatomic) NSString *payname; // @synthesize payname=_payname;
- (void).cxx_destruct;
- (_Bool)isSDKPayChannel;

@end
