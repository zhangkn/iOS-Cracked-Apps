//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DiDiPOIEntityModel, NSDate, NSString, TaxiPriceInfoModel;

@interface TaxiPriceWarningViewModel : NSObject
{
    _Bool _remarkOpen;
    long long _type;
    NSString *_url;
    DiDiPOIEntityModel *_fromModel;
    DiDiPOIEntityModel *_toModel;
    TaxiPriceInfoModel *_priceModel;
    NSDate *_date;
    long long _distance;
    struct CGRect _frame;
}

@property(nonatomic) _Bool remarkOpen; // @synthesize remarkOpen=_remarkOpen;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) TaxiPriceInfoModel *priceModel; // @synthesize priceModel=_priceModel;
@property(copy, nonatomic) DiDiPOIEntityModel *toModel; // @synthesize toModel=_toModel;
@property(copy, nonatomic) DiDiPOIEntityModel *fromModel; // @synthesize fromModel=_fromModel;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
