//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BEECLLocationObject : NSObject
{
    _Bool _coordinateHasConverted;
    double _horizontalAccuracy;
    struct CLLocationCoordinate2D _coordinate;
}

@property(nonatomic) _Bool coordinateHasConverted; // @synthesize coordinateHasConverted=_coordinateHasConverted;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;

@end
