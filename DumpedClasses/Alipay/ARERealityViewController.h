//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AREBaseViewController.h"

#import "ARESenderBarViewProtocol.h"
#import "ARETipsGroupViewDelegate.h"

@class APEdgeRiskAnalyzer, APSecRDS, AREAlertView, AREAnt3DView, ARECameraView, ARELoadingHUD, AREProfileView, ARERPCEngine, AREScanIndicatorView, ARESenderBarView, ARETipsGroupViews, ARScanAREnvelopModel, NSString, REAROpenManager, UIActivityIndicatorView;

@interface ARERealityViewController : AREBaseViewController <ARESenderBarViewProtocol, ARETipsGroupViewDelegate>
{
    _Bool _hasRpcResponse;
    _Bool _shouldUploadImage;
    _Bool _shouldIgnoreBackAlert;
    unsigned long long _realityMode;
    CDUnknownBlockType _snapshotImageCallback;
    APSecRDS *_securityRDS;
    NSString *_limiter;
    ARERPCEngine *_rpcEngine;
    ARESenderBarView *_senderBarView;
    ARETipsGroupViews *_tipsView;
    REAROpenManager *_openManager;
    AREProfileView *_profileView;
    APEdgeRiskAnalyzer *_riskAnalyzer;
    NSString *_riskSealedData;
    NSString *_securityId;
    AREScanIndicatorView *_scanIndicatorView;
    ARELoadingHUD *_loadingHUD;
    AREAlertView *_alertView;
    UIActivityIndicatorView *_loadingIndicatorView;
    AREAnt3DView *_renderView;
    ARScanAREnvelopModel *_envelopModel;
}

+ (void)showAREnvelopeInView:(id)arg1 withModel:(CDUnknownBlockType)arg2 snapshotImage:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic) _Bool shouldIgnoreBackAlert; // @synthesize shouldIgnoreBackAlert=_shouldIgnoreBackAlert;
@property(retain, nonatomic) ARScanAREnvelopModel *envelopModel; // @synthesize envelopModel=_envelopModel;
@property(retain, nonatomic) AREAnt3DView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(nonatomic) __weak AREAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) ARELoadingHUD *loadingHUD; // @synthesize loadingHUD=_loadingHUD;
@property(retain, nonatomic) AREScanIndicatorView *scanIndicatorView; // @synthesize scanIndicatorView=_scanIndicatorView;
@property(retain, nonatomic) NSString *securityId; // @synthesize securityId=_securityId;
@property(nonatomic) _Bool shouldUploadImage; // @synthesize shouldUploadImage=_shouldUploadImage;
@property(copy, nonatomic) NSString *riskSealedData; // @synthesize riskSealedData=_riskSealedData;
@property(retain, nonatomic) APEdgeRiskAnalyzer *riskAnalyzer; // @synthesize riskAnalyzer=_riskAnalyzer;
@property(retain, nonatomic) AREProfileView *profileView; // @synthesize profileView=_profileView;
@property(retain, nonatomic) REAROpenManager *openManager; // @synthesize openManager=_openManager;
@property(retain, nonatomic) ARETipsGroupViews *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) ARESenderBarView *senderBarView; // @synthesize senderBarView=_senderBarView;
@property(nonatomic) _Bool hasRpcResponse; // @synthesize hasRpcResponse=_hasRpcResponse;
@property(retain, nonatomic) ARERPCEngine *rpcEngine; // @synthesize rpcEngine=_rpcEngine;
@property(copy, nonatomic) NSString *limiter; // @synthesize limiter=_limiter;
@property(retain, nonatomic) APSecRDS *securityRDS; // @synthesize securityRDS=_securityRDS;
@property(copy, nonatomic) CDUnknownBlockType snapshotImageCallback; // @synthesize snapshotImageCallback=_snapshotImageCallback;
@property(nonatomic) unsigned long long realityMode; // @synthesize realityMode=_realityMode;
- (void).cxx_destruct;
- (long long)currentNetworkStatus;
- (void)takeColaEnvelope;
- (void)envelopeInspectByEdgeSdk;
- (void)openCombineLuckMoneyViaPicCloudId:(id)arg1;
- (_Bool)isEnvelopeFound;
- (_Bool)isEnvelopeLoaded;
- (void)showAskTips;
- (void)didClickSenderAvatarViewWithType:(unsigned long long)arg1;
- (void)notifyMapRecievedEnvelope:(id)arg1;
- (void)envelopeDidOpenSuccess:(id)arg1;
- (void)envelopeTouched;
- (void)envelopeDidFound;
- (void)updateEnvelopeElements;
- (void)queryEnvelopeDetailInfo;
- (void)checkCameraAndEnvelopeReady;
- (void)didLongPressTipsView;
- (void)cameraViewAnimateClicked:(id)arg1;
- (void)cameraViewAnimateEnd:(id)arg1;
- (void)cameraView:(id)arg1 didFindObject:(id)arg2;
- (void)cameraViewDidFinishLoading:(id)arg1;
- (void)manager:(id)arg1 resultType:(unsigned long long)arg2 combineResult:(id)arg3 error:(id)arg4;
- (void)presentFailedAlertViewWithTitle:(id)arg1 withBizNo:(id)arg2 withExit:(_Bool)arg3 withNotify:(_Bool)arg4;
- (void)touchedUpPreviewButton:(id)arg1;
- (void)showPopMenu;
- (void)toggleRealityFlashLight:(id)arg1;
- (void)navRightBarButtonItem;
- (void)setupViews;
- (void)onTorch;
- (void)doExit;
- (void)confirmExit;
- (void)back;
- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillDestroy;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCrowd:(id)arg1 sign:(id)arg2 annotation:(id)arg3 userLocation:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) ARECameraView *view; // @dynamic view;

@end

