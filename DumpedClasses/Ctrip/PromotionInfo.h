//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class PriceType;

@interface PromotionInfo : CTBusinessBean
{
    int _promotionType;
    PriceType *_promotionAvgAmount;
}

@property(retain, nonatomic) PriceType *promotionAvgAmount; // @synthesize promotionAvgAmount=_promotionAvgAmount;
@property(nonatomic) int promotionType; // @synthesize promotionType=_promotionType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
