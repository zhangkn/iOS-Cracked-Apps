//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, QYEModuleParameter;
@protocol QYOfflineCenterLogicDelegate;

@interface QYOfflineCenterLogic : NSObject
{
    id <QYOfflineCenterLogicDelegate> _delegate;
    long long _currentModel;
    NSMutableArray *_videoArray;
    NSMutableArray *_bookArray;
    NSMutableArray *_comicArray;
    NSMutableArray *_dataArray;
    QYEModuleParameter *_offlineParameter;
}

+ (_Bool)isTaiwanModel;
+ (void)recordCurrentVCWith:(_Bool)arg1;
+ (_Bool)isCanShowNoNetworkAlertView;
+ (_Bool)isMoreIOS8X;
+ (_Bool)isHasComic;
+ (_Bool)isHasBook;
+ (id)getOfflineBookArray;
+ (id)getOfflineFinishVideoArray;
+ (id)getOfflineAllVideoArray;
@property(retain, nonatomic) QYEModuleParameter *offlineParameter; // @synthesize offlineParameter=_offlineParameter;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSMutableArray *comicArray; // @synthesize comicArray=_comicArray;
@property(retain, nonatomic) NSMutableArray *bookArray; // @synthesize bookArray=_bookArray;
@property(retain, nonatomic) NSMutableArray *videoArray; // @synthesize videoArray=_videoArray;
@property(nonatomic) long long currentModel; // @synthesize currentModel=_currentModel;
@property(nonatomic) __weak id <QYOfflineCenterLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadDataFinishWithArray:(id)arg1;
- (void)loadDataFinish;
- (_Bool)isHasComicRed;
- (_Bool)isHasVideoRed;
- (void)loadOfflineComic;
- (void)loadOfflineBook;
- (void)loadOfflineVideo;
- (void)updateOfflineData;
- (void)reloadOfflineCenterData;
- (void)checkNeedreload;
- (void)registerNotification;
- (id)init;
- (id)initWithFromeType:(long long)arg1;
- (void)dealloc;

@end

