//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QXLanscapeBaseChatView.h"

@class NSString;

@interface QXLandscapeChatUseGuardOrBadgeView : QXLanscapeBaseChatView
{
    _Bool _isGuard;
    NSString *_opName;
    NSString *_opBadgeLevel;
    NSString *_opGuardLevel;
    NSString *_toName;
    NSString *_badgeName;
}

@property(copy, nonatomic) NSString *badgeName; // @synthesize badgeName=_badgeName;
@property(copy, nonatomic) NSString *toName; // @synthesize toName=_toName;
@property(copy, nonatomic) NSString *opGuardLevel; // @synthesize opGuardLevel=_opGuardLevel;
@property(copy, nonatomic) NSString *opBadgeLevel; // @synthesize opBadgeLevel=_opBadgeLevel;
@property(copy, nonatomic) NSString *opName; // @synthesize opName=_opName;
@property(nonatomic) _Bool isGuard; // @synthesize isGuard=_isGuard;
- (void).cxx_destruct;
- (id)assembleMessageAtIndex:(id)arg1;
- (double)maxTextWidth;
- (void)createUI;
- (id)initViewWithFrame:(struct CGRect)arg1 Object:(id)arg2;

@end

