//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SFPhotoLog : NSObject
{
    NSString *_mode;
    NSString *_content;
}

@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)writeLog;

@end
