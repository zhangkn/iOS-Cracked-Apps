//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, _priv_NBSSafeMutableDictionary;

@interface _priv_NBSPairObjects : NSObject
{
    _priv_NBSSafeMutableDictionary *innerDict;
    NSMutableArray *keys;
}

@property(readonly) NSMutableArray *keys; // @synthesize keys;
- (void).cxx_destruct;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

