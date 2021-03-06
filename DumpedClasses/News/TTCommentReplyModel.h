//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<Optional>, NSString, NSString<Optional>;

@interface TTCommentReplyModel : JSONModel
{
    _Bool _isArticleAuthor;
    NSString *_replyID;
    NSString<Optional> *_commentID;
    NSString *_userID;
    NSString *_replyUserName;
    NSString *_replyContent;
    NSString<Optional> *_userAuthInfo;
    NSArray<Optional> *_authorBadge;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
+ (id)replyModelWithDict:(id)arg1 forCommentID:(id)arg2;
@property(nonatomic) _Bool isArticleAuthor; // @synthesize isArticleAuthor=_isArticleAuthor;
@property(copy, nonatomic) NSArray<Optional> *authorBadge; // @synthesize authorBadge=_authorBadge;
@property(copy, nonatomic) NSString<Optional> *userAuthInfo; // @synthesize userAuthInfo=_userAuthInfo;
@property(copy, nonatomic) NSString *replyContent; // @synthesize replyContent=_replyContent;
@property(copy, nonatomic) NSString *replyUserName; // @synthesize replyUserName=_replyUserName;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString<Optional> *commentID; // @synthesize commentID=_commentID;
@property(copy, nonatomic) NSString *replyID; // @synthesize replyID=_replyID;
- (void).cxx_destruct;
- (id)highlightedSelectURL;
- (_Bool)isUserReplyModel;

@end

