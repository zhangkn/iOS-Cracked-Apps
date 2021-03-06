//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZDrawItem.h"

@class NSString, UIColor, UIFont;

@interface QZDrawItemLabel : QZDrawItem
{
    UIFont *_font;
    NSString *_text;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    long long _textAlignment;
    long long _lineBreakMode;
    long long _numberOfLines;
}

@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end

