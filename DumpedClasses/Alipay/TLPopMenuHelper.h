//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TLFeedDetailDataManagerDelegate.h"
#import "UIActionSheetDelegate.h"

@class APPhoto, NSArray, NSString, TLFeedDetailDataManager, TLPlumpFeed, UIViewController;

@interface TLPopMenuHelper : NSObject <UIActionSheetDelegate, TLFeedDetailDataManagerDelegate>
{
    UIViewController *_relatedVC;
    APPhoto *_photo;
    TLPlumpFeed *_feed;
    TLFeedDetailDataManager *_menuHandler;
    NSArray *_curFunctions;
    double _photoBrowserWindowLevel;
}

@property(nonatomic) double photoBrowserWindowLevel; // @synthesize photoBrowserWindowLevel=_photoBrowserWindowLevel;
@property(retain, nonatomic) NSArray *curFunctions; // @synthesize curFunctions=_curFunctions;
@property(retain, nonatomic) TLFeedDetailDataManager *menuHandler; // @synthesize menuHandler=_menuHandler;
@property(retain, nonatomic) TLPlumpFeed *feed; // @synthesize feed=_feed;
@property(retain, nonatomic) APPhoto *photo; // @synthesize photo=_photo;
@property(nonatomic) __weak UIViewController *relatedVC; // @synthesize relatedVC=_relatedVC;
- (void).cxx_destruct;
- (void)restore;
- (void)becomeActionMode;
- (id)displayView;
- (void)dataManagerdidFinishSendToFriend:(id)arg1 error:(id)arg2;
- (void)showSuccessToast:(id)arg1;
- (void)dataManager:(id)arg1 didFinishSaveImage:(id)arg2;
- (void)handleMenuAction:(id)arg1;
- (void)performMenuActionAtIndex:(unsigned long long)arg1;
- (id)provideBHMenuItemForPhoto:(id)arg1;
- (id)provideMenuItemForPhoto:(id)arg1;
- (id)mMenuHandler;
- (void)reloadPhoto:(id)arg1;
- (void)reloadFeed:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

