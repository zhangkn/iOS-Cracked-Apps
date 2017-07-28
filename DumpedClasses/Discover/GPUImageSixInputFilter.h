//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFiveInputFilter.h"

@class GPUImageFramebuffer;

@interface GPUImageSixInputFilter : GPUImageFiveInputFilter
{
    GPUImageFramebuffer *sixInputFramebuffer;
    int filterSixthTextureCoordinateAttribute;
    int filterInputTextureUniform6;
    int inputRotation6;
    unsigned int filterSourceTexture6;
    CDStruct_1b6d18a9 sixthFrameTime;
    _Bool hasSetFifthTexture;
    _Bool hasReceivedSixthFrame;
    _Bool sixthFrameWasVideo;
    _Bool sixthFrameCheckDisabled;
}

- (void).cxx_destruct;
- (_Bool)newFrameReadyAtTimeHook:(long long)arg1 frameTime:(CDStruct_1b6d18a9)arg2;
- (void)newFrameReadyAtTimeHookReceivedFramesAtIndex:(long long)arg1;
- (void)newFrameReadyAtTimeHookAllReceivedFrames:(_Bool)arg1;
- (_Bool)newFrameReadyAtTimeHasReceivedHook;
- (int)rotatedSizeHook:(long long)arg1;
- (void)setInputRotation:(int)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)renderToTextureglVertexAttribPointerHook;
- (void)renderToTextureglABUHook;
- (void)unlockInputFramebuffer;
- (void)disableSixthFrameCheck;
- (void)initializeAttributes;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end
