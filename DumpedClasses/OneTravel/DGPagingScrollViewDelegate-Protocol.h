//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DGPagingScrollView;

@protocol DGPagingScrollViewDelegate <NSObject>
- (void)pagingScrollView:(DGPagingScrollView *)arg1 changeVisibleState:(long long)arg2;
- (void)pagingScrollViewWillChangePages:(DGPagingScrollView *)arg1;
- (void)pagingScrollViewDidScroll:(DGPagingScrollView *)arg1;
- (void)pagingScrollViewDidChangePages:(DGPagingScrollView *)arg1;
@end

