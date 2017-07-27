//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, kkLiveSeeBackBaseInfo;

@interface KKTVProgStateData : NSObject
{
    _Bool isfivecity;
    _Bool lookback;
    _Bool _isPay;
    _Bool _isUserPay;
    _Bool _hasVipResolution;
    long long watermark;
    double _playTime;
    double _totalPlayTime;
    long long _previewCount;
    long long _restPreviewCount;
    long long _liveErroCode;
    long long _queueStatus;
    long long _queueRank;
    long long _queueVipJump;
    NSString *_queueSessionKey;
    kkLiveSeeBackBaseInfo *_seeBackBaseInfo;
    NSArray *_waterMarkInfos;
}

@property(retain, nonatomic) NSArray *waterMarkInfos; // @synthesize waterMarkInfos=_waterMarkInfos;
@property(retain, nonatomic) kkLiveSeeBackBaseInfo *seeBackBaseInfo; // @synthesize seeBackBaseInfo=_seeBackBaseInfo;
@property(copy, nonatomic) NSString *queueSessionKey; // @synthesize queueSessionKey=_queueSessionKey;
@property(nonatomic) long long queueVipJump; // @synthesize queueVipJump=_queueVipJump;
@property(nonatomic) long long queueRank; // @synthesize queueRank=_queueRank;
@property(nonatomic) long long queueStatus; // @synthesize queueStatus=_queueStatus;
@property(nonatomic) _Bool hasVipResolution; // @synthesize hasVipResolution=_hasVipResolution;
@property(nonatomic) long long liveErroCode; // @synthesize liveErroCode=_liveErroCode;
@property(nonatomic) long long restPreviewCount; // @synthesize restPreviewCount=_restPreviewCount;
@property(nonatomic) long long previewCount; // @synthesize previewCount=_previewCount;
@property(nonatomic) double totalPlayTime; // @synthesize totalPlayTime=_totalPlayTime;
@property(nonatomic) double playTime; // @synthesize playTime=_playTime;
@property(nonatomic) _Bool isUserPay; // @synthesize isUserPay=_isUserPay;
@property(nonatomic) _Bool isPay; // @synthesize isPay=_isPay;
@property(nonatomic) long long watermark; // @synthesize watermark;
@property(nonatomic) _Bool lookback; // @synthesize lookback;
@property(nonatomic) _Bool isfivecity; // @synthesize isfivecity;
- (void).cxx_destruct;
- (void)dealloc;

@end
