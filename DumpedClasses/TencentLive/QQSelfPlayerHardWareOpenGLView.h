//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class EAGLContext, NSLock, NSMutableArray, NSRecursiveLock;

@interface QQSelfPlayerHardWareOpenGLView : UIView
{
    EAGLContext *_context;
    struct __CVBuffer *_lumaTexture;
    struct __CVBuffer *_chromaTexture;
    struct __CVOpenGLESTextureCache *_videoTextureCache;
    int uniforms[4];
    float _vertices[8];
    unsigned int _frameBufferHandle;
    unsigned int _colorBufferHandle;
    unsigned int _program;
    int _backingWidth;
    int _backingHeight;
    const float *_preferredConversion;
    unsigned long long _frameWidth;
    unsigned long long _frameHeight;
    NSLock *_lock;
    BOOL _didSetupGL;
    BOOL _didStopGL;
    int _tryLockErrorCount;
    NSMutableArray *_registeredNotifications;
    BOOL _glActivePaused;
    NSLock *_appActivityLock;
    double _fps;
    double _scaleFactor;
    NSRecursiveLock *_glActiveLock;
}

+ (Class)layerClass;
@property BOOL glActivePaused; // @synthesize glActivePaused=_glActivePaused;
@property(retain) NSRecursiveLock *glActiveLock; // @synthesize glActiveLock=_glActiveLock;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) double fps; // @synthesize fps=_fps;
@property(retain, nonatomic) NSLock *appActivityLock; // @synthesize appActivityLock=_appActivityLock;
- (void).cxx_destruct;
- (id)snapshotInternalOnIOS6AndBefore;
- (id)snapshotInternalOnIOS7AndLater;
- (id)snapshotInternal;
- (id)snapshot;
- (void)applicationWillTerminate;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)unregisterApplicationObservers;
- (void)registerApplicationObservers;
- (void)toggleGLPaused:(BOOL)arg1;
- (BOOL)tryLockGLActive;
- (void)unlockGLActive;
- (void)lockGLActive;
- (BOOL)linkProgram:(unsigned int)arg1;
- (BOOL)loadShaders;
- (void)setupBuffers;
- (void)cleanUpTextures;
- (void)updateVertices;
- (void)displayPixelBufferInternal:(struct __CVBuffer *)arg1;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (BOOL)isApplicationActive;
- (BOOL)setupGLOnce;
- (BOOL)setupHardGL;
- (id)eaglLayer;
- (BOOL)setupEAGLContext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

