//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUINode.h"

#import "VUIAnimationListener.h"

@class NSString, TBVRBaseButtonNode, TBVRUIManager, VUIAnimationGroup, VUIDillyNode;

@interface TBVRAlertNode : VUINode <VUIAnimationListener>
{
    NSString *alertTitle;
    NSString *alertMsg;
    NSString *alertButtonTitle;
    TBVRUIManager *_manager;
    VUIDillyNode *_bgNode;
    VUIDillyNode *_msgNode;
    TBVRBaseButtonNode *_okButton;
    CDUnknownBlockType _cancelButtonBlock;
    VUIAnimationGroup *_showAnimation;
    VUIAnimationGroup *_dismissAnimation;
}

@property(retain, nonatomic) VUIAnimationGroup *dismissAnimation; // @synthesize dismissAnimation=_dismissAnimation;
@property(retain, nonatomic) VUIAnimationGroup *showAnimation; // @synthesize showAnimation=_showAnimation;
@property(copy, nonatomic) CDUnknownBlockType cancelButtonBlock; // @synthesize cancelButtonBlock=_cancelButtonBlock;
@property(retain, nonatomic) TBVRBaseButtonNode *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) VUIDillyNode *msgNode; // @synthesize msgNode=_msgNode;
@property(retain, nonatomic) VUIDillyNode *bgNode; // @synthesize bgNode=_bgNode;
@property(nonatomic) __weak TBVRUIManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)onOkButton;
- (void)show;
- (void)onCancel:(id)arg1;
- (void)onEnd:(id)arg1;
- (void)onRepeat:(id)arg1 isReverse:(_Bool)arg2;
- (void)onStart:(id)arg1;
- (void)setupAnimations;
- (void)createNodes;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 cancelButtonBlock:(CDUnknownBlockType)arg4 manager:(id)arg5;
- (id)cancelButtonWithTitle:(id)arg1;
- (id)vrAlertViewWithTitle:(id)arg1 message:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

