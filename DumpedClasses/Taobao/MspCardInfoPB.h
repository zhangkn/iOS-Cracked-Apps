//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface MspCardInfoPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *bankName; // @dynamic bankName;
@property(retain, nonatomic) NSString *cardNo; // @dynamic cardNo;
@property(retain, nonatomic) NSString *extinfo; // @dynamic extinfo;
@property(readonly) _Bool hasBankName; // @dynamic hasBankName;
@property(readonly) _Bool hasCardNo; // @dynamic hasCardNo;
@property(readonly) _Bool hasExtinfo; // @dynamic hasExtinfo;
@property(readonly) _Bool hasInstId; // @dynamic hasInstId;
@property(readonly) _Bool hasPrincipalId; // @dynamic hasPrincipalId;
@property(readonly) _Bool hasSignId; // @dynamic hasSignId;
@property(readonly) _Bool hasUserName; // @dynamic hasUserName;
@property(retain, nonatomic) NSString *instId; // @dynamic instId;
@property(retain, nonatomic) NSString *principalId; // @dynamic principalId;
@property(retain, nonatomic) NSString *signId; // @dynamic signId;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

