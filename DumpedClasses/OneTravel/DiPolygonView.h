//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DiOverlayPathView.h"

@class DiPolygon;

@interface DiPolygonView : DiOverlayPathView
{
    DiPolygon *_polygon;
    double _mapScale;
}

@property(readonly, nonatomic) DiPolygon *polygon; // @synthesize polygon=_polygon;
- (id)initWithPolygon:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

