//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface QYPPCollectionCircleMTLModel : MTLModel <MTLJSONSerializing>
{
    _Bool _collected;
    NSNumber *_wallId;
    NSNumber *_wallType;
    NSNumber *_time;
    NSNumber *_starId;
    NSString *_name;
    NSString *_icon;
    NSNumber *_collectNum;
    NSNumber *_dataFrom;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool collected; // @synthesize collected=_collected;
@property(retain, nonatomic) NSNumber *dataFrom; // @synthesize dataFrom=_dataFrom;
@property(retain, nonatomic) NSNumber *collectNum; // @synthesize collectNum=_collectNum;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *starId; // @synthesize starId=_starId;
@property(retain, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(retain, nonatomic) NSNumber *wallType; // @synthesize wallType=_wallType;
@property(retain, nonatomic) NSNumber *wallId; // @synthesize wallId=_wallId;
- (void).cxx_destruct;

@end

