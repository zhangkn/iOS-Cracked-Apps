//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMAssetMainViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NMAssetMainViewController, NMImagePickerResult, NSString, UINavigationController;

@interface NMImagePickerController : UIViewController <UINavigationControllerDelegate, NMAssetMainViewControllerDelegate>
{
    UINavigationController *_myNavigationController;
    NMAssetMainViewController *_assetMainViewController;
    NMImagePickerResult *_result;
    id <NMImagePickerControllerDelegate> _delegate;
    unsigned long long _type;
}

+ (id)showWithType:(unsigned long long)arg1 delegate:(id)arg2 parentController:(id)arg3 removeOnCompletion:(_Bool)arg4;
+ (id)showWithType:(unsigned long long)arg1 delegate:(id)arg2 parentController:(id)arg3;
+ (id)showWithType:(unsigned long long)arg1 delegate:(id)arg2 removeOnCompletion:(_Bool)arg3;
+ (id)showWithType:(unsigned long long)arg1 delegate:(id)arg2;
+ (struct CGRect)_screenAspectRect;
@property(readonly, nonatomic) NMImagePickerResult *result; // @synthesize result=_result;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <NMImagePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)removeImageResultAtIndex:(unsigned long long)arg1;
- (void)_showInParentController:(id)arg1;
- (void)showInParentController:(id)arg1;
- (void)assetMainViewController:(id)arg1 didFinishPickingVideo:(id)arg2 identifierForVideo:(id)arg3;
- (void)assetMainViewController:(id)arg1 didFinishPickingImages:(id)arg2;
- (void)assetMainViewController:(id)arg1 pickResultUpdated:(id)arg2;
- (void)assetMainViewControllerWillCancel:(id)arg1;
@property(nonatomic) _Bool removeOnCompletion;
@property(nonatomic) double minImageSide; // @dynamic minImageSide;
- (void)setAssetMainController;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

