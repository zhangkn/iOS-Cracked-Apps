//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PSTGridLayoutRow, PSTGridLayoutSection;

@interface PSTGridLayoutItem : NSObject
{
    PSTGridLayoutSection *_section;
    PSTGridLayoutRow *_rowObject;
    struct CGRect _itemFrame;
}

@property(nonatomic) struct CGRect itemFrame; // @synthesize itemFrame=_itemFrame;
@property(nonatomic) PSTGridLayoutRow *rowObject; // @synthesize rowObject=_rowObject;
@property(nonatomic) PSTGridLayoutSection *section; // @synthesize section=_section;
- (id)description;

@end
