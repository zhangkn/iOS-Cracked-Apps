//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSData (ZKAdditions)
- (id)zk_deflate;
- (id)zk_inflate;
- (unsigned long long)zk_crc32:(unsigned long long)arg1;
- (unsigned long long)zk_crc32;
- (id)zk_stringOffsetBy:(unsigned long long *)arg1 length:(unsigned long long)arg2;
- (_Bool)zk_hostBoolOffsetBy:(unsigned long long *)arg1;
- (unsigned long long)zk_hostInt64OffsetBy:(unsigned long long *)arg1;
- (unsigned int)zk_hostInt32OffsetBy:(unsigned long long *)arg1;
- (unsigned short)zk_hostInt16OffsetBy:(unsigned long long *)arg1;
@end
