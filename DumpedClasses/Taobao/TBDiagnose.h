//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@class TBDigInfoCollector, TBDigInfoUploader;

@interface TBDiagnose : WVDynamicHandler
{
    TBDigInfoCollector *_infoCollector;
    TBDigInfoUploader *_uploader;
}

+ (unsigned long long)instanceScope;
@property(retain, nonatomic) TBDigInfoUploader *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) TBDigInfoCollector *infoCollector; // @synthesize infoCollector=_infoCollector;
- (void).cxx_destruct;
- (void)commitFeedback:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (_Bool)commitFeedbackInfo:(id)arg1;
- (void)InitInstance;
- (id)init;

@end

