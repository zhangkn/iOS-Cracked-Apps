//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class JointPoint, NSString;

@interface GodeyeBaseTask : TBJSONModel
{
    NSString *_sequence;
    JointPoint *_start;
    JointPoint *_stop;
}

+ (id)parseJointPoint:(id)arg1;
@property(retain, nonatomic) JointPoint *stop; // @synthesize stop=_stop;
@property(retain, nonatomic) JointPoint *start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *sequence; // @synthesize sequence=_sequence;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end
