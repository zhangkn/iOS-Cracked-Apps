//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol P_QNBAppConfigConfig <NSObject>
- (NSString *)getLangString:(NSString *)arg1;
- (NSArray *)getConfigPropertyArray:(NSString *)arg1;
- (NSDictionary *)getConfigPropertyObject:(NSString *)arg1;
- (NSString *)getConfigPropertyString:(NSString *)arg1;
- (_Bool)getConfigPropertyBool:(NSString *)arg1;
- (double)getConfigPropertyDouble:(NSString *)arg1;
- (float)getConfigPropertyFloat:(NSString *)arg1;
- (int)getConfigPropertyInt:(NSString *)arg1;
@end

