//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSender.h"

@class NSCondition, NSMutableArray, NSMutableDictionary, NSString;

@interface CTFlightPassengerManager : CTSender
{
    int statEnum;
    NSCondition *statEnumCondition;
    NSCondition *PassengerDownloadCondition;
    NSMutableArray *resultBlockQueue;
    unsigned char isFromFlight;
    NSString *passengerListPageIndex;
    NSMutableArray *passengerListCache;
    int _sourceType;
    NSMutableArray *noteList;
    NSMutableArray *addNoteList;
    NSMutableArray *editNoteList;
    NSString *notRelateLabelText;
    NSString *relateLabelText;
    NSString *notRelateCellText;
    NSString *relateListPopViewTitleText;
    NSString *relateConfirmViewTitleText;
    _Bool _isCloseRelate;
    NSMutableDictionary *_closeWarningDict;
    long long _relateNodeInforId;
    NSString *_certificateMonthCount;
    NSString *_certificateWarningInListPage;
    NSString *_certificateWarningInNewPage;
    NSString *_productIdOrPolicyID;
    NSMutableDictionary *_passengerRatingDict;
}

+ (id)nameWithCertType:(int)arg1;
+ (_Bool)isForceUseChineseIDCardWithCardType:(int)arg1;
+ (id)getCardNemeByType:(int)arg1;
+ (id)shareInstance;
@property(nonatomic) _Bool isCloseRelate; // @synthesize isCloseRelate=_isCloseRelate;
@property(retain, nonatomic) NSMutableDictionary *passengerRatingDict; // @synthesize passengerRatingDict=_passengerRatingDict;
@property(retain, nonatomic) NSString *productIdOrPolicyID; // @synthesize productIdOrPolicyID=_productIdOrPolicyID;
@property(copy, nonatomic) NSString *certificateWarningInNewPage; // @synthesize certificateWarningInNewPage=_certificateWarningInNewPage;
@property(copy, nonatomic) NSString *certificateWarningInListPage; // @synthesize certificateWarningInListPage=_certificateWarningInListPage;
@property(copy, nonatomic) NSString *certificateMonthCount; // @synthesize certificateMonthCount=_certificateMonthCount;
@property(nonatomic) long long relateNodeInforId; // @synthesize relateNodeInforId=_relateNodeInforId;
@property(retain, nonatomic) NSMutableDictionary *closeWarningDict; // @synthesize closeWarningDict=_closeWarningDict;
- (void).cxx_destruct;
- (id)getNotRelateText;
- (id)getRelateConfirmViewTitleText;
- (id)getRelateListPopViewTitleText;
- (id)getnotRelateCellText;
- (id)getRelateText;
- (_Bool)isOpenRelate;
- (int)pageCount;
- (void)setChangedPassengerModel:(id)arg1;
- (id)getPassengerRatingNodeWithInforId:(int)arg1;
- (void)addPassengerRatingDictWithNode:(id)arg1;
- (id)certifiedAlertStringFromNoteListWithType:(int)arg1;
- (void)addCloseWarningToDictWithInfoId:(int)arg1;
- (void)cleanCloseWarningDict;
- (void)setFlightNewPassengerWithFlag:(_Bool)arg1;
- (_Bool)isFlightNewPassenger;
- (id)getPassengerListPageIndex;
- (id)getModifyPassengerModel;
- (id)getFlightPassengerModelByResponse:(id)arg1 savePassengerModel:(id)arg2;
- (id)replaceBlankString:(id)arg1 now:(id)arg2;
- (_Bool)isModifyCard:(id)arg1;
- (_Bool)isDeleteCard:(id)arg1;
- (_Bool)isAddCard:(id)arg1;
- (void)updatePassengerList:(int)arg1 PassengerModel:(id)arg2;
- (id)sendAddPassenger:(id)arg1 BusienssType:(int)arg2;
- (id)sendEditPassenger:(id)arg1 BusienssType:(int)arg2;
- (void)editPassengerHelper:(id)arg1 withPassengerInfoModel:(id)arg2;
- (void)loadMorePassengerList:(_Bool)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)refreshPassengerList:(_Bool)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (int)getTotalPage;
- (id)beforeCorrectWithNoteList:(id)arg1 byType:(int)arg2;
- (id)sendGetFlightPassengerList:(int)arg1 sourceType:(int)arg2;
- (void)sendMessageFinishFlightGetPassenger:(_Bool)arg1 responseEntity:(id)arg2;
- (void)updateStatEnum:(int)arg1;
- (int)getStatEnum;
- (_Bool)isNeedSendService;
- (void)doSignal;
- (void)downloadPassenger:(_Bool)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)reloadPassengerHelper:(_Bool)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)downloadPassengerBeforeOrderPageBySenderTask:(id)arg1 index:(int)arg2 isFromFlight:(_Bool)arg3 sourceType:(int)arg4;
- (void)clean;
- (id)getFlightPassengerList;
- (id)getPassengerList;
- (id)init;

@end
