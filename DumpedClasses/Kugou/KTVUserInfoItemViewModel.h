//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface KTVUserInfoItemViewModel : NSObject
{
    _Bool _privary;
    NSString *_property_Title;
    NSString *_value_Content;
    NSArray *_hobbys;
}

@property(nonatomic) _Bool privary; // @synthesize privary=_privary;
@property(retain, nonatomic) NSArray *hobbys; // @synthesize hobbys=_hobbys;
@property(copy, nonatomic) NSString *value_Content; // @synthesize value_Content=_value_Content;
@property(copy, nonatomic) NSString *property_Title; // @synthesize property_Title=_property_Title;
- (void).cxx_destruct;
- (id)init;

@end
