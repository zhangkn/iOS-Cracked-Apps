//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface APNetErrorView : UIView
{
    SEL btAction;
    UIButton *_tryAgainButton;
}

+ (id)showInParentView:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
@property(retain, nonatomic) UIButton *tryAgainButton; // @synthesize tryAgainButton=_tryAgainButton;
- (void).cxx_destruct;
- (void)dismiss;
- (SEL)btAction;
- (void)setBtAction:(SEL)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

