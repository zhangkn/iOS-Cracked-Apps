//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, QLJCEFanInvolveItem;

@interface QLJCEFanTuanNavOperatePageResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    QLJCEFanInvolveItem *jcev2_p_1_r_fanInfo;
    NSArray *jcev2_p_2_r_moduleList__b0x9i_VOQLJCELiveTabModuleInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_moduleList, setter=setJce_moduleList:) NSArray *jcev2_p_2_r_moduleList__b0x9i_VOQLJCELiveTabModuleInfo; // @synthesize jcev2_p_2_r_moduleList__b0x9i_VOQLJCELiveTabModuleInfo;
@property(retain, nonatomic, getter=jce_fanInfo, setter=setJce_fanInfo:) QLJCEFanInvolveItem *jcev2_p_1_r_fanInfo; // @synthesize jcev2_p_1_r_fanInfo;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end
