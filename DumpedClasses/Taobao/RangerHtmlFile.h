//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, RangerTemplate;

@interface RangerHtmlFile : NSObject
{
    _Bool _isABSupport;
    NSString *_fileName;
    NSString *_filePath;
    NSString *_appFilePath;
    NSString *_fileRootFilePath;
    NSArray *_cssLinkFiles;
    RangerTemplate *_bodyTemplate;
}

@property(retain) RangerTemplate *bodyTemplate; // @synthesize bodyTemplate=_bodyTemplate;
@property(retain) NSArray *cssLinkFiles; // @synthesize cssLinkFiles=_cssLinkFiles;
@property _Bool isABSupport; // @synthesize isABSupport=_isABSupport;
@property(retain) NSString *fileRootFilePath; // @synthesize fileRootFilePath=_fileRootFilePath;
@property(retain) NSString *appFilePath; // @synthesize appFilePath=_appFilePath;
@property(retain) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;

@end

