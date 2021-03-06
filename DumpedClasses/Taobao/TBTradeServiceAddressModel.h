//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTradeComponentModel.h"

@class NSMutableArray;

@interface TBTradeServiceAddressModel : TBTradeComponentModel
{
    NSMutableArray *_options;
    NSMutableArray *_supportedItemArray;
    NSMutableArray *_unsupportedItemArray;
}

- (void).cxx_destruct;
- (long long)stateWithCode:(long long)arg1;
- (void)setState:(long long)arg1;
- (id)addressItemWithKey:(id)arg1;
- (long long)state;
- (id)tips;
- (void)setSelectedId:(id)arg1;
- (id)selectedId;
- (id)unsupportedItemArray;
- (id)supportedItemArray;
- (id)options;
- (void)addAddressOption:(id)arg1;
- (void)reload:(id)arg1;

@end

