//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBFeedSecondaryAction-Protocol.h"

@class FBBugReportThankYouView, NSString, UIView;

@interface FBFriendsNearbyIncorrectInformationAction : NSObject <FBFeedSecondaryAction>
{
    NSString *_title;
    NSString *_detail;
    FBBugReportThankYouView *_thankYouView;
    UIView *_dimmingView;
    UIView *_hostingView;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
- (void)_didTapOKButton;
- (id)accessibilityIdentifier;
- (id)overrideIcon;
- (unsigned long long)glyphName;
- (id)detail;
- (id)title;
- (void)performWithSourceView:(id)arg1 sourceRect:(struct CGRect)arg2;
- (id)initWithTitle:(id)arg1 detail:(id)arg2 action:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

