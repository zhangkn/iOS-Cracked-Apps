//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQClusterMessageCell.h"

@class NSMutableArray;

@interface QQGreetingMessageViewCell : QQClusterMessageCell
{
    NSMutableArray *_headArr;
}

- (void)setDetailLabelText:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldShowMoreOptionButtonInRowAtIndexPath:(id)arg2;
- (id)geneHeadView:(id)arg1 frame:(struct CGRect)arg2;
- (void)removeAllHead;
- (void)geneGreetingDetail;
- (void)geneHeadViewArr;
- (void)geneReadTagView;
- (void)setData:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
