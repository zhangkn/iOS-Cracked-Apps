//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTThreadCellItemBase.h"

@class SSThemedLabel, Thread;

@interface TTThreadTitleView : TTThreadCellItemBase
{
    Thread *_originalThreadData;
    SSThemedLabel *_titleLabel;
}

+ (_Bool)shouldShowForData:(id)arg1 listType:(unsigned long long)arg2;
+ (double)heightForData:(id)arg1 width:(double)arg2 listType:(unsigned long long)arg3 numberOfLines:(unsigned long long)arg4;
+ (double)heightForData:(id)arg1 width:(double)arg2 listType:(unsigned long long)arg3;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) Thread *originalThreadData; // @synthesize originalThreadData=_originalThreadData;
- (void).cxx_destruct;
- (void)correctTitleLabelLayout;
- (void)refreshWithData:(id)arg1 listType:(unsigned long long)arg2 numberOfLines:(unsigned long long)arg3;
- (void)refreshWithData:(id)arg1 listType:(unsigned long long)arg2;
- (void)refreshUI;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKVO;
- (void)addKVO;
- (void)settingFontSizeChanged:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)createComponent;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

