//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSearchEmptySERPViewParams, FBTransientViewStateManager, FBUserSession, UIScrollView;
@protocol FBSearchResultsTransientViewStateHelperDelegate;

@interface FBSearchResultsTransientViewStateHelper : NSObject
{
    UIScrollView *_contentScrollView;
    FBTransientViewStateManager *_viewStateManager;
    FBUserSession *_session;
    FBSearchEmptySERPViewParams *_emptyViewParams;
    unsigned long long _viewStateToLayout;
    CDUnknownBlockType _topInsetBlockToLayout;
    id <FBSearchResultsTransientViewStateHelperDelegate> _delegate;
}

@property(nonatomic) __weak id <FBSearchResultsTransientViewStateHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateEmptyViewParams:(id)arg1;
- (unsigned long long)viewState;
- (void)_layoutViewState:(unsigned long long)arg1 withEmptyStateTopInsetBlock:(CDUnknownBlockType)arg2;
- (void)layoutViewState;
- (void)setViewState:(unsigned long long)arg1 withEmptyStateTopInsetBlock:(CDUnknownBlockType)arg2;
- (void)setViewState:(unsigned long long)arg1;
- (id)initWithView:(id)arg1 emptyViewParams:(id)arg2 userSession:(id)arg3 customErrorView:(id)arg4;

@end

