//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCellComponent.h"

@class FMDetailRecommendItemComponent;

@interface FMDetailRecommendComponent : FMCellComponent
{
    FMDetailRecommendItemComponent *_leftRecommendItemCVM;
    FMDetailRecommendItemComponent *_rightRecommendItemCVM;
}

@property(retain, nonatomic) FMDetailRecommendItemComponent *rightRecommendItemCVM; // @synthesize rightRecommendItemCVM=_rightRecommendItemCVM;
@property(retain, nonatomic) FMDetailRecommendItemComponent *leftRecommendItemCVM; // @synthesize leftRecommendItemCVM=_leftRecommendItemCVM;
- (void).cxx_destruct;
- (Class)viewClass;

@end

