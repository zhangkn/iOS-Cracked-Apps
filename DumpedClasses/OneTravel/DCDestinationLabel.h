//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCRichLabel.h"

#import "DCOrderCardProtocol.h"

@class NSString;

@interface DCDestinationLabel : DCRichLabel <DCOrderCardProtocol>
{
    _Bool _isDescType;
    NSString *_title;
    NSString *_subTitle;
}

@property(nonatomic) _Bool isDescType; // @synthesize isDescType=_isDescType;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reload;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) long long showType;

@end

