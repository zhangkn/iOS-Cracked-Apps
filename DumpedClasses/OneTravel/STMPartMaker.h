//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIButton, UIColor, UIFont, UIImage, UIView;

@interface STMPartMaker : NSObject
{
    _Bool _isFill;
    double _padding;
    UIView *_view;
    unsigned long long _partAlignment;
    double _alignmentMargin;
    unsigned long long _ignoreAlignment;
    unsigned long long _CRpriority;
    double _minWidth;
    double _maxWidth;
    UIColor *_backColor;
    UIColor *_backBorderColor;
    double _backBorderWidth;
    double _backBorderRadius;
    double _backPaddingHorizontal;
    double _backPaddingVertical;
    UIImage *_backImage;
    UIButton *_button;
    UIColor *_buttonHighlightColor;
    NSString *_text;
    UIFont *_font;
    UIColor *_color;
    UIImage *_image;
    NSString *_imageUrl;
    UIImage *_imagePlaceholder;
    struct CGSize _size;
}

+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithRGBHex:(unsigned int)arg1;
@property(retain, nonatomic) UIImage *imagePlaceholder; // @synthesize imagePlaceholder=_imagePlaceholder;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *buttonHighlightColor; // @synthesize buttonHighlightColor=_buttonHighlightColor;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImage *backImage; // @synthesize backImage=_backImage;
@property(nonatomic) double backPaddingVertical; // @synthesize backPaddingVertical=_backPaddingVertical;
@property(nonatomic) double backPaddingHorizontal; // @synthesize backPaddingHorizontal=_backPaddingHorizontal;
@property(nonatomic) double backBorderRadius; // @synthesize backBorderRadius=_backBorderRadius;
@property(nonatomic) double backBorderWidth; // @synthesize backBorderWidth=_backBorderWidth;
@property(retain, nonatomic) UIColor *backBorderColor; // @synthesize backBorderColor=_backBorderColor;
@property(retain, nonatomic) UIColor *backColor; // @synthesize backColor=_backColor;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) unsigned long long CRpriority; // @synthesize CRpriority=_CRpriority;
@property(nonatomic) unsigned long long ignoreAlignment; // @synthesize ignoreAlignment=_ignoreAlignment;
@property(nonatomic) double alignmentMargin; // @synthesize alignmentMargin=_alignmentMargin;
@property(nonatomic) unsigned long long partAlignment; // @synthesize partAlignment=_partAlignment;
@property(nonatomic) _Bool isFill; // @synthesize isFill=_isFill;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (CDUnknownBlockType)imageUrlIs;
- (CDUnknownBlockType)imageNameIs;
- (CDUnknownBlockType)imageIs;
- (CDUnknownBlockType)colorHexStringIs;
- (CDUnknownBlockType)colorIs;
- (CDUnknownBlockType)fontSizeIs;
- (CDUnknownBlockType)fontIs;
- (CDUnknownBlockType)textIs;
- (CDUnknownBlockType)buttonHighlightColorIs;
- (CDUnknownBlockType)buttonIs;
- (CDUnknownBlockType)backPaddingVerticalIs;
- (CDUnknownBlockType)backPaddingHorizontalIs;
- (CDUnknownBlockType)backBorderRadiusIs;
- (CDUnknownBlockType)backBorderWidthIs;
- (CDUnknownBlockType)backBorderColorHexStringIs;
- (CDUnknownBlockType)backBorderColorIs;
- (CDUnknownBlockType)backColorHexStringIs;
- (CDUnknownBlockType)backColorIs;
- (CDUnknownBlockType)maxWidthEqualTo;
- (CDUnknownBlockType)minWidthEqualTo;
- (CDUnknownBlockType)CRpriorityEqualTo;
- (CDUnknownBlockType)ignoreAlignmentEqualTo;
- (CDUnknownBlockType)alignmentMarginEqualTo;
- (CDUnknownBlockType)partAlignmentEqualTo;
- (CDUnknownBlockType)paddingEqualTo;
- (CDUnknownBlockType)isFillEqualTo;
- (CDUnknownBlockType)customViewEqualTo;
- (CDUnknownBlockType)sizeEqualTo;

@end

