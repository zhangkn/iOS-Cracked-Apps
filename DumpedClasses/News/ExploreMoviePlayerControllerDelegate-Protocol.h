//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ExploreMoviePlayerControlView, ExploreMoviePlayerController, NSArray, NSString;

@protocol ExploreMoviePlayerControllerDelegate <NSObject>
@property(nonatomic) _Bool isFullScreenButtonAction;
- (_Bool)movieHasFirstFrame;
- (_Bool)shouldResumePlayWhenInterruptionEnd;
- (NSString *)currentCDNHost;
- (void)movieController:(ExploreMoviePlayerController *)arg1 ResolutionButtonClickedWithType:(unsigned long long)arg2 typeString:(NSString *)arg3;
- (NSArray *)supportedResolutionTypes;
- (void)movieControllerPrePlayButtonClicked:(ExploreMoviePlayerController *)arg1;
- (void)controlViewTouched:(ExploreMoviePlayerControlView *)arg1;
- (void)controlView:(ExploreMoviePlayerControlView *)arg1 willAppear:(_Bool)arg2;
- (void)controlView:(ExploreMoviePlayerControlView *)arg1 didAppear:(_Bool)arg2;
- (_Bool)movieControllerShouldPauseWhenEnterForeground:(ExploreMoviePlayerController *)arg1;
- (void)movieControllerLandscapeLeftRightRotate:(ExploreMoviePlayerController *)arg1;
- (_Bool)movieControllerCanRotate:(ExploreMoviePlayerController *)arg1;
- (void)movieControllerRemainderTime:(double)arg1;
- (void)movieControlViewRetryButtonClicked:(ExploreMoviePlayerController *)arg1;
- (_Bool)movieControllerFullScreenButtonClicked:(ExploreMoviePlayerController *)arg1 isFullScreen:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)movieControllerShareButtonClicked:(ExploreMoviePlayerController *)arg1;
- (void)movieControllerPlayButtonClicked:(ExploreMoviePlayerController *)arg1 replay:(_Bool)arg2;
@end

