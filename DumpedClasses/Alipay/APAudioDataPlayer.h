//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APMAudioSessionManagerDelegate.h"
#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, NSObject<OS_dispatch_queue>, NSString;

@interface APAudioDataPlayer : NSObject <AVAudioPlayerDelegate, APMAudioSessionManagerDelegate>
{
    double _volume;
    AVAudioPlayer *_internalPlayer;
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_playQueue;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playQueue; // @synthesize playQueue=_playQueue;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) AVAudioPlayer *internalPlayer; // @synthesize internalPlayer=_internalPlayer;
@property(nonatomic) double volume; // @synthesize volume=_volume;
- (void).cxx_destruct;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)clearPlayer;
- (double)getVolume;
@property(readonly, getter=isPlaying) _Bool playing;
- (void)stopPlay;
- (void)playAudioData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned long long sessionMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
