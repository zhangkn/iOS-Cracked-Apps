//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQAssetObject.h"

@class ALAssetsGroup, MQQPLFetchOptions, NSString, NSURL, PHAssetCollection, UIImage;

@interface MQQAssetCollection : MQQAssetObject
{
    NSString *_name;
    long long _assetCollectionType;
    long long _assetCollectionSubtype;
    ALAssetsGroup *_AL_assetsGroup;
    PHAssetCollection *_PH_assetCollection;
    MQQPLFetchOptions *_options;
    NSURL *_AL_URLForAssetsGroup;
}

+ (void)deleteAssetCollections:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)creatAssetCollectionWithTitle:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)fetchAssetCollectionsWithLocalIdentifiers:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2;
+ (void)PH_deleteAssetCollections:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)PH_fetchAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)PH_fetchAssetCollectionsWithLocalIdentifiers:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)PH_creatAssetCollectionWithTitle:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)PH_transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2;
+ (id)PH_transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2;
+ (void)AL_fetchAssetCollectionsWithLocalIdentifiers:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)AL_fetchAssetCollectionsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)AL_creatAssetCollectionWithTitle:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSURL *AL_URLForAssetsGroup; // @synthesize AL_URLForAssetsGroup=_AL_URLForAssetsGroup;
@property(retain, nonatomic) MQQPLFetchOptions *options; // @synthesize options=_options;
- (void)replaceAssets:(id)arg1 andTitle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changeAssetCollectionTitle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAssetsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)update:(CDUnknownBlockType)arg1;
- (_Bool)canPerformEditOperation:(long long)arg1;
@property(readonly, retain, nonatomic) UIImage *posterImage;
@property(readonly, nonatomic) long long numberOfAssets;
@property(readonly, nonatomic) long long assetCollectionSubtype;
@property(readonly, nonatomic) long long assetCollectionType;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, retain, nonatomic) id originalAssetsGroup;
@property(readonly, retain, nonatomic) id originalAssetCollection;
- (id)_identifier;
@property(retain, nonatomic) PHAssetCollection *PH_assetCollection;
@property(retain, nonatomic) ALAssetsGroup *AL_assetsGroup;
- (void)dealloc;
- (id)init;
- (id)initWithPHAssetCollection:(id)arg1;
- (id)initWithALAssetsGroup:(id)arg1;
- (void)PH_replaceAssets:(id)arg1 andTitle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)PH_removeAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)PH_addAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)PH_changeAssetCollectionTitle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)PH_fetchAssetsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)PH_canPerformEditOperation:(long long)arg1;
@property(readonly, retain, nonatomic) UIImage *PH_posterImage;
@property(readonly, nonatomic) long long PH_numberOfAssets;
@property(readonly, nonatomic) long long PH_assetCollectionSubtype;
@property(readonly, nonatomic) long long PH_assetCollectionType;
@property(readonly, copy, nonatomic) NSString *PH_name;
@property(readonly, copy, nonatomic) NSString *PH_identifier;
- (void)mqqFetchAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (void)AL_addAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)AL_enumerateAssetsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)AL_updateAssetsGroupWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)AL_canPerformEditOperation:(long long)arg1;
@property(readonly, retain, nonatomic) UIImage *AL_posterImage;
@property(readonly, nonatomic) long long AL_numberOfAssets;
@property(readonly, nonatomic) long long AL_assetCollectionSubtype;
@property(readonly, nonatomic) long long AL_assetCollectionType;
@property(readonly, copy, nonatomic) NSString *AL_name;
@property(readonly, copy, nonatomic) NSString *AL_identifier;

@end

