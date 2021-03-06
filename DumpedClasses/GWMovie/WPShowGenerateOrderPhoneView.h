//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, WPShowPayAssistManager, WPTextField;

@interface WPShowGenerateOrderPhoneView : UIView
{
    WPTextField *_phoneField;
    UILabel *_atmLabel;
    WPShowPayAssistManager *_payManager;
}

@property(nonatomic) __weak WPShowPayAssistManager *payManager; // @synthesize payManager=_payManager;
@property(retain, nonatomic) UILabel *atmLabel; // @synthesize atmLabel=_atmLabel;
@property(retain, nonatomic) WPTextField *phoneField; // @synthesize phoneField=_phoneField;
- (void).cxx_destruct;
- (void)textFieldTextDidChangeNotification:(id)arg1;
- (void)showTicketAddress:(id)arg1;
- (void)setupWithPayManager:(id)arg1;
- (void)dealloc;
- (id)init;

@end

