//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface ShoppingDiscoveryModel : NSObject
{
    NSString *title;
    NSString *iconUrl;
    NSString *url;
    NSData *iconData;
}

@property(retain, nonatomic) NSData *iconData; // @synthesize iconData;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (id)initWithDic:(id)arg1;
- (void)dealloc;

@end
