//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AREAggregateAnnotation.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface AREReceivableAgaAnnotation : AREAggregateAnnotation <NSCopying>
{
    NSMutableArray *_annotations;
}

+ (id)annotationReuseIdentifier;
@property(retain, nonatomic) NSMutableArray *annotations; // @synthesize annotations=_annotations;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end

