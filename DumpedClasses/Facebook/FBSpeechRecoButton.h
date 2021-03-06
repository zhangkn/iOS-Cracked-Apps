//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBSpeechRecognitionServiceListener-Protocol.h"

@class FBSpeechRecognitionService, NSString, UIActivityIndicatorView, UIButton, UIColor, UIImageView;

@interface FBSpeechRecoButton : UIView <FBSpeechRecognitionServiceListener>
{
    FBSpeechRecognitionService *_client;
    UIButton *_button;
    UIActivityIndicatorView *_spinner;
    UIImageView *_micView;
    double _roundedCornerRadius;
    double _micScale;
    UIColor *_micOutlineColor;
    UIColor *_spinnerColor;
    UIColor *_bgInactiveColor;
    UIColor *_bgListeningColor;
}

@property(retain, nonatomic) UIColor *bgListeningColor; // @synthesize bgListeningColor=_bgListeningColor;
@property(retain, nonatomic) UIColor *bgInactiveColor; // @synthesize bgInactiveColor=_bgInactiveColor;
@property(retain, nonatomic) UIColor *spinnerColor; // @synthesize spinnerColor=_spinnerColor;
@property(retain, nonatomic) UIColor *micOutlineColor; // @synthesize micOutlineColor=_micOutlineColor;
@property(nonatomic) double micScale; // @synthesize micScale=_micScale;
@property(nonatomic) double roundedCornerRadius; // @synthesize roundedCornerRadius=_roundedCornerRadius;
@property(readonly, nonatomic) FBSpeechRecognitionService *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)onRecognitionEnd;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)didStopRec;
- (void)didStartRec;
- (void)didTapButton;
- (void)layoutSubviews;
- (void)applyVisualDefaults;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

