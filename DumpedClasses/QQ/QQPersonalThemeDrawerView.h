//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQAsynUrlImageView, QQPersonalThemeAsynUrlImageView;

@interface QQPersonalThemeDrawerView : UIView
{
    QQPersonalThemeAsynUrlImageView *_bgView;
    QQAsynUrlImageView *_preView;
    UIView *_maskView;
    long long _type;
    NSString *_bgViewUrl;
    NSString *_preViewUrl;
    int _xo;
}

+ (id)getPreviewViewWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) QQPersonalThemeAsynUrlImageView *bgView; // @dynamic bgView;
@property(copy, nonatomic) NSString *bgViewUrl; // @dynamic bgViewUrl;
@property(retain, nonatomic) UIView *maskView; // @dynamic maskView;
@property(retain, nonatomic) QQAsynUrlImageView *preView; // @dynamic preView;
@property(copy, nonatomic) NSString *preViewUrl; // @dynamic preViewUrl;
@property(nonatomic) long long type; // @dynamic type;

@end
