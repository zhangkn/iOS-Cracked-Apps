//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KugouObject.h"

@class NSString;

@interface KGUserInfoRep : KugouObject
{
    int _sex;
    int _score;
    int _vip_type;
    int _m_type;
    int _y_type;
    int _question_id;
    int _autoChargeType;
    int _autostatus;
    int _producttype;
    NSString *_userid;
    NSString *_username;
    NSString *_truename;
    NSString *_nickname;
    NSString *_pic;
    NSString *_vip_begin_time;
    NSString *_vip_end_time;
    NSString *_m_begin_time;
    NSString *_m_end_time;
    NSString *_reg_time;
    NSString *_province;
    NSString *_city;
    NSString *_memo;
    NSString *_signature;
    NSString *_last_login_time;
    NSString *_birthday;
    NSString *_vip_clearday;
    NSString *_m_clearday;
    NSString *_security_email;
    NSString *_login_email;
    NSString *_login_mobile;
    NSString *_servertime;
    NSString *_m_reset_time;
    NSString *_autoChargeTime;
    NSString *_phone;
}

@property(nonatomic) int producttype; // @synthesize producttype=_producttype;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(nonatomic) int autostatus; // @synthesize autostatus=_autostatus;
@property(nonatomic) int autoChargeType; // @synthesize autoChargeType=_autoChargeType;
@property(copy, nonatomic) NSString *autoChargeTime; // @synthesize autoChargeTime=_autoChargeTime;
@property(copy, nonatomic) NSString *m_reset_time; // @synthesize m_reset_time=_m_reset_time;
@property(copy, nonatomic) NSString *servertime; // @synthesize servertime=_servertime;
@property(nonatomic) int question_id; // @synthesize question_id=_question_id;
@property(copy, nonatomic) NSString *login_mobile; // @synthesize login_mobile=_login_mobile;
@property(copy, nonatomic) NSString *login_email; // @synthesize login_email=_login_email;
@property(copy, nonatomic) NSString *security_email; // @synthesize security_email=_security_email;
@property(copy, nonatomic) NSString *m_clearday; // @synthesize m_clearday=_m_clearday;
@property(copy, nonatomic) NSString *vip_clearday; // @synthesize vip_clearday=_vip_clearday;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSString *last_login_time; // @synthesize last_login_time=_last_login_time;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *reg_time; // @synthesize reg_time=_reg_time;
@property(copy, nonatomic) NSString *m_end_time; // @synthesize m_end_time=_m_end_time;
@property(copy, nonatomic) NSString *m_begin_time; // @synthesize m_begin_time=_m_begin_time;
@property(copy, nonatomic) NSString *vip_end_time; // @synthesize vip_end_time=_vip_end_time;
@property(copy, nonatomic) NSString *vip_begin_time; // @synthesize vip_begin_time=_vip_begin_time;
@property(nonatomic) int y_type; // @synthesize y_type=_y_type;
@property(nonatomic) int m_type; // @synthesize m_type=_m_type;
@property(nonatomic) int vip_type; // @synthesize vip_type=_vip_type;
@property(nonatomic) int score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(nonatomic) int sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *truename; // @synthesize truename=_truename;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *userid; // @synthesize userid=_userid;
- (void).cxx_destruct;

@end

