//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface GWActivityGoodsModel : GWObject
{
    NSString *_goodsid;
    NSString *_goodsname;
    NSString *_shortname;
    NSString *_logo;
    NSString *_desc;
    NSString *_oriprice;
    NSString *_unitprice;
    NSString *_summary;
    NSString *_status;
    NSString *_cardno;
    NSString *_quantity;
    NSString *_biglogo;
}

@property(copy, nonatomic) NSString *biglogo; // @synthesize biglogo=_biglogo;
@property(copy, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *cardno; // @synthesize cardno=_cardno;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *unitprice; // @synthesize unitprice=_unitprice;
@property(copy, nonatomic) NSString *oriprice; // @synthesize oriprice=_oriprice;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *shortname; // @synthesize shortname=_shortname;
@property(copy, nonatomic) NSString *goodsname; // @synthesize goodsname=_goodsname;
@property(copy, nonatomic) NSString *goodsid; // @synthesize goodsid=_goodsid;
- (void).cxx_destruct;
- (id)currentCardNum;
- (_Bool)hasInstrument;
- (_Bool)isSoldOut;

@end
