//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary, NSString, TBShopSNSPluginMenuItemTips;

@interface TBShopSNSPluginMicroMenuItem : TBJSONModel
{
    NSString *_name;
    NSString *_icon;
    NSString *_actionType;
    NSString *_actionValue;
    NSString *_title;
    NSDictionary *_userTrack;
    TBShopSNSPluginMenuItemTips *_tips;
}

@property(retain, nonatomic) TBShopSNSPluginMenuItemTips *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSDictionary *userTrack; // @synthesize userTrack=_userTrack;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *actionValue; // @synthesize actionValue=_actionValue;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
