//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DRCBaseModel.h"

@class DRCFetchReturnConfig<Optional>, DRCFetchReturnConfigs<Optional>, DRCRecommendLocInfo<Optional>, NSArray<DRCRemmendItem><Optional>;

@interface DRCRecommendModel : DRCBaseModel
{
    long long _cityBusStatus;
    DRCRecommendLocInfo<Optional> *_fetchLocation;
    DRCRecommendLocInfo<Optional> *_returnLocation;
    long long _fetchTime;
    long long _returnTime;
    NSArray<DRCRemmendItem><Optional> *_recommendItems;
    DRCFetchReturnConfigs<Optional> *_fetchReturnConfigs;
    DRCFetchReturnConfig<Optional> *_fetchConfig;
    DRCFetchReturnConfig<Optional> *_returnConfig;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) DRCFetchReturnConfig<Optional> *returnConfig; // @synthesize returnConfig=_returnConfig;
@property(retain, nonatomic) DRCFetchReturnConfig<Optional> *fetchConfig; // @synthesize fetchConfig=_fetchConfig;
@property(retain, nonatomic) DRCFetchReturnConfigs<Optional> *fetchReturnConfigs; // @synthesize fetchReturnConfigs=_fetchReturnConfigs;
@property(retain, nonatomic) NSArray<DRCRemmendItem><Optional> *recommendItems; // @synthesize recommendItems=_recommendItems;
@property(nonatomic) long long returnTime; // @synthesize returnTime=_returnTime;
@property(nonatomic) long long fetchTime; // @synthesize fetchTime=_fetchTime;
@property(retain, nonatomic) DRCRecommendLocInfo<Optional> *returnLocation; // @synthesize returnLocation=_returnLocation;
@property(retain, nonatomic) DRCRecommendLocInfo<Optional> *fetchLocation; // @synthesize fetchLocation=_fetchLocation;
@property(nonatomic) long long cityBusStatus; // @synthesize cityBusStatus=_cityBusStatus;
- (void).cxx_destruct;
- (id)getReturnCarLocInfo;
- (id)getFetchCarLocInfo;

@end

