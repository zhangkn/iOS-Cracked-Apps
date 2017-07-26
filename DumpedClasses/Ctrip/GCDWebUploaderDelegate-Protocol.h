//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCDWebServerDelegate.h"

@class GCDWebUploader, NSString;

@protocol GCDWebUploaderDelegate <GCDWebServerDelegate>

@optional
- (void)webUploader:(GCDWebUploader *)arg1 didCreateDirectoryAtPath:(NSString *)arg2;
- (void)webUploader:(GCDWebUploader *)arg1 didDeleteItemAtPath:(NSString *)arg2;
- (void)webUploader:(GCDWebUploader *)arg1 didMoveItemFromPath:(NSString *)arg2 toPath:(NSString *)arg3;
- (void)webUploader:(GCDWebUploader *)arg1 didUploadFileAtPath:(NSString *)arg2;
- (void)webUploader:(GCDWebUploader *)arg1 didDownloadFileAtPath:(NSString *)arg2;
@end
