//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface APMidasCommonCGIParamsContructor : NSObject
{
    NSMutableDictionary *_bodyDict;
    NSMutableDictionary *_encryptDict;
}

@property(readonly, nonatomic) NSMutableDictionary *encryptDict; // @synthesize encryptDict=_encryptDict;
@property(readonly, nonatomic) NSMutableDictionary *bodyDict; // @synthesize bodyDict=_bodyDict;
- (void).cxx_destruct;
- (void)setExtend:(id)arg1 enc:(_Bool)arg2;
- (void)setEnCryptParam:(id)arg1 key:(id)arg2;
- (void)addExtraReportFiled;
- (void)setMcardMode:(id)arg1;
- (void)setAccountType:(id)arg1;
- (void)setBuyQuantity:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setReportData:(id)arg1;
- (void)constructEncrypt;
- (void)constructBody;
- (void)constructAll;
- (id)init;

@end

