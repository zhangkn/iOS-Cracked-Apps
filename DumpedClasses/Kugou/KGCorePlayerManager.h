//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGPlayerManager.h"

@class IpodDecoder, NSTimer;

@interface KGCorePlayerManager : KGPlayerManager
{
    void *_playcontroller;
    NSTimer *_fmTimer;
    double _fmFlow;
    double _tempFmFlow;
    float _volume;
    int _audioType;
    struct PlayController *_playC;
    long long _type;
    IpodDecoder *_ipodDecoder;
}

@property(retain, nonatomic) IpodDecoder *ipodDecoder; // @synthesize ipodDecoder=_ipodDecoder;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)getproxySize;
- (_Bool)addAudioEffect:(void *)arg1 trackIndex:(int)arg2;
- (void)setCanUseSeekByte:(_Bool)arg1;
- (void)removeAudioEffect:(void *)arg1 trackIndex:(int)arg2;
- (void)setAudioPipe:(void *)arg1;
- (void)setListener:(void *)arg1;
- (void)startConvertForBeautifyVoice:(id)arg1 destPath:(id)arg2;
- (void)startConvertWithSourcePath:(id)arg1 andDestPath:(id)arg2 formatType:(int)arg3 voicePath:(id)arg4;
- (void)startConvertWithSourcePath:(id)arg1 andDestPath:(id)arg2 formatType:(int)arg3 voicePath:(id)arg4 unSourcePlayStarts:(id)arg5 unSourcePlayends:(id)arg6 startsRecord:(id)arg7 endsRecord:(id)arg8;
- (void)startConvertWithSourcePath:(id)arg1 andDestPath:(id)arg2;
- (void)setRenderContext:(void *)arg1;
- (void)render;
- (void)setAreaWithXValue:(int)arg1 yValue:(int)arg2 widthValue:(int)arg3 andHeightValue:(int)arg4;
- (void)setDisplay;
- (_Bool)isExtendAudioTrackEnabled;
- (void)enableExtendAudioTrack:(_Bool)arg1;
- (int)getAudioTrackCount;
- (void)setVoiceMoveStep:(int)arg1;
- (void)setBalance:(float)arg1 rValue:(float)arg2;
- (void)setVolumeRate:(float)arg1 andPrate:(float)arg2;
- (void)setVolume:(float)arg1 andTrackIndex:(int)arg2;
- (void)setVolumeRatio:(double)arg1;
- (void)setPersistentVolume:(float)arg1;
- (void)setVolume:(float)arg1;
- (void)setLoopCount:(int)arg1;
- (int)getLoopCount;
- (void)setRTMPTimeout:(int)arg1;
- (void)setProxyServer:(id)arg1 andPort:(int)arg2;
- (void)setUnicomProxy:(id)arg1;
- (unsigned long long)getStatus;
- (float)volume;
- (double)position;
- (double)duration;
- (void)sendCommand:(unsigned long long)arg1;
- (void)seekTo:(double)arg1;
- (void)stop;
- (void)pause;
- (void)start;
- (void)prepareAsync;
- (void)setDataSourceForChorus:(id)arg1 playType:(long long)arg2 unSourcePlayStarts:(id)arg3 unSourcePlayends:(id)arg4 startsRecord:(id)arg5 endsRecord:(id)arg6;
- (void)setDataSource:(void *)arg1 playType:(long long)arg2 audioType:(int)arg3 start:(double)arg4 end:(double)arg5;
- (void)setDataSource:(void *)arg1 playType:(long long)arg2 start:(double)arg3 end:(double)arg4;
- (void)setDataSource:(void *)arg1 playType:(long long)arg2;
- (void)setDataSourceWithPath:(id)arg1 playType:(long long)arg2 audioType:(int)arg3 start:(double)arg4 end:(double)arg5;
- (void)setDataSourceWithPath:(id)arg1 playType:(long long)arg2 start:(double)arg3 end:(double)arg4;
- (void)setDataSourceWithPath:(id)arg1 playType:(long long)arg2;
- (const char *)MyUTF8String:(id)arg1;
- (id)init;
- (void)dealloc;

@end

