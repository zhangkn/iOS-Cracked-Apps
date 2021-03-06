//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreCellViewBase.h"

#import "ExploreDislikeViewDelegate.h"
#import "TTDislikePopViewDelegate.h"

@class ExploreOrderedData, NSMutableArray, NSString, SSThemedButton, SSThemedView, TTArticleCardCellViewFooterView, TTArticleCardCellViewHeaderView, UIButton;

@interface ExploreArticleCardCellView : ExploreCellViewBase <ExploreDislikeViewDelegate, TTDislikePopViewDelegate>
{
    id _selectedSubCellData;
    long long _selectedSubCellIndex;
    id _selectedSubCellView;
    TTArticleCardCellViewHeaderView *_headerView;
    TTArticleCardCellViewFooterView *_footerView;
    SSThemedView *_topLine;
    SSThemedView *_topLine2;
    SSThemedView *_bottomLine;
    SSThemedView *_bottomLine2;
    SSThemedView *_leftLine;
    SSThemedView *_rightLine;
    NSMutableArray *_subCellViewArray;
    NSMutableArray *_subCellViewVisibleStatus;
    UIButton *_unInterestedButton;
    SSThemedButton *_moreButton;
    ExploreOrderedData *_orderedData;
}

+ (_Bool)isNewHeadStyleWithData:(id)arg1;
+ (double)heightForHeaderViewWithData:(id)arg1;
+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
+ (double)footerViewBottomPading;
+ (double)headerViewTopPadding;
@property(retain, nonatomic) ExploreOrderedData *orderedData; // @synthesize orderedData=_orderedData;
@property(retain, nonatomic) SSThemedButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *unInterestedButton; // @synthesize unInterestedButton=_unInterestedButton;
@property(retain, nonatomic) NSMutableArray *subCellViewVisibleStatus; // @synthesize subCellViewVisibleStatus=_subCellViewVisibleStatus;
@property(retain, nonatomic) NSMutableArray *subCellViewArray; // @synthesize subCellViewArray=_subCellViewArray;
@property(retain, nonatomic) SSThemedView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) SSThemedView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) SSThemedView *bottomLine2; // @synthesize bottomLine2=_bottomLine2;
@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) SSThemedView *topLine2; // @synthesize topLine2=_topLine2;
@property(retain, nonatomic) SSThemedView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) TTArticleCardCellViewFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) TTArticleCardCellViewHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) id selectedSubCellView; // @synthesize selectedSubCellView=_selectedSubCellView;
@property(nonatomic) long long selectedSubCellIndex; // @synthesize selectedSubCellIndex=_selectedSubCellIndex;
@property(retain, nonatomic) id selectedSubCellData; // @synthesize selectedSubCellData=_selectedSubCellData;
- (void).cxx_destruct;
- (void)didSelectWithContext:(id)arg1;
- (id)cellViewFromTouchView:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)showMoreFromBottom:(_Bool)arg1;
- (void)showBottom;
- (void)showTop;
- (id)cellData;
- (id)selectedCellView;
- (void)endImpressionForSubCellView:(id)arg1;
- (void)beginImpressionForSubCellView:(id)arg1;
- (void)resetSubCellViewVisibleState;
- (void)endSubCellViewVisibleState;
- (void)checkSubCellViewVisibleState;
- (_Bool)isSubView:(id)arg1 visibleInView:(id)arg2;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)refreshWithData:(id)arg1;
- (void)refreshUI;
- (void)fontSizeChanged;
- (void)themeChanged:(id)arg1;
- (void)exploreDislikeViewOKBtnClicked:(id)arg1;
- (void)layoutUnInterestedBtn;
- (void)unInterestButtonClicked:(id)arg1;
- (_Bool)shouldRefresh;
- (void)dislikeButtonClicked:(id)arg1 onlyOne:(_Bool)arg2;
- (void)moreViewClick;
- (id)extraValueDic;
- (void)layoutMoreButtonView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

