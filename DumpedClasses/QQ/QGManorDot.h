//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QAnnotation.h"

@class NSString;

@interface QGManorDot : NSObject <QAnnotation>
{
    _Bool isCurrentPosition;
    _Bool showAsSystemStyle;
    _Bool needRefreshFromSvr;
    _Bool isMars;
    NSString *address;
    NSString *_dotTitle;
    struct CLLocationCoordinate2D coordinate;
}

@property(nonatomic) _Bool isMars; // @synthesize isMars;
@property(nonatomic) _Bool needRefreshFromSvr; // @synthesize needRefreshFromSvr;
@property(nonatomic) _Bool showAsSystemStyle; // @synthesize showAsSystemStyle;
@property(nonatomic) _Bool isCurrentPosition; // @synthesize isCurrentPosition;
@property(copy, nonatomic) NSString *dotTitle; // @synthesize dotTitle=_dotTitle;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate;
- (id)subtitle;
- (id)title;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

