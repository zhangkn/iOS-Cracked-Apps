//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMShortVideoDataProtocol.h"
#import "NSObject.h"

@class NMShortVideoBgmEditViewController, NSString;

@protocol NMShortVideoBgmEditDelegate <NSObject, NMShortVideoDataProtocol>
- (void)bgmEditViewController:(NMShortVideoBgmEditViewController *)arg1 didDownloadBgm:(NSString *)arg2;
- (void)bgmEditViewControllerDidClickPlot:(NMShortVideoBgmEditViewController *)arg1;
- (void)bgmEditViewController:(NMShortVideoBgmEditViewController *)arg1 selectRange:(CDStruct_e83c9415)arg2 startAt:(CDStruct_1b6d18a9)arg3;
- (void)bgmEditViewController:(NMShortVideoBgmEditViewController *)arg1 didChangeLeftVolume:(float)arg2 rightVolume:(float)arg3 isDragged:(_Bool)arg4;

@optional
- (void)bgmEditViewControllerDidTouchContent:(NMShortVideoBgmEditViewController *)arg1;
- (void)bgmEditViewControllerDidLoopBgm:(NMShortVideoBgmEditViewController *)arg1;
- (void)bgmEditViewControllerDidReplaceBgm:(NMShortVideoBgmEditViewController *)arg1;
- (void)bgmEditViewControllerDidDeleteBgm:(NMShortVideoBgmEditViewController *)arg1;
- (void)bgmEditViewControllerDidEditBgm:(NMShortVideoBgmEditViewController *)arg1;
- (void)bgmEditViewControllerDidSelectBgm:(NMShortVideoBgmEditViewController *)arg1;
@end

