//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class KGThemeButton, KGThemeLabel, KGThemeLine, KTVInsetsTextField, NSArray, NSMutableArray, NSString, UITextView, UIView;

@interface KTVFeedBackView : UIScrollView <UITextViewDelegate, UITextFieldDelegate>
{
    id <KTVFeedBackViewDelegate> _eventDelegate;
    NSString *_defaultSongNameString;
    NSMutableArray *_selectedReasonButtons;
    KGThemeLabel *_songNameLabel;
    KTVInsetsTextField *_songNameTextField;
    KGThemeButton *_clearSongNameButton;
    KGThemeLine *_separatorLine;
    KGThemeLabel *_singerNameLable;
    KTVInsetsTextField *_singerNameTextField;
    KGThemeButton *_clearSingerNameButton;
    KGThemeLabel *_reasonLabel;
    UIView *_reasonContent;
    NSArray *_reasonArray;
    KGThemeLabel *_otherLabel;
    UITextView *_textView;
    KGThemeLabel *_placeholder;
    KGThemeLabel *_currentTextCountLabel;
    KGThemeLabel *_totalTextCountLabel;
    KGThemeButton *_commitButton;
    KGThemeLine *_reasonTopLine;
    KGThemeLine *_otherTopLine;
    KGThemeLine *_bottomBg;
}

@property(retain, nonatomic) KGThemeLine *bottomBg; // @synthesize bottomBg=_bottomBg;
@property(retain, nonatomic) KGThemeLine *otherTopLine; // @synthesize otherTopLine=_otherTopLine;
@property(retain, nonatomic) KGThemeLine *reasonTopLine; // @synthesize reasonTopLine=_reasonTopLine;
@property(retain, nonatomic) KGThemeButton *commitButton; // @synthesize commitButton=_commitButton;
@property(retain, nonatomic) KGThemeLabel *totalTextCountLabel; // @synthesize totalTextCountLabel=_totalTextCountLabel;
@property(retain, nonatomic) KGThemeLabel *currentTextCountLabel; // @synthesize currentTextCountLabel=_currentTextCountLabel;
@property(retain, nonatomic) KGThemeLabel *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) KGThemeLabel *otherLabel; // @synthesize otherLabel=_otherLabel;
@property(retain, nonatomic) NSArray *reasonArray; // @synthesize reasonArray=_reasonArray;
@property(retain, nonatomic) UIView *reasonContent; // @synthesize reasonContent=_reasonContent;
@property(retain, nonatomic) KGThemeLabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(retain, nonatomic) KGThemeButton *clearSingerNameButton; // @synthesize clearSingerNameButton=_clearSingerNameButton;
@property(retain, nonatomic) KTVInsetsTextField *singerNameTextField; // @synthesize singerNameTextField=_singerNameTextField;
@property(retain, nonatomic) KGThemeLabel *singerNameLable; // @synthesize singerNameLable=_singerNameLable;
@property(retain, nonatomic) KGThemeLine *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) KGThemeButton *clearSongNameButton; // @synthesize clearSongNameButton=_clearSongNameButton;
@property(retain, nonatomic) KTVInsetsTextField *songNameTextField; // @synthesize songNameTextField=_songNameTextField;
@property(retain, nonatomic) KGThemeLabel *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) NSMutableArray *selectedReasonButtons; // @synthesize selectedReasonButtons=_selectedReasonButtons;
@property(copy, nonatomic) NSString *defaultSongNameString; // @synthesize defaultSongNameString=_defaultSongNameString;
@property(nonatomic) __weak id <KTVFeedBackViewDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
- (void).cxx_destruct;
- (void)check;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textFieldWillSwitchClearButton:(id)arg1;
- (void)dealloc;
- (void)unRegisterNotification;
- (void)registerNotification;
- (void)resignFirstRes;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)configureClearButtonHidden;
- (void)clearSingerNameTextField:(id)arg1;
- (void)clearSongNameTextField:(id)arg1;
- (void)reasonButtonClicked:(id)arg1;
- (void)commitButtonAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 defaultSongNameString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
