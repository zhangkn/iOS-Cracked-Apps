//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBVideoHomeSession, NSString;

@interface FBVideoHomeTTILogger : NSObject
{
    NSString *_ttiType;
    _Bool _firstTTI;
    FBVideoHomeSession *_session;
    int _instanceKey;
}

- (void).cxx_destruct;
- (id)_createMutableExtrasForPerfEvent;
- (void)cancelMarkerWithCancelledByUser:(_Bool)arg1 reason:(id)arg2;
- (void)endMarker;
- (void)endMarkerWithExtras:(id)arg1;
- (void)noteDataDisplayed:(unsigned long long)arg1;
- (void)noteDataLoadSuccessful:(_Bool)arg1 isEmpty:(_Bool)arg2;
- (void)noteDataLoadStartedWithViewState:(id)arg1;
- (void)noteReachabilityChangedToState:(id)arg1;
- (void)noteVHViewDidAppearWithViewState:(id)arg1;
- (void)startForTTIType:(id)arg1 withCacheStatus:(id)arg2;
@property(readonly, nonatomic) _Bool isMarkerStarted;
- (void)dealloc;
- (id)initWithVideoHomeSession:(id)arg1 instanceKey:(int)arg2;

@end

