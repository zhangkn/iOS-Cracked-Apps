//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "XMPPRoomOccupant-Protocol.h"

@class NSString, XMPPJID, XMPPPresence;

@interface XMPPRoomOccupantMemoryStorageObject : NSObject <XMPPRoomOccupant, NSCopying, NSCoding>
{
    XMPPPresence *presence;
    XMPPJID *jid;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (long long)compare:(id)arg1;
@property(readonly) XMPPPresence *presence;
@property(readonly) XMPPJID *realJID;
@property(readonly) NSString *affiliation;
@property(readonly) NSString *role;
- (id)itemAttributeStringValueForName:(id)arg1;
@property(readonly) NSString *nickname;
@property(readonly) XMPPJID *jid;
@property(readonly) XMPPJID *roomJID;
- (void)updateWithPresence:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPresence:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

