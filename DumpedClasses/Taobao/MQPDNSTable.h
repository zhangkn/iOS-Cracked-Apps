//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary;

@interface MQPDNSTable : NSObject
{
    NSDate *_dieTime;
    NSDictionary *_dictTable;
}

+ (id)mainTable;
@property(retain, nonatomic) NSDictionary *dictTable; // @synthesize dictTable=_dictTable;
@property(retain, nonatomic) NSDate *dieTime; // @synthesize dieTime=_dieTime;
- (void).cxx_destruct;
- (void)alterHostForDomain:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)hostForDomain:(id)arg1;
- (void)refreshWithJSONObject:(id)arg1 dieTime:(id)arg2;

@end

