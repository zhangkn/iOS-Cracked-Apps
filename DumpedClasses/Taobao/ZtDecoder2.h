//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ZtDecoder2 : NSObject
{
    void *pDec;
}

- (int)decode:(char *)arg1 ofLength:(int)arg2 toSamples:(short *)arg3 ofSampleLength:(int)arg4;
- (void)dealloc;
- (id)initWithSampleRate:(int)arg1;
- (id)init;

@end

