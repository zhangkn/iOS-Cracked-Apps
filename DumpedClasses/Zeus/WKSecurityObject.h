//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WKSecurityObject : NSObject
{
    NSString *_title;
    NSString *_buttonTitle;
    long long _cellType;
    CDUnknownBlockType _buttonHandle;
    id _otherInfo;
}

+ (id)objectWithTitle:(id)arg1 buttonTitle:(id)arg2 cellType:(long long)arg3 handler:(CDUnknownBlockType)arg4 otherInfo:(id)arg5;
@property(retain, nonatomic) id otherInfo; // @synthesize otherInfo=_otherInfo;
@property(copy, nonatomic) CDUnknownBlockType buttonHandle; // @synthesize buttonHandle=_buttonHandle;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

