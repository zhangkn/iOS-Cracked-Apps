//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IOMListViewController.h"

@class NSString;

@interface IOMVideoListController : IOMListViewController
{
    NSString *_listID;
    NSString *_page;
    NSString *_totlePage;
    NSString *_listName;
}

@property(copy, nonatomic) NSString *listName; // @synthesize listName=_listName;
@property(copy, nonatomic) NSString *totlePage; // @synthesize totlePage=_totlePage;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *listID; // @synthesize listID=_listID;
- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

