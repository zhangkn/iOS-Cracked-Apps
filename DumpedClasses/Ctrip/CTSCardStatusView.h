//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface CTSCardStatusView : UIView
{
    id <CTSCardStatusViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CTSCardStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)jumpAction:(id)arg1;
- (void)setCardStatusViewWithStyle:(int)arg1 isOrder:(_Bool)arg2 statusName:(id)arg3 actions:(id)arg4;

@end
