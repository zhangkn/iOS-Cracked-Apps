//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OSSResult.h"

@class NSString;

@interface OSSPutObjectResult : OSSResult
{
    NSString *_eTag;
    NSString *_serverReturnJsonString;
}

@property(retain, nonatomic) NSString *serverReturnJsonString; // @synthesize serverReturnJsonString=_serverReturnJsonString;
@property(retain, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
- (void).cxx_destruct;

@end

