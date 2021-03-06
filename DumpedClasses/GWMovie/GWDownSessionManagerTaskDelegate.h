//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class GWDownSessionManager, NSOutputStream, NSProgress, NSString, NSURL;

@interface GWDownSessionManagerTaskDelegate : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate>
{
    GWDownSessionManager *_manager;
    CDUnknownBlockType _downloadProgressBlock;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _downloadTaskDidFinishDownloading;
    NSURL *_tempDownFileUrl;
    NSURL *_downFileUrl;
    NSOutputStream *_outStream;
    NSProgress *_progress;
}

@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSOutputStream *outStream; // @synthesize outStream=_outStream;
@property(copy, nonatomic) NSURL *downFileUrl; // @synthesize downFileUrl=_downFileUrl;
@property(copy, nonatomic) NSURL *tempDownFileUrl; // @synthesize tempDownFileUrl=_tempDownFileUrl;
@property(copy, nonatomic) CDUnknownBlockType downloadTaskDidFinishDownloading; // @synthesize downloadTaskDidFinishDownloading=_downloadTaskDidFinishDownloading;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
@property(nonatomic) __weak GWDownSessionManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)initWithTmpFilePath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

