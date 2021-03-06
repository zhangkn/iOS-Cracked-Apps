//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSLayoutManagerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSDictionary, NSMutableArray, NSString, QYPPPubTextView, UIColor, UIFont, UILabel;

@interface QYPPPublisherTextView : UIView <UITextViewDelegate, NSLayoutManagerDelegate>
{
    NSAttributedString *topicAttrStr;
    NSAttributedString *textTipAttrStr;
    NSDictionary *textAttrDict;
    _Bool _isUserPutIn;
    _Bool _hasTopic;
    _Bool _autoIncrease;
    _Bool _shouldConfigTopic;
    _Bool _needUpdateTopic;
    NSString *_placeholder;
    UIFont *_font;
    UIColor *_textColor;
    long long _maxWord;
    QYPPPubTextView *_textView;
    CDUnknownBlockType _heightDidChangeBlk;
    CDUnknownBlockType _textViewDidChangeBlk;
    CDUnknownBlockType _cursorDidChangeBlk;
    CDUnknownBlockType _popTopicList;
    NSString *_topic;
    UILabel *_placeholderLabel;
    NSString *_plaecholder;
    NSString *_signstring;
    double _initHeight;
    UILabel *_tipLabel;
    double _baseHeight;
    double _lineSpace;
    long long _fixedHeight;
    long long _curHeight;
    double _baseY;
    NSMutableArray *_topicArray;
}

@property(retain, nonatomic) NSMutableArray *topicArray; // @synthesize topicArray=_topicArray;
@property(nonatomic) _Bool needUpdateTopic; // @synthesize needUpdateTopic=_needUpdateTopic;
@property(nonatomic) _Bool shouldConfigTopic; // @synthesize shouldConfigTopic=_shouldConfigTopic;
@property(nonatomic) double baseY; // @synthesize baseY=_baseY;
@property(nonatomic) long long curHeight; // @synthesize curHeight=_curHeight;
@property(nonatomic) long long fixedHeight; // @synthesize fixedHeight=_fixedHeight;
@property(nonatomic) _Bool autoIncrease; // @synthesize autoIncrease=_autoIncrease;
@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
@property(nonatomic) double baseHeight; // @synthesize baseHeight=_baseHeight;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) double initHeight; // @synthesize initHeight=_initHeight;
@property(copy, nonatomic) NSString *signstring; // @synthesize signstring=_signstring;
@property(copy, nonatomic) NSString *plaecholder; // @synthesize plaecholder=_plaecholder;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) _Bool hasTopic; // @synthesize hasTopic=_hasTopic;
@property(nonatomic) _Bool isUserPutIn; // @synthesize isUserPutIn=_isUserPutIn;
@property(copy, nonatomic) CDUnknownBlockType popTopicList; // @synthesize popTopicList=_popTopicList;
@property(copy, nonatomic) CDUnknownBlockType cursorDidChangeBlk; // @synthesize cursorDidChangeBlk=_cursorDidChangeBlk;
@property(copy, nonatomic) CDUnknownBlockType textViewDidChangeBlk; // @synthesize textViewDidChangeBlk=_textViewDidChangeBlk;
@property(copy, nonatomic) CDUnknownBlockType heightDidChangeBlk; // @synthesize heightDidChangeBlk=_heightDidChangeBlk;
@property(readonly, nonatomic) QYPPPubTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) long long maxWord; // @synthesize maxWord=_maxWord;
@property(nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=getMyEventIdArray) NSArray *eventIdArray;
@property(readonly, nonatomic, getter=getMyTopicStrArray) NSArray *topicStrArray;
@property(readonly, nonatomic, getter=getMyTopicRanges) NSArray *topicRanges;
- (void)highLightTopic:(id)arg1 eventId:(id)arg2;
- (void)changeStrToContainTopic:(id)arg1 eventId:(id)arg2 position:(id)arg3;
- (void)insertTopic:(id)arg1 eventId:(id)arg2;
- (_Bool)deleteTopic:(struct _NSRange)arg1;
- (id)getTopicRangeArray:(id)arg1;
- (void)qypp_reloadInputViews;
- (void)qypp_setInputView:(id)arg1;
- (void)qypp_setInputAccessoryView:(id)arg1;
- (long long)topicLengthWithSign;
- (_Bool)isTextViewHighlight:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)attributedStringWithoutTopic;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)deleteByMoodFace:(id)arg1;
- (long long)emojiCount;
- (void)insertEmoji:(id)arg1 imageName:(id)arg2;
- (void)checkShowPlaceholder;
- (void)textColor:(id)arg1;
- (id)mutableAttributeStringWithEmojiText:(id)arg1;
- (id)mutableAttributeStringWithTopicText:(id)arg1;
- (id)topicExpression;
- (id)emojisArray:(id)arg1;
- (void)updateTipLabelContent;
- (void)updateTipLabelFrame;
- (void)configAttributedText:(id)arg1;
- (id)textWithEmoji;
@property(nonatomic) NSString *text;
- (id)internalTextView;
- (void)checkCursorPos;
- (void)setTextSelectedRange:(struct _NSRange)arg1;
- (void)forceCheckCursorPosition;
- (void)clipTextUsingLimitWords;
- (double)heightForView;
- (void)changeHeight;
- (void)enableAutoIncreaseHeight;
- (void)disableAutoIncreaseHeightWithHeight:(long long)arg1;
- (id)realUploadContent;
- (id)topicString;
- (_Bool)isFirstResponder;
- (void)showKeyboard;
- (void)hideKeyboard;
- (void)showTipLabelWithMaxWord:(long long)arg1;
- (void)hideTipLabel;
- (void)configUI;
- (void)totalConfigWithTopic:(id)arg1 placehodler:(id)arg2 atPos:(struct CGPoint)arg3 appendSigntring:(id)arg4;
- (id)initWithTopic:(id)arg1 placehodler:(id)arg2 atPos:(struct CGPoint)arg3 appendSigntring:(id)arg4;
- (id)initWithTopic:(id)arg1 placehodler:(id)arg2 atPos:(struct CGPoint)arg3;
- (id)initWithTopic:(id)arg1 placehodler:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

