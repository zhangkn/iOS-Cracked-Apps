//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface HAppSectionModel : NSObject
{
    NSString *_stageCode;
    NSString *_stageName;
    NSMutableArray *_appList;
}

+ (_Bool)needFilterWithMe:(id)arg1;
@property(retain, nonatomic) NSMutableArray *appList; // @synthesize appList=_appList;
@property(copy, nonatomic) NSString *stageName; // @synthesize stageName=_stageName;
@property(copy, nonatomic) NSString *stageCode; // @synthesize stageCode=_stageCode;
- (void).cxx_destruct;

@end

