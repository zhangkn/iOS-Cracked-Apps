//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCONTENTBaseRpcReq.h"

@class NSDictionary, NSString;

@interface KBCONTENTContentSearchReq : KBCONTENTBaseRpcReq
{
    int _hasShowNumber;
    NSString *_pageType;
    NSString *_keyWord;
    NSDictionary *_option;
}

+ (Class)optionElementClass;
@property(retain, nonatomic) NSDictionary *option; // @synthesize option=_option;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(nonatomic) int hasShowNumber; // @synthesize hasShowNumber=_hasShowNumber;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
- (void).cxx_destruct;

@end

