//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FMPersonalListActionModel : NSObject
{
    _Bool _isEssay;
    unsigned long long _id;
    NSString *_actionDate;
    NSString *_actionGroup;
    NSString *_cardCount;
    NSArray *_ids;
    NSString *_eventName;
}

@property(nonatomic) _Bool isEssay; // @synthesize isEssay=_isEssay;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) NSArray *ids; // @synthesize ids=_ids;
@property(copy, nonatomic) NSString *cardCount; // @synthesize cardCount=_cardCount;
@property(copy, nonatomic) NSString *actionGroup; // @synthesize actionGroup=_actionGroup;
@property(copy, nonatomic) NSString *actionDate; // @synthesize actionDate=_actionDate;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
- (void).cxx_destruct;
- (double)height;

@end

