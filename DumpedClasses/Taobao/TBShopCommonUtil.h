//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBShopCommonUtil : NSObject
{
}

+ (id)stringfyForResponse:(id)arg1;
+ (id)stringfyForObject:(id)arg1;
+ (id)JSONStringForDic:(id)arg1;
+ (_Bool)shouldUseLocalSimpleShopWithShopPayload:(id)arg1;
+ (id)dictionaryForReplaceRootPayload:(id)arg1 inSimpleJson:(id)arg2;
+ (void)setRootPayload:(id)arg1 inShopComponents:(id)arg2 withRootKey:(id)arg3;
+ (id)rootPayloadInShopComponents:(id)arg1 withRootKey:(id)arg2;
+ (id)rootComponentKeyInShopData:(id)arg1;
+ (id)createSimpleFetchShopJSON;
+ (id)createSimpleWeAppShopJSON;
+ (id)createShopErrorWithMtopError:(id)arg1;
+ (id)createShopDefaultError;

@end

