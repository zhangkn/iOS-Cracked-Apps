//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface JumpMovieDetailModel : JceObjectV2
{
    _Bool jcev2_p_7_o_exsource;
    _Bool jcev2_p_8_o_auto_play;
    _Bool jcev2_p_9_o_history;
    _Bool jcev2_p_15_o_needAuthorize;
    short jcev2_p_16_o_page_type;
    NSString *jcev2_p_0_o_column_id;
    NSString *jcev2_p_1_o_cover_id;
    NSString *jcev2_p_2_o_video_id;
    NSString *jcev2_p_3_o_wxid;
    NSString *jcev2_p_4_o_program_id;
    NSString *jcev2_p_5_o_program_type;
    NSString *jcev2_p_6_o_login_qq;
    NSString *jcev2_p_10_o_vote_group_id;
    NSString *jcev2_p_11_o_jump_module_id;
    NSString *jcev2_p_12_o_userid;
    NSString *jcev2_p_13_o_nickname;
    NSString *jcev2_p_14_o_userType;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_page_type, setter=setJce_page_type:) short jcev2_p_16_o_page_type; // @synthesize jcev2_p_16_o_page_type;
@property(nonatomic, getter=jce_needAuthorize, setter=setJce_needAuthorize:) _Bool jcev2_p_15_o_needAuthorize; // @synthesize jcev2_p_15_o_needAuthorize;
@property(retain, nonatomic, getter=jce_userType, setter=setJce_userType:) NSString *jcev2_p_14_o_userType; // @synthesize jcev2_p_14_o_userType;
@property(retain, nonatomic, getter=jce_nickname, setter=setJce_nickname:) NSString *jcev2_p_13_o_nickname; // @synthesize jcev2_p_13_o_nickname;
@property(retain, nonatomic, getter=jce_userid, setter=setJce_userid:) NSString *jcev2_p_12_o_userid; // @synthesize jcev2_p_12_o_userid;
@property(retain, nonatomic, getter=jce_jump_module_id, setter=setJce_jump_module_id:) NSString *jcev2_p_11_o_jump_module_id; // @synthesize jcev2_p_11_o_jump_module_id;
@property(retain, nonatomic, getter=jce_vote_group_id, setter=setJce_vote_group_id:) NSString *jcev2_p_10_o_vote_group_id; // @synthesize jcev2_p_10_o_vote_group_id;
@property(nonatomic, getter=jce_history, setter=setJce_history:) _Bool jcev2_p_9_o_history; // @synthesize jcev2_p_9_o_history;
@property(nonatomic, getter=jce_auto_play, setter=setJce_auto_play:) _Bool jcev2_p_8_o_auto_play; // @synthesize jcev2_p_8_o_auto_play;
@property(nonatomic, getter=jce_exsource, setter=setJce_exsource:) _Bool jcev2_p_7_o_exsource; // @synthesize jcev2_p_7_o_exsource;
@property(retain, nonatomic, getter=jce_login_qq, setter=setJce_login_qq:) NSString *jcev2_p_6_o_login_qq; // @synthesize jcev2_p_6_o_login_qq;
@property(retain, nonatomic, getter=jce_program_type, setter=setJce_program_type:) NSString *jcev2_p_5_o_program_type; // @synthesize jcev2_p_5_o_program_type;
@property(retain, nonatomic, getter=jce_program_id, setter=setJce_program_id:) NSString *jcev2_p_4_o_program_id; // @synthesize jcev2_p_4_o_program_id;
@property(retain, nonatomic, getter=jce_wxid, setter=setJce_wxid:) NSString *jcev2_p_3_o_wxid; // @synthesize jcev2_p_3_o_wxid;
@property(retain, nonatomic, getter=jce_video_id, setter=setJce_video_id:) NSString *jcev2_p_2_o_video_id; // @synthesize jcev2_p_2_o_video_id;
@property(retain, nonatomic, getter=jce_cover_id, setter=setJce_cover_id:) NSString *jcev2_p_1_o_cover_id; // @synthesize jcev2_p_1_o_cover_id;
@property(retain, nonatomic, getter=jce_column_id, setter=setJce_column_id:) NSString *jcev2_p_0_o_column_id; // @synthesize jcev2_p_0_o_column_id;
- (void).cxx_destruct;
- (id)init;

@end
