//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBSearchComponentModel, FBSearchResultsContext;

@interface FBSearchResultsUserComponent : CKCompositeComponent
{
    FBSearchComponentModel *_model;
    FBSearchResultsContext *_context;
}

+ (id)newWithModel:(id)arg1 context:(id)arg2 resultType:(unsigned long long)arg3 options:(const struct FBSearchResultsEntityOptions *)arg4;
- (void).cxx_destruct;
- (void)didTapComponent:(id)arg1;

@end

