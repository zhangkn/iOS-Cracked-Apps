//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface TaxiTripInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasTripId; // @dynamic hasTripId;
@property(copy, nonatomic) NSString *status; // @dynamic status;
@property(copy, nonatomic) NSString *tripId; // @dynamic tripId;

@end

