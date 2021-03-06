//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBAppendMainRateInfo>, NSString;

@interface TBAppendRateInfo : TBJSONModel
{
    NSString *_isArchive;
    NSString *_archive;
    NSString *_sellerId;
    NSString *_tradeId;
    NSString *_affirmTime;
    NSString *_from;
    NSArray<TBAppendMainRateInfo> *_appendRateList;
}

@property(retain, nonatomic) NSArray<TBAppendMainRateInfo> *appendRateList; // @synthesize appendRateList=_appendRateList;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *affirmTime; // @synthesize affirmTime=_affirmTime;
@property(retain, nonatomic) NSString *tradeId; // @synthesize tradeId=_tradeId;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) NSString *archive; // @synthesize archive=_archive;
@property(retain, nonatomic) NSString *isArchive; // @synthesize isArchive=_isArchive;
- (void).cxx_destruct;

@end

