//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTNavigatorProtocol.h"

@class NSString;

@interface MTNavigatorProvider : NSObject <MTNavigatorProtocol>
{
}

- (_Bool)checkShouldPushViewControllerWithFilterClassNameArray:(id)arg1;
- (void)pushViewcontrollerToHome:(id)arg1 animated:(_Bool)arg2;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 options:(unsigned long long)arg3;
- (void)popToRootViewControllerWithAnimated:(_Bool)arg1;
- (id)rootViewController;
- (id)viewControllers;
- (id)currentViewController;
- (void)popToViewController:(id)arg1 further:(_Bool)arg2 animated:(_Bool)arg3;
- (void)popViewControllerWithAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)unLockAppRotation;
- (void)lockAppRotation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
