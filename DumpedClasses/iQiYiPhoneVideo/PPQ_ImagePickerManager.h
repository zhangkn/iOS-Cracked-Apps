//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString;

@interface PPQ_ImagePickerManager : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
}

+ (void)pickMediaWithMediaType:(long long)arg1 sourceType:(long long)arg2 rootViewController:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
+ (id)sharedInstance;
+ (id)lastAssetInLibrary;
+ (_Bool)assetHasURL:(id)arg1;
+ (id)defaultALAssetsLibrary;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)pickMediaWithSourceType:(long long)arg1 mediaTypes:(id)arg2 rootViewController:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)removeImagePickerController;
- (void)setImagePickerSourceType:(long long)arg1;
- (_Bool)isImagePickerSourceSavedPhotosAlbumAvailable;
- (_Bool)isImagePickerSoureLibraryAvailable;
- (_Bool)isImagePickerSourceCameraAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

