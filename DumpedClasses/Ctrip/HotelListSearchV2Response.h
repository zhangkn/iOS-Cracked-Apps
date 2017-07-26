//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class CurrentPosotionEntityModel, HotelListRecommendFilterItem, NSMutableArray, NSString, PriceInformatonModel, RecommendInformationModel, RegionInformationModel, RelatedCityEntityModel, ResponseHead, SelfFilterSettingInfoModel;

@interface HotelListSearchV2Response : CTBusinessBean
{
    _Bool _directSearchKeywordIsCity;
    int _result;
    int _recordCount;
    int _timerSchedule;
    ResponseHead *_head;
    NSString *_resultMessage;
    CurrentPosotionEntityModel *_currentPosotionModel;
    RegionInformationModel *_regionInfoModel;
    PriceInformatonModel *_specialPriceNameModel;
    RecommendInformationModel *_recommendInfoModel;
    NSMutableArray *_unifyPortolList;
    SelfFilterSettingInfoModel *_selfdefFilterSettingModel;
    NSMutableArray *_hotelInfoList;
    RelatedCityEntityModel *_relatedCityInfoModel;
    NSMutableArray *_additionSettingList;
    NSString *_sortType;
    NSMutableArray *_recommendCities;
    NSMutableArray *_personalRecommendHotels;
    NSMutableArray *_hotelConfigurationsList;
    NSString *_optimizationSearchDescription;
    HotelListRecommendFilterItem *_recommendFilterItem;
}

@property(retain, nonatomic) HotelListRecommendFilterItem *recommendFilterItem; // @synthesize recommendFilterItem=_recommendFilterItem;
@property(nonatomic) int timerSchedule; // @synthesize timerSchedule=_timerSchedule;
@property(copy, nonatomic) NSString *optimizationSearchDescription; // @synthesize optimizationSearchDescription=_optimizationSearchDescription;
@property(retain, nonatomic) NSMutableArray *hotelConfigurationsList; // @synthesize hotelConfigurationsList=_hotelConfigurationsList;
@property(retain, nonatomic) NSMutableArray *personalRecommendHotels; // @synthesize personalRecommendHotels=_personalRecommendHotels;
@property(retain, nonatomic) NSMutableArray *recommendCities; // @synthesize recommendCities=_recommendCities;
@property(nonatomic) _Bool directSearchKeywordIsCity; // @synthesize directSearchKeywordIsCity=_directSearchKeywordIsCity;
@property(copy, nonatomic) NSString *sortType; // @synthesize sortType=_sortType;
@property(retain, nonatomic) NSMutableArray *additionSettingList; // @synthesize additionSettingList=_additionSettingList;
@property(retain, nonatomic) RelatedCityEntityModel *relatedCityInfoModel; // @synthesize relatedCityInfoModel=_relatedCityInfoModel;
@property(retain, nonatomic) NSMutableArray *hotelInfoList; // @synthesize hotelInfoList=_hotelInfoList;
@property(retain, nonatomic) SelfFilterSettingInfoModel *selfdefFilterSettingModel; // @synthesize selfdefFilterSettingModel=_selfdefFilterSettingModel;
@property(retain, nonatomic) NSMutableArray *unifyPortolList; // @synthesize unifyPortolList=_unifyPortolList;
@property(retain, nonatomic) RecommendInformationModel *recommendInfoModel; // @synthesize recommendInfoModel=_recommendInfoModel;
@property(retain, nonatomic) PriceInformatonModel *specialPriceNameModel; // @synthesize specialPriceNameModel=_specialPriceNameModel;
@property(retain, nonatomic) RegionInformationModel *regionInfoModel; // @synthesize regionInfoModel=_regionInfoModel;
@property(retain, nonatomic) CurrentPosotionEntityModel *currentPosotionModel; // @synthesize currentPosotionModel=_currentPosotionModel;
@property(nonatomic) int recordCount; // @synthesize recordCount=_recordCount;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int result; // @synthesize result=_result;
@property(retain, nonatomic) ResponseHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
