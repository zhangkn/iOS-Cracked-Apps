//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMAlreadyDownloadMVView, NMAlreadyDownloadProgramView, NMAlreadyDownloadSongView, NSMutableArray;

@interface NMMyDownloadView : UIView
{
    NSMutableArray *_subViewArray;
    id _delegate;
    NMAlreadyDownloadSongView *_alreadyDownloadSongView;
    NMAlreadyDownloadProgramView *_alreadyDownloadProgramView;
    NMAlreadyDownloadMVView *_alreadyDownloadMVView;
}

@property(retain, nonatomic) NMAlreadyDownloadMVView *alreadyDownloadMVView; // @synthesize alreadyDownloadMVView=_alreadyDownloadMVView;
@property(retain, nonatomic) NMAlreadyDownloadProgramView *alreadyDownloadProgramView; // @synthesize alreadyDownloadProgramView=_alreadyDownloadProgramView;
@property(retain, nonatomic) NMAlreadyDownloadSongView *alreadyDownloadSongView; // @synthesize alreadyDownloadSongView=_alreadyDownloadSongView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)showAlreadyDownloadView:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
