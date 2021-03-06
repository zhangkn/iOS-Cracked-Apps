//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseHttpDao.h"

@interface PersonalInfoHttpDao : BaseHttpDao
{
}

- (id)rsaStringWithContent:(id)arg1;
- (id)clientTimeString;
- (id)defaultParameter;
- (void)p_handleSomeKuqunWithKey:(id)arg1 andDic:(id)arg2 andReturnDic:(id)arg3;
- (id)kqSignWithDicParamV2:(id)arg1;
- (id)getAttentionArtistWitht_userid:(id)arg1 AndPageNum:(int)arg2 AndError:(id *)arg3;
- (id)getPersonalDetailKuqunWithUseid:(id)arg1 AndError:(id *)arg2;
- (id)requestSynPersonKuqunWithUseid:(id)arg1 AndGetNum:(int)arg2 AndError:(id *)arg3;
- (id)updateBgPicWithPhoto:(id)arg1 AndDownloadUrl:(id)arg2 AndError:(id *)arg3;
- (_Bool)delPersonPhotosWithtPhoto:(id)arg1 AndError:(id *)arg2;
- (id)updatePhotosWithPhotos:(id)arg1 AndDownloadUrl:(id)arg2 AndImage:(id)arg3 AndError:(id *)arg4;
- (id)getUserPhotosWithPersonUserid:(id)arg1 AndPageNum:(unsigned long long)arg2 AndError:(id *)arg3;
- (id)requestUnBindThreePartyWithPartnerId:(int)arg1 andUserId:(int)arg2 andUserInfoRep:(id)arg3 andToken:(id)arg4 andError:(id *)arg5;
- (id)requestBindThreePartyWithPartnerId:(int)arg1 andUserId:(int)arg2 andUserInfoRep:(id)arg3 andToken:(id)arg4 andError:(id *)arg5;
- (id)updateUserOtherInfoWithData:(id)arg1 andUserID:(int)arg2 andUserToken:(id)arg3 andError:(id *)arg4;
- (id)updateUserInfoWithData:(id)arg1 andUserID:(int)arg2 andUserToken:(id)arg3 andError:(id *)arg4;
- (id)getTargetDetailInfoWithUserId:(int)arg1 andError:(id *)arg2;
- (id)getMyDetailInfoWithUserId:(int)arg1 andSource:(int)arg2 andUserToken:(id)arg3 andError:(id *)arg4;
- (id)getOthersBasicInfoWithUserId:(int)arg1 targetUserID:(int)arg2 IDType:(int)arg3 userToken:(id)arg4 expand:(int)arg5 andError:(id *)arg6;
- (id)getMyBasicInfoWithUserId:(int)arg1 andIDType:(int)arg2 andUserToken:(id)arg3 expand:(int)arg4 andError:(id *)arg5;
- (id)getLiveWorkWithTargetUserId:(long long)arg1 pageNumber:(long long)arg2 pageSize:(long long)arg3 error:(id *)arg4;
- (id)getTopPhotosWithTargetUserId:(long long)arg1 andError:(id *)arg2;
- (id)getOtherBasicInfoWithUserId:(long long)arg1 targetUserId:(long long)arg2 andError:(id *)arg3;
- (id)getMyBasicInfoWithUserId:(long long)arg1 andError:(id *)arg2;

@end

