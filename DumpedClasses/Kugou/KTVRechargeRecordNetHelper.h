//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFResourceObject.h"

@class KtvRechageHttpDAO;

@interface KTVRechargeRecordNetHelper : KFResourceObject
{
    long long _pageSize;
    KtvRechageHttpDAO *_httpRequst;
}

@property(retain, nonatomic) KtvRechageHttpDAO *httpRequst; // @synthesize httpRequst=_httpRequst;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
- (void).cxx_destruct;
- (void)startRequestWithPageNo:(long long)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)init;

@end
