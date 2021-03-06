//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class FAMobileLiveNewClassify, FAUploader, NSArray, NSData, NSString;

@interface FAMobileLiveModel : FAModel
{
    _Bool _locationVisible;
    _Bool _isHaveShare;
    int _sid;
    NSString *_liveServer;
    long long _roomId;
    NSString *_spareLiveServer;
    NSString *_streamName;
    NSString *_token;
    long long _censored;
    NSString *_title;
    NSData *_imageData;
    NSString *_imageUrl;
    double _longitude;
    double _latitude;
    long long _ratioLength;
    long long _ratioWidth;
    FAUploader *_uploadHttp;
    long long _retry;
    NSArray *_rtmp;
    long long _expire;
    FAMobileLiveNewClassify *_selectedClassify;
}

@property(retain, nonatomic) FAMobileLiveNewClassify *selectedClassify; // @synthesize selectedClassify=_selectedClassify;
@property(nonatomic) long long expire; // @synthesize expire=_expire;
@property(retain, nonatomic) NSArray *rtmp; // @synthesize rtmp=_rtmp;
@property(nonatomic) int sid; // @synthesize sid=_sid;
@property(nonatomic) long long retry; // @synthesize retry=_retry;
@property(retain, nonatomic) FAUploader *uploadHttp; // @synthesize uploadHttp=_uploadHttp;
@property(nonatomic) _Bool isHaveShare; // @synthesize isHaveShare=_isHaveShare;
@property(nonatomic) _Bool locationVisible; // @synthesize locationVisible=_locationVisible;
@property(nonatomic) long long ratioWidth; // @synthesize ratioWidth=_ratioWidth;
@property(nonatomic) long long ratioLength; // @synthesize ratioLength=_ratioLength;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long censored; // @synthesize censored=_censored;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;
@property(copy, nonatomic) NSString *spareLiveServer; // @synthesize spareLiveServer=_spareLiveServer;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *liveServer; // @synthesize liveServer=_liveServer;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)canPopBack;
- (void)stopUpload;
- (void)openMobileLiveWithSucceed:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
- (void)configRatioValue;
- (id)init;

@end

