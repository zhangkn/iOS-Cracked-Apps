//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TBContactShareTipView, UIButton, UIImageView, UILabel, UIView;

@interface TBAddressBookCell : UITableViewCell
{
    UIButton *_checkButton;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_taoNameLabel;
    UILabel *_telLabel;
    UIView *_bottomLineView;
    UILabel *_taoFriendLabel;
    UILabel *_taoFriendTipLabel;
    id <TBAddressBookCellDelegate> _delegate;
    TBContactShareTipView *_contactShareTipView;
}

@property(retain, nonatomic) TBContactShareTipView *contactShareTipView; // @synthesize contactShareTipView=_contactShareTipView;
@property(nonatomic) __weak id <TBAddressBookCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *taoFriendTipLabel; // @synthesize taoFriendTipLabel=_taoFriendTipLabel;
@property(retain, nonatomic) UILabel *taoFriendLabel; // @synthesize taoFriendLabel=_taoFriendLabel;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UILabel *telLabel; // @synthesize telLabel=_telLabel;
@property(retain, nonatomic) UILabel *taoNameLabel; // @synthesize taoNameLabel=_taoNameLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
- (void).cxx_destruct;
- (void)updateCellContentWithContactData:(id)arg1;
- (void)updateCellLineWithIsLastCell:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
