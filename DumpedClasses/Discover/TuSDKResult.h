//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAsset, NSArray, NSMutableDictionary, NSString, TuSDKFilterWrap, UIImage;

@interface TuSDKResult : NSObject
{
    NSMutableDictionary *_metadata;
    long long _imageOrientation;
    UIImage *_image;
    NSString *_imagePath;
    ALAsset *_imageAsset;
    double _cutScale;
    long long _cutRatioType;
    double _imageRatio;
    NSString *_filterCode;
    TuSDKFilterWrap *_filterWrap;
    NSArray *_stickers;
    struct CGSize _cutSize;
    struct CGRect _cutRect;
}

+ (id)result;
@property(retain, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(retain, nonatomic) TuSDKFilterWrap *filterWrap; // @synthesize filterWrap=_filterWrap;
@property(copy, nonatomic) NSString *filterCode; // @synthesize filterCode=_filterCode;
@property(nonatomic) double imageRatio; // @synthesize imageRatio=_imageRatio;
@property(nonatomic) long long cutRatioType; // @synthesize cutRatioType=_cutRatioType;
@property(nonatomic) double cutScale; // @synthesize cutScale=_cutScale;
@property(nonatomic) struct CGSize cutSize; // @synthesize cutSize=_cutSize;
@property(nonatomic) struct CGRect cutRect; // @synthesize cutRect=_cutRect;
@property(retain, nonatomic) ALAsset *imageAsset; // @synthesize imageAsset=_imageAsset;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(retain, nonatomic) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (id)buildTempFile;
- (void)logInfo;
- (id)description;
- (id)loadResultImage;
- (void)fixedMetadata;

@end
