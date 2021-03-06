//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMLocalNotificationWindow, NSData, NSDictionary, NSTimer, TBSDKPushCenterEngine;

@interface FMPushCenter : NSObject
{
    FMLocalNotificationWindow *localNotificationWindow;
    NSTimer *hideTimer;
    _Bool localNotificaionViewIsShowing;
    NSDictionary *currentLocalNotificationUserInfo;
    NSData *_deviceToken;
    TBSDKPushCenterEngine *_pushCenterEngine;
}

+ (void)registerDeviceToken:(id)arg1;
+ (id)instance;
+ (void)setup;
@property(retain, nonatomic) TBSDKPushCenterEngine *pushCenterEngine; // @synthesize pushCenterEngine=_pushCenterEngine;
@property(retain, nonatomic) NSData *deviceToken; // @synthesize deviceToken=_deviceToken;
- (void).cxx_destruct;
- (void)uploadDeviceToken:(id)arg1;
- (void)unBindPushCenter;
- (void)bindPushCenter;
- (void)loginCenterLogoutHandler:(id)arg1;
- (void)loginCenterFailSuccessHandler:(id)arg1;
- (void)loginCenterLoginSuccessHandler:(id)arg1;
- (_Bool)openURL:(id)arg1;
- (void)openURLWithString:(id)arg1;
- (_Bool)openNotificationHandlerWithInfo:(id)arg1;
- (void)detectPan:(id)arg1;
- (void)hidelocalNotificaionWindowWithCallback:(CDUnknownBlockType)arg1;
- (void)hideLocalNotificaionWindow;
- (void)showLocalNotificaionWindow;
- (void)playDefaultSound;
- (void)scheduleLocalNotificationWithUserInfo:(id)arg1;
- (_Bool)processRemoteNotification:(id)arg1;
- (void)needUpgradeApp;
- (void)didReceiveLocalNotification:(id)arg1;
- (void)didReceiveRemoteNotification:(id)arg1;
- (void)appplicationDidFinishLaunchingNotification:(id)arg1;
- (void)addNotificationObserver;
- (id)init;
- (void)dealloc;

@end

