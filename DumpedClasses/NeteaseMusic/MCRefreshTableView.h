//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class MCRefreshTableHeaderView;

@interface MCRefreshTableView : UITableView
{
    MCRefreshTableHeaderView *_refreshView;
}

@property(readonly, retain, nonatomic) MCRefreshTableHeaderView *refreshView; // @synthesize refreshView=_refreshView;
- (void)dealloc;
@property(nonatomic) id <MCRefreshTableHeaderViewDelegate> refreshDelegate; // @dynamic refreshDelegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)internalInit;

@end

