//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class XMPPReconnect;

@protocol XMPPReconnectDelegate

@optional
- (_Bool)xmppReconnect:(XMPPReconnect *)arg1 shouldAttemptAutoReconnect:(unsigned int)arg2;
- (void)xmppReconnect:(XMPPReconnect *)arg1 didDetectAccidentalDisconnect:(unsigned int)arg2;
@end
