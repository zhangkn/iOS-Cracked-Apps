//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PlayViewMenuCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class FXBlurView, KGSlider, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UICollectionView, UIPageControl, UIScrollView, UIView;

@interface KGPlayViewMenuListController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, PlayViewMenuCellDelegate, UIGestureRecognizerDelegate>
{
    UIScrollView *scrollView;
    NSMutableArray *_arrSubView;
    NSMutableArray *_arrData;
    UIPageControl *pageControl;
    NSLayoutConstraint *bottomConstraint;
    UIButton *volumeBtn;
    KGSlider *slider;
    FXBlurView *blurView;
    UIView *grayView;
    UICollectionView *_colView;
    _Bool _isShowSaveImageBtn;
    _Bool _isSongChanged;
    UIView *_BlurView;
    CDUnknownBlockType _blockCickMenu;
}

@property(nonatomic) _Bool isSongChanged; // @synthesize isSongChanged=_isSongChanged;
@property(nonatomic) _Bool isShowSaveImageBtn; // @synthesize isShowSaveImageBtn=_isShowSaveImageBtn;
@property(copy, nonatomic) CDUnknownBlockType blockCickMenu; // @synthesize blockCickMenu=_blockCickMenu;
@property(retain, nonatomic) UIView *BlurView; // @synthesize BlurView=_BlurView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)btnOpenOrCloseVolume:(id)arg1;
- (_Bool)isHaveNetwork;
- (void)updateMuteBtn;
- (void)playViewLeave:(id)arg1;
- (void)updateEffectState:(id)arg1;
- (void)songChanged:(id)arg1;
- (void)volumeChanged:(id)arg1;
- (void)p_initBlur;
- (void)addObserver;
- (void)reloadData;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)jumpToCollectList;
- (void)clickMenu:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)localUpdateSongAlbumImageWithSong:(id)arg1 withBtn:(id)arg2;
- (void)requestAlbumImage:(id)arg1;
- (void)requestSingerImage:(id)arg1;
- (void)loadData;
- (id)p_creatScrollSubView:(id)arg1;
- (_Bool)isPlayRadio;
- (id)getArrMenuListInfo;
- (void)handleSingleFingerEvent:(id)arg1;
- (void)btnExit:(id)arg1;
- (void)animationShow:(_Bool)arg1;
- (void)addBtnAnimation:(id)arg1;
- (void)createUI;
- (void)volumeChangedAction:(id)arg1;
- (void)volumeChangeEvent:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
