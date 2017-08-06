//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, WPSnackModel;
@protocol WPOrderSnackListCellDelegate;

@interface WPOrderSnackListCell : UITableViewCell
{
    id <WPOrderSnackListCellDelegate> _delegate;
    UIButton *_stepperAddButton;
    UIButton *_stepperMinButton;
    WPSnackModel *_snack;
    UILabel *_numberLabel;
    UILabel *_unitPriceLabel;
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
}

@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *unitPriceLabel; // @synthesize unitPriceLabel=_unitPriceLabel;
@property(nonatomic) __weak UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) WPSnackModel *snack; // @synthesize snack=_snack;
@property(nonatomic) __weak UIButton *stepperMinButton; // @synthesize stepperMinButton=_stepperMinButton;
@property(nonatomic) __weak UIButton *stepperAddButton; // @synthesize stepperAddButton=_stepperAddButton;
@property(nonatomic) __weak id <WPOrderSnackListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changeTotalPrice;
- (void)decideNumControl;
- (void)changeNum:(id)arg1;
- (void)setupWithSnackModel:(id)arg1;
- (void)awakeFromNib;

@end
