//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QZPageScrollView, UIView;

@protocol QZPageScrollViewProtocol <NSObject>
- (void)pageView:(QZPageScrollView *)arg1 didEndDisplayView:(UIView *)arg2 index:(long long)arg3;
- (void)pageView:(QZPageScrollView *)arg1 didScrollToView:(UIView *)arg2 index:(long long)arg3;
- (void)pageView:(QZPageScrollView *)arg1 willScrollToView:(UIView *)arg2 index:(long long)arg3;
- (void)scrollViewDidEndDecelerating;
- (void)scrollViewWillBeginDecelerating;
- (UIView *)pageViewChildViewWithIndex:(long long)arg1;
@end

