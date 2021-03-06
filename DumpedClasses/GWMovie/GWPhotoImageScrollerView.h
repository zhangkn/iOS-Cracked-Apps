//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIImageView;

@interface GWPhotoImageScrollerView : UIScrollView <UIScrollViewDelegate>
{
    _Bool firstshow;
    struct CGSize _imageSize;
    struct CGPoint _pointToCenterAfterResize;
    double _scaleToRestoreAfterResize;
    UIImageView *zoomView;
}

@property(retain, nonatomic) UIImageView *zoomView; // @synthesize zoomView;
- (void).cxx_destruct;
- (void)scrollFromRect:(id)arg1;
- (void)adjustFrame;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)setImageWith:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

