//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEWXUserTokenInfo : JceObjectV2
{
    unsigned int jcev2_p_5_o_accessTokenExpireTime;
    NSString *jcev2_p_0_o_wxNickName;
    NSString *jcev2_p_1_o_wxFaceImageUrl;
    NSString *jcev2_p_2_o_wxOpenId;
    NSString *jcev2_p_3_o_accessToken;
    NSString *jcev2_p_4_o_refreshToken;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_accessTokenExpireTime, setter=setJce_accessTokenExpireTime:) unsigned int jcev2_p_5_o_accessTokenExpireTime; // @synthesize jcev2_p_5_o_accessTokenExpireTime;
@property(retain, nonatomic, getter=jce_refreshToken, setter=setJce_refreshToken:) NSString *jcev2_p_4_o_refreshToken; // @synthesize jcev2_p_4_o_refreshToken;
@property(retain, nonatomic, getter=jce_accessToken, setter=setJce_accessToken:) NSString *jcev2_p_3_o_accessToken; // @synthesize jcev2_p_3_o_accessToken;
@property(retain, nonatomic, getter=jce_wxOpenId, setter=setJce_wxOpenId:) NSString *jcev2_p_2_o_wxOpenId; // @synthesize jcev2_p_2_o_wxOpenId;
@property(retain, nonatomic, getter=jce_wxFaceImageUrl, setter=setJce_wxFaceImageUrl:) NSString *jcev2_p_1_o_wxFaceImageUrl; // @synthesize jcev2_p_1_o_wxFaceImageUrl;
@property(retain, nonatomic, getter=jce_wxNickName, setter=setJce_wxNickName:) NSString *jcev2_p_0_o_wxNickName; // @synthesize jcev2_p_0_o_wxNickName;
- (void).cxx_destruct;
- (id)init;

@end
