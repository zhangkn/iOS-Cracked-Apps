//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NVMOrderSnapshot, NVMOrderStatusModel, OAStackView, UIButton;

@interface NVMOrderDetailInfoCellStackButtonsView : UIView
{
    CDUnknownBlockType _rebuyAction;
    CDUnknownBlockType _contactRestaurantAction;
    CDUnknownBlockType _contactRiderAction;
    CDUnknownBlockType _remindAction;
    CDUnknownBlockType _serviceAction;
    CDUnknownBlockType _cancelOrderAction;
    CDUnknownBlockType _refundAction;
    CDUnknownBlockType _undoRefundAction;
    CDUnknownBlockType _payAction;
    CDUnknownBlockType _confirmAction;
    CDUnknownBlockType _rateAction;
    CDUnknownBlockType _claimAction;
    NVMOrderStatusModel *_status;
    NVMOrderSnapshot *_snapShot;
    OAStackView *_stackView;
    UIButton *_rebuyButton;
    UIButton *_contactRestaurantButton;
    UIButton *_contactRiderButton;
    UIButton *_remindButton;
    UIButton *_serviceButton;
    UIButton *_cancelButton;
    UIButton *_refundButton;
    UIButton *_undoRefundButton;
    UIButton *_payButton;
    UIButton *_confirmButton;
    UIButton *_rateButton;
    UIButton *_insuranceButton;
    UIButton *_refundDetailButton;
}

@property(retain, nonatomic) UIButton *refundDetailButton; // @synthesize refundDetailButton=_refundDetailButton;
@property(retain, nonatomic) UIButton *insuranceButton; // @synthesize insuranceButton=_insuranceButton;
@property(retain, nonatomic) UIButton *rateButton; // @synthesize rateButton=_rateButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *payButton; // @synthesize payButton=_payButton;
@property(retain, nonatomic) UIButton *undoRefundButton; // @synthesize undoRefundButton=_undoRefundButton;
@property(retain, nonatomic) UIButton *refundButton; // @synthesize refundButton=_refundButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *serviceButton; // @synthesize serviceButton=_serviceButton;
@property(retain, nonatomic) UIButton *remindButton; // @synthesize remindButton=_remindButton;
@property(retain, nonatomic) UIButton *contactRiderButton; // @synthesize contactRiderButton=_contactRiderButton;
@property(retain, nonatomic) UIButton *contactRestaurantButton; // @synthesize contactRestaurantButton=_contactRestaurantButton;
@property(retain, nonatomic) UIButton *rebuyButton; // @synthesize rebuyButton=_rebuyButton;
@property(retain, nonatomic) OAStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NVMOrderSnapshot *snapShot; // @synthesize snapShot=_snapShot;
@property(retain, nonatomic) NVMOrderStatusModel *status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType claimAction; // @synthesize claimAction=_claimAction;
@property(copy, nonatomic) CDUnknownBlockType rateAction; // @synthesize rateAction=_rateAction;
@property(copy, nonatomic) CDUnknownBlockType confirmAction; // @synthesize confirmAction=_confirmAction;
@property(copy, nonatomic) CDUnknownBlockType payAction; // @synthesize payAction=_payAction;
@property(copy, nonatomic) CDUnknownBlockType undoRefundAction; // @synthesize undoRefundAction=_undoRefundAction;
@property(copy, nonatomic) CDUnknownBlockType refundAction; // @synthesize refundAction=_refundAction;
@property(copy, nonatomic) CDUnknownBlockType cancelOrderAction; // @synthesize cancelOrderAction=_cancelOrderAction;
@property(copy, nonatomic) CDUnknownBlockType serviceAction; // @synthesize serviceAction=_serviceAction;
@property(copy, nonatomic) CDUnknownBlockType remindAction; // @synthesize remindAction=_remindAction;
@property(copy, nonatomic) CDUnknownBlockType contactRiderAction; // @synthesize contactRiderAction=_contactRiderAction;
@property(copy, nonatomic) CDUnknownBlockType contactRestaurantAction; // @synthesize contactRestaurantAction=_contactRestaurantAction;
@property(copy, nonatomic) CDUnknownBlockType rebuyAction; // @synthesize rebuyAction=_rebuyAction;
- (void).cxx_destruct;
- (void)gotoRefundDetail;
- (void)insuranceButtonClicked;
- (void)rateButtonClicked;
- (void)confirmButtonClicked;
- (void)payButtonClicked;
- (void)undoRefundButtonClicked;
- (void)refundButtonClicked;
- (void)cancelButtonClicked;
- (void)serviceButtonClicked;
- (void)remindButtonClicked;
- (void)contactRiderButtonClicked;
- (void)contactRestaurantButtonClicked;
- (void)rebuyButtonClicked;
- (void)updatePayButton:(id)arg1;
- (void)updateGuideButtons;
- (void)updateNormalActionButtons;
- (void)updateSettledWidthButton;
- (id)attributesForFilledButton;
- (id)attributesForHollowButton;
- (id)roundedButtonWithColor:(id)arg1 buttonWidth:(double)arg2;
- (id)baseHollowButton;
- (void)configViews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
