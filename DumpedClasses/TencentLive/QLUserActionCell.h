//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class QLImageView, QLTopicsPopMenuItemInfo, QLTopicsPopMenuItemView, UILabel, UIView;

@interface QLUserActionCell : UITableViewCell
{
    QLTopicsPopMenuItemView *_itemButton;
    QLImageView *_imagerView;
    UILabel *_lblText;
    QLTopicsPopMenuItemInfo *_itemInfo;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) QLTopicsPopMenuItemInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
@property(retain, nonatomic) UILabel *lblText; // @synthesize lblText=_lblText;
@property(retain, nonatomic) QLImageView *imagerView; // @synthesize imagerView=_imagerView;
@property(retain, nonatomic) QLTopicsPopMenuItemView *itemButton; // @synthesize itemButton=_itemButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)getItemInfo;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

