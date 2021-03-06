//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, NSString, O2OShopFaceBindingController, O2OShopFaceListController, UIButton, UIImageView, UILabel, UIView;

@interface O2OShopFaceBindingCell : UITableViewCell
{
    O2OShopFaceBindingController *_bindingVC;
    O2OShopFaceListController *_boundVC;
    NSString *_shopID;
    UIView *_infoView;
    UILabel *_shopNameLabel;
    UILabel *_addressLabel;
    UIImageView *_shopImageView;
    UIImageView *_arrowImagView;
    UIButton *_bindingButton;
    NSDictionary *_shopItem;
}

@property(retain, nonatomic) NSDictionary *shopItem; // @synthesize shopItem=_shopItem;
@property(retain, nonatomic) UIButton *bindingButton; // @synthesize bindingButton=_bindingButton;
@property(retain, nonatomic) UIImageView *arrowImagView; // @synthesize arrowImagView=_arrowImagView;
@property(retain, nonatomic) UIImageView *shopImageView; // @synthesize shopImageView=_shopImageView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *shopNameLabel; // @synthesize shopNameLabel=_shopNameLabel;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(copy, nonatomic) NSString *shopID; // @synthesize shopID=_shopID;
@property(nonatomic) __weak O2OShopFaceListController *boundVC; // @synthesize boundVC=_boundVC;
@property(nonatomic) __weak O2OShopFaceBindingController *bindingVC; // @synthesize bindingVC=_bindingVC;
- (void).cxx_destruct;
- (void)makeLayout;
- (void)onBindingClick:(id)arg1;
- (void)layoutSubviews;
- (void)loadCellData:(id)arg1;
- (id)shopLogoUrl:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

