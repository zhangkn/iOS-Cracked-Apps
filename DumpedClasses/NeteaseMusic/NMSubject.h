//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMUser, NSNumber, NSString;

@interface NMSubject : NSObject
{
    _Bool _liked;
    _Bool _subed;
    NSString *_subjectId;
    NSString *_threadId;
    NSNumber *_commentCount;
    NSNumber *_shareCount;
    NSNumber *_readCount;
    NSString *_url;
    NSString *_coverUrl;
    NSString *_rectangleCoverUrl;
    NSString *_title;
    NSString *_pinyin;
    NSString *_shuangpin;
    NSString *_mainTitle;
    NSString *_wxTitle;
    NSString *_shareContent;
    NMUser *_creator;
    long long _createTime;
    long long _likedCount;
    NSString *_summary;
    long long _subedCount;
    long long _subTime;
}

@property(nonatomic) long long subTime; // @synthesize subTime=_subTime;
@property(nonatomic) long long subedCount; // @synthesize subedCount=_subedCount;
@property(nonatomic) _Bool subed; // @synthesize subed=_subed;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(nonatomic) long long likedCount; // @synthesize likedCount=_likedCount;
@property(nonatomic) _Bool liked; // @synthesize liked=_liked;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NMUser *creator; // @synthesize creator=_creator;
@property(retain, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(retain, nonatomic) NSString *wxTitle; // @synthesize wxTitle=_wxTitle;
@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) NSString *shuangpin; // @synthesize shuangpin=_shuangpin;
@property(retain, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *rectangleCoverUrl; // @synthesize rectangleCoverUrl=_rectangleCoverUrl;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber *readCount; // @synthesize readCount=_readCount;
@property(retain, nonatomic) NSNumber *shareCount; // @synthesize shareCount=_shareCount;
@property(retain, nonatomic) NSNumber *commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(retain, nonatomic) NSString *subjectId; // @synthesize subjectId=_subjectId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name;
- (id)proxyForJson;
- (void)fillWithDictionary:(id)arg1 needPinyin:(_Bool)arg2;
- (void)fillWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 needPinyin:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)toRewardResource;

@end

