//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMDDestroyable.h"
#import "MDAbsObject3DDelegate.h"

@class NSString;

@interface MDAbsObject3D : NSObject <MDAbsObject3DDelegate, IMDDestroyable>
{
    _Bool mVerticesChanged;
    _Bool mTexCoordinateChanged;
    float *mVertexBuffer;
    float *mTextureBuffer;
    short *mIndicesBuffer;
    int mVertexSize;
    int mTextureSize;
    int _mNumIndices;
}

@property(readonly, nonatomic) int mNumIndices; // @synthesize mNumIndices=_mNumIndices;
@property(readonly, copy) NSString *description;
- (void)onDraw;
- (void)uploadTexCoordinateBufferIfNeed:(id)arg1 index:(int)arg2;
- (void)uploadVerticesBufferIfNeed:(id)arg1 index:(int)arg2;
- (void)markTexCoordinateChanged;
- (void)markVerticesChanged;
- (void)markChanged;
- (void)executeLoad;
- (void)setNumIndices:(int)arg1;
- (void)setTextureBuffer:(float *)arg1 size:(int)arg2;
- (short *)getIndices;
- (void)setIndicesBuffer:(short *)arg1 size:(int)arg2;
- (void)setVertexBuffer:(float *)arg1 size:(int)arg2;
- (float *)getTextureBuffer:(int)arg1;
- (float *)getVertexBuffer:(int)arg1;
- (void)destroy;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

