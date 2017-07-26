//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UILabel, UIView;

@interface CTSHotelCertificateCell : UITableViewCell
{
    UIView *_realBackView;
    UILabel *_titleLab;
    UIView *_detailView;
    NSLayoutConstraint *_detailViewHeightConstraint;
    NSLayoutConstraint *_cellTopConstraint;
    NSLayoutConstraint *_cellBetweenConstraint;
    NSLayoutConstraint *_cellBottomConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *cellBottomConstraint; // @synthesize cellBottomConstraint=_cellBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *cellBetweenConstraint; // @synthesize cellBetweenConstraint=_cellBetweenConstraint;
@property(nonatomic) __weak NSLayoutConstraint *cellTopConstraint; // @synthesize cellTopConstraint=_cellTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *detailViewHeightConstraint; // @synthesize detailViewHeightConstraint=_detailViewHeightConstraint;
@property(nonatomic) __weak UIView *detailView; // @synthesize detailView=_detailView;
@property(nonatomic) __weak UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(nonatomic) __weak UIView *realBackView; // @synthesize realBackView=_realBackView;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)setCertificateContent:(id)arg1 withTitle:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
