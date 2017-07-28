//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSString<Optional>, TTPGCAuditInfoItem<Optional><TTPGCAuditInfoItem>, TTUserAuditInfoItem<Optional><TTUserAuditInfoItem>, TTUserVerifiedAuditInfoItem<Optional><TTUserVerifiedAuditInfoItem>;

@interface TTUserAuditInfo : TTResponseModel
{
    NSString<Optional> *_existed_name;
    NSString<Optional> *_tip;
    NSString<Optional> *_name;
    NSString<Optional> *_error_description;
    TTUserAuditInfoItem<Optional><TTUserAuditInfoItem> *_current_info;
    TTPGCAuditInfoItem<Optional><TTPGCAuditInfoItem> *_pgc_audit_info;
    TTUserVerifiedAuditInfoItem<Optional><TTUserVerifiedAuditInfoItem> *_verified_audit_info;
}

+ (id)unpersistence;
+ (void)persistenceModel:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) TTUserVerifiedAuditInfoItem<Optional><TTUserVerifiedAuditInfoItem> *verified_audit_info; // @synthesize verified_audit_info=_verified_audit_info;
@property(retain, nonatomic) TTPGCAuditInfoItem<Optional><TTPGCAuditInfoItem> *pgc_audit_info; // @synthesize pgc_audit_info=_pgc_audit_info;
@property(retain, nonatomic) TTUserAuditInfoItem<Optional><TTUserAuditInfoItem> *current_info; // @synthesize current_info=_current_info;
@property(copy, nonatomic) NSString<Optional> *error_description; // @synthesize error_description=_error_description;
@property(copy, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString<Optional> *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSString<Optional> *existed_name; // @synthesize existed_name=_existed_name;
- (void).cxx_destruct;
- (void)persistence;
- (void)synchronizeWithDictionary:(id)arg1;
- (void)setUserBgImageURLString:(id)arg1;
- (void)setUserAvatarURLString:(id)arg1;
- (void)setUserDescription:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)userBgImageURLString;
- (id)userAvatarURLString;
- (id)userDescription;
- (id)username;
- (id)showingUserBgImageURLString;
- (id)showingUserAvatarURLString;
- (id)showingUserDescription;
- (id)showingUsername;
- (_Bool)modifyUserInfoEnabled;
- (_Bool)isAuditing;
- (_Bool)isAuditingUGCUser;
- (_Bool)isUGCUser;
- (_Bool)isPGCUser;

@end
