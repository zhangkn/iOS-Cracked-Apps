//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTRpcOperation.h"

@class DTCustomContext, NSURLConnection;

@interface DTCustomRpcOperation : DTRpcOperation
{
    DTCustomContext *_context;
    NSURLConnection *_connection;
}

@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) DTCustomContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)startConnection;
- (id)initWithMethod:(id)arg1 params:(id)arg2 headerFields:(id)arg3 context:(id)arg4;

@end

