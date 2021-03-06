//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, UIColor;

@interface QYPPFeedToolBar : UIView
{
    CDUnknownBlockType _itemTextChanged;
    long long _fontSize;
    UIColor *_normalTextColor;
    UIColor *_selectedTextColor;
    UIColor *_disableTextColor;
    NSMutableArray *_itemInfos;
    NSMutableDictionary *_itemCache;
    CDUnknownBlockType _viewClick;
    CDUnknownBlockType _viewDisableClick;
}

@property(copy, nonatomic) CDUnknownBlockType viewDisableClick; // @synthesize viewDisableClick=_viewDisableClick;
@property(copy, nonatomic) CDUnknownBlockType viewClick; // @synthesize viewClick=_viewClick;
@property(retain, nonatomic) NSMutableDictionary *itemCache; // @synthesize itemCache=_itemCache;
@property(retain, nonatomic) NSMutableArray *itemInfos; // @synthesize itemInfos=_itemInfos;
@property(retain, nonatomic) UIColor *disableTextColor; // @synthesize disableTextColor=_disableTextColor;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *normalTextColor; // @synthesize normalTextColor=_normalTextColor;
@property(nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) CDUnknownBlockType itemTextChanged; // @synthesize itemTextChanged=_itemTextChanged;
- (void).cxx_destruct;
- (void)layoutSeparatorLines;
- (_Bool)isSeparatorLinesCreated;
- (void)layoutItems;
- (void)layoutSubviews;
- (void)setDisableClickEvent:(CDUnknownBlockType)arg1;
- (void)setClickEvent:(CDUnknownBlockType)arg1;
- (id)createSeparatorLine:(long long)arg1 separatorLineColor:(id)arg2;
- (void)addSeparatorLine:(id)arg1;
- (void)setItemSelected:(long long)arg1 selected:(_Bool)arg2;
- (id)itemFromCache:(long long)arg1;
- (id)itemText:(long long)arg1;
- (void)setItemText:(long long)arg1 text:(id)arg2;
- (void)setAllItemEnable:(_Bool)arg1;
- (void)setItemEnable:(long long)arg1 enable:(_Bool)arg2;
- (id)itemInfoById:(long long)arg1;
- (void)buttonClick:(id)arg1;
- (void)cleanItemsCache;
- (void)addItemToCache:(long long)arg1 view:(id)arg2;
- (id)createButton:(long long)arg1 text:(id)arg2 normalImageString:(id)arg3 selectedImageString:(id)arg4 disableImageString:(id)arg5;
- (id)createItemInfo:(long long)arg1 normalImageString:(id)arg2 selectedImageString:(id)arg3 disableImageString:(id)arg4 canSelected:(_Bool)arg5 canAnimate:(_Bool)arg6;
- (void)addItem:(long long)arg1 text:(id)arg2 normalImageString:(id)arg3 selectedImageString:(id)arg4 disableImageString:(id)arg5 canSelected:(_Bool)arg6 canAnimate:(_Bool)arg7;
- (void)setItemStyle:(long long)arg1 normalTextColor:(id)arg2 selectedTextColor:(id)arg3 disableTextColor:(id)arg4;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

