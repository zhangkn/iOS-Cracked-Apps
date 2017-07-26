//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class NSString, PriceType;

@interface CTTrainSalePackageInfoViewModel : CTViewModel
{
    int _daysLimits;
    int _count;
    long long _packageID;
    NSString *_packageName;
    NSString *_packageTitle;
    NSString *_packageDetail;
    NSString *_packageProductTitle;
    NSString *_packageProductDescription;
    PriceType *_unitPrice;
    NSString *_errMsg;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_packageDesUrl;
    NSString *_invoiceTitle;
    long long _actionCode;
    NSString *_packageSubTitle;
    NSString *_packageTag;
}

@property(retain, nonatomic) NSString *packageTag; // @synthesize packageTag=_packageTag;
@property(retain, nonatomic) NSString *packageSubTitle; // @synthesize packageSubTitle=_packageSubTitle;
@property(nonatomic) long long actionCode; // @synthesize actionCode=_actionCode;
@property(copy, nonatomic) NSString *invoiceTitle; // @synthesize invoiceTitle=_invoiceTitle;
@property(retain, nonatomic) NSString *packageDesUrl; // @synthesize packageDesUrl=_packageDesUrl;
@property(nonatomic) int count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int daysLimits; // @synthesize daysLimits=_daysLimits;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(copy, nonatomic) PriceType *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(copy, nonatomic) NSString *packageProductDescription; // @synthesize packageProductDescription=_packageProductDescription;
@property(copy, nonatomic) NSString *packageProductTitle; // @synthesize packageProductTitle=_packageProductTitle;
@property(copy, nonatomic) NSString *packageDetail; // @synthesize packageDetail=_packageDetail;
@property(copy, nonatomic) NSString *packageTitle; // @synthesize packageTitle=_packageTitle;
@property(copy, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(nonatomic) long long packageID; // @synthesize packageID=_packageID;
- (void).cxx_destruct;
- (id)initWithBusinessModelV3:(id)arg1;
- (id)initWithBusinessModelV4:(id)arg1;
- (id)init;
- (void)dealloc;

@end
