//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "PreviewSecretPictureViewControllerDelegate.h"
#import "QQChatViewTableDelegate.h"
#import "QQDeviceLockRecommendDelegate.h"
#import "QQDeviceLockStatusQueryDelegate.h"
#import "QQFACellEventDelegate.h"
#import "QQFriendSelectedViewControllerDelegate.h"
#import "QQGetRoamMsgModelProtocol.h"
#import "QQHistorySearchLogicEngineDelegate.h"
#import "QQHistroySearchTableViewDelegate.h"
#import "QQPttPlayerDelegate.h"
#import "QQRaomDateDelegate.h"
#import "QQRichStateJsHelperDelegate.h"
#import "QQRoamDeviceLockViewdelegate.h"
#import "QQSearchBaseLogicEngineDelegate.h"
#import "QQSearchRoamMsgProtocol.h"
#import "QQVoiceToTextDelegate.h"
#import "QUIActionSheetDelegate.h"
#import "SimpleAlertViewDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "VoiceToTextDelegate.h"

@class FlashPictureCacheMsgHandler, NSDate, NSDictionary, NSMutableArray, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSString, NSTimer, QQAIOEventModule, QQAIONotificationCenter, QQBaseChatImage, QQBaseChatModel, QQBaseChatUIOperation, QQBubbleTipsView, QQChatViewTable, QQCheckBox, QQHistorySearchLogicEngine, QQHistoryStatusBarView, QQHistoryTimeScrollView, QQHistroySearchTableView, QQMessageModel, QQPttPlayer, QQRoamDateEngine, QQRoamPreLoadEngine, QQRoamSettingTipView, QQSearchBar, QQVoiceCellModel, UIActivityIndicatorView, UIBarButtonItem, UIControl, UIDocumentInteractionController, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIToolbar, UIView;

@interface QQHistoryViewController : QQViewController <QQVoiceToTextDelegate, VoiceToTextDelegate, QQFriendSelectedViewControllerDelegate, QQHistroySearchTableViewDelegate, QQFACellEventDelegate, PreviewSecretPictureViewControllerDelegate, QQChatViewTableDelegate, QUIActionSheetDelegate, SimpleAlertViewDelegate, UIDocumentInteractionControllerDelegate, MFMailComposeViewControllerDelegate, QQRichStateJsHelperDelegate, QQPttPlayerDelegate, QQHistorySearchLogicEngineDelegate, QQSearchBaseLogicEngineDelegate, QQGetRoamMsgModelProtocol, QQRaomDateDelegate, QQDeviceLockRecommendDelegate, QQDeviceLockStatusQueryDelegate, QQRoamDeviceLockViewdelegate, UIScrollViewDelegate, QQSearchRoamMsgProtocol, UIGestureRecognizerDelegate>
{
    NSString *_uin;
    NSString *nick;
    UIImage *iconImage;
    unsigned long long messageCount;
    unsigned long long numberOfPage;
    long long curPage;
    UIBarButtonItem *leftItem;
    UIBarButtonItem *rightItem;
    UIBarButtonItem *trashItem;
    UIBarButtonItem *_topRecordItem;
    UIBarButtonItem *_bottomRecordItem;
    QQHistoryTimeScrollView *_timeScrollView;
    UILabel *_timeTipsLabel;
    NSTimer *_repeatRefreshTimeTipsTimer;
    NSTimer *_loadingTipsTimer;
    NSDate *_enddate;
    UIImageView *_timearrow;
    UIImageView *_timetips;
    long long _currentIndex;
    long long _orginendFlag;
    long long _endFlag;
    long long _roamLength;
    _Bool _timeTipsShow;
    UIView *_hintView;
    UILabel *_hintTips;
    QQRoamPreLoadEngine *_roamPreLoadEngine;
    NSMutableArray *_msgArr;
    double _oldOffset;
    NSObject<OS_dispatch_queue> *_loadMsgQueue;
    UIActivityIndicatorView *_tableFooterActivityIndicator;
    _Bool _isFootEnd;
    _Bool _isHeadEnd;
    UIView *_searchView;
    long long _pwdErrorTimes;
    UIToolbar *toolBar;
    UILabel *hintLabel;
    _Bool _isGroup;
    QQChatViewTable *_table;
    struct CGSize sizeImage;
    _Bool _isReLoadTable;
    id _chatViewController;
    _Bool _isDiscussGroup;
    _Bool _isFirstPush;
    QQMessageModel *_sModel;
    QQMessageModel *_lModel;
    QQVoiceCellModel *_currentVoiceCell;
    QQPttPlayer *_pttPlayer;
    QQBaseChatModel *_chatModel;
    QQBaseChatUIOperation *_chatUIOperation;
    QQBaseChatImage *_chatImage;
    QQAIONotificationCenter *_notificationCenter;
    QQAIOEventModule *_eventModule;
    UITapGestureRecognizer *_tapGesture;
    UIDocumentInteractionController *_documentInteractionController;
    long long _devlockstatus;
    long long _refreshPwdTime;
    long long _requesttime;
    long long _opendevlockType;
    QQCheckBox *_checkBox;
    QQBubbleTipsView *_roamSetGuideView;
    _Bool _isMsgCountChange;
    double contentOffsetY;
    int _searchPage;
    _Bool _hasMoreData;
    QQMessageModel *_searchLMolel;
    QQSearchBar *_searchBar;
    QQHistorySearchLogicEngine *_logicEngine;
    QQHistroySearchTableView *_searchTableView;
    QQHistoryStatusBarView *_statusBarView;
    int _searchPageCloud;
    _Bool _hasMoreDataCloud;
    _Bool isGroupDuplicate;
    struct CGPoint tableContentOffset;
    _Bool ifInCancelStatus;
    _Bool ifInNavigationBarHiddenStatus;
    QQRoamDateEngine *_roamDateEngine;
    long long _outRoamDateTimeval;
    UIControl *_maskLable;
    _Bool _topHasMore;
    _Bool _footHasMore;
    QQMessageModel *_searchModel;
    _Bool _isLoading;
    _Bool _linkbuttionClicked;
    QQMessageModel *_searchLModel;
    QQMessageModel *_locationModel;
    _Bool _isShowingActionSheet;
    QQRoamSettingTipView *_roamTipView;
    NSString *_currentUin;
    NSDictionary *_roamTipSettingDic;
    _Bool _hasShowTip;
    int _scrollHeight;
    _Bool _innerSkip;
    _Bool _isCanSearchCloud;
    _Bool _isClicked;
    long long _beginLoadingTime;
    NSMutableIndexSet *_localMsgSeqSet;
    NSMutableIndexSet *_cloudMsgSeqSet;
    int _historyVCAppearType;
    _Bool _isAllowRightDragBack;
    _Bool _shouldShowAIOStyle;
    _Bool _dontCloseWebViewContoller;
    id chatViewController;
    FlashPictureCacheMsgHandler *_flashPictureCacheMsgHandler;
}

@property(retain, nonatomic) FlashPictureCacheMsgHandler *flashPictureCacheMsgHandler; // @synthesize flashPictureCacheMsgHandler=_flashPictureCacheMsgHandler;
@property(nonatomic) _Bool dontCloseWebViewContoller; // @synthesize dontCloseWebViewContoller=_dontCloseWebViewContoller;
@property(nonatomic) _Bool shouldShowAIOStyle; // @synthesize shouldShowAIOStyle=_shouldShowAIOStyle;
@property(nonatomic) _Bool isAllowRightDragBack; // @synthesize isAllowRightDragBack=_isAllowRightDragBack;
@property(nonatomic) id chatViewController; // @synthesize chatViewController;
- (void)delayRunDynaDoodle;
- (void)EndDraggingInTableView:(id)arg1 speed:(double)arg2 byUser:(_Bool)arg3;
- (void)roamSetReport:(id)arg1 opName:(id)arg2;
- (void)roamSetGuideTaped;
- (void)showRoamSetGuide;
- (_Bool)needShowRoamSetGuide;
- (void)previewSecretPictureViewController:(id)arg1 didPreviewedSecretPictureWithCell:(id)arg2;
- (void)didTouchSecretPictureEventNew:(id)arg1;
- (void)scrollToBottom;
- (void)setLoadStop;
- (void)setLoadStart;
- (void)setLoadFinish;
- (void)hideSearchBar;
- (_Bool)recommendForRoamMsg;
- (id)recommendSource;
- (id)recommendUIConfig;
- (void)recommendLinkClick;
- (void)handleDA2FailNotification:(id)arg1;
- (void)handleDA2OKNotification:(id)arg1;
- (void)recommendCompleteWithResult:(id)arg1;
- (double)timeDiffFrom:(id)arg1 toTime:(id)arg2;
- (id)getCurrentTime;
- (void)fetchRoamTipSetting;
- (void)removeTipView;
- (id)getUserType;
- (void)tipViewTaped;
- (void)showRoamTipView;
- (void)judgeShowTime;
- (void)judgeUpdateTime;
- (void)initRoamTipSetting;
@property(nonatomic) QQRoamSettingTipView *roamTipView; // @dynamic roamTipView;
@property(nonatomic) NSDictionary *roamTipSettingDic; // @dynamic roamTipSettingDic;
@property(nonatomic) NSString *currentUin; // @dynamic currentUin;
- (void)reportUserAction:(id)arg1;
- (void)handleHistoryVCDidAppear;
- (void)handleRoamFlagChanged:(id)arg1;
- (void)gotoRoamSettingWebView;
- (void)didClickSettingBtn;
- (void)removeBreakTimeByDayBeginTime:(long long)arg1;
- (long long)getBreakTimeByDayBeginTime:(long long)arg1;
- (void)setRoamMsgBreak:(long long)arg1 dayBeginTime:(long long)arg2;
- (void)pullRoamDateFailed;
- (void)showPullErrorNotification;
- (_Bool)judgeNetWorkAvailable;
- (void)outRoamDate:(_Bool)arg1;
- (void)searchRequsetMsgIsEmpty;
- (void)endRequestRoamDate;
- (void)beginRequestRoamDate;
- (void)searchNoNetwork;
- (void)locateSearchMsgModel:(id)arg1;
- (void)resetTopAndFootHasMore;
- (void)removeMaskLabel;
- (void)addMaskLabelWhileRequest;
- (void)scrollTo:(long long)arg1;
- (_Bool)toastNoMsgTips:(long long)arg1 type:(int)arg2;
- (void)clearVisiableMsg;
- (void)drawHistoryTimeScroll:(long long)arg1 length:(long long)arg2 roamDate:(basic_string_075b6133 *)arg3 first:(_Bool)arg4 loadRoamMsg:(_Bool)arg5 cur:(long long)arg6;
- (void)roamOffRefreshButton;
- (void)freshEditableItemForC2C:(long long)arg1;
- (id)filterMsg:(id)arg1 byTimeval:(long long)arg2;
- (_Bool)completeLargeTextHelper:(id)arg1 moreMsgs:(id)arg2 info:(struct LargeTextMissingInfo *)arg3 foot:(_Bool)arg4;
- (id)completeLargeText:(id)arg1 foot:(_Bool)arg2;
- (void)getLargeTextMissingInfo:(id)arg1 info:(map_dcc52681 *)arg2;
- (void)refreshFootGetMore;
- (void)refreshGetMore;
- (void)showOpendevlockView;
- (_Bool)canceled;
- (_Bool)usedevlock;
- (_Bool)linkbuttionclicked;
- (void)showPushView;
- (void)deviceLockStatusQueryCompleteWithResult:(int)arg1;
- (void)requestRoamMessage:(long long)arg1;
- (_Bool)loadLocalPreMessage:(long long)arg1 ignoreServer:(_Bool)arg2;
- (_Bool)loadLocalMessage:(long long)arg1 ignoreServer:(_Bool)arg2;
- (void)showSearchBarWithNoAnimation:(_Bool)arg1;
- (void)didSelectSystemNotificationCell:(id)arg1;
- (void)qqRichStateJsHelper:(id)arg1 response:(id)arg2;
- (void)showErrorAlertView:(id)arg1 forMessage:(id)arg2 withTitle:(id)arg3;
- (void)preLoadMsgDelegate;
- (void)GetRoamMsgFinish:(long long)arg1 hasMsg:(_Bool)arg2;
- (void)roamWebCallback:(id)arg1;
- (void)GetRoamMsgError:(int)arg1 string:(id)arg2;
- (void)resetRightButton;
- (void)onPttPlayError:(int)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tapGesture:(id)arg1;
- (void)stopShakeWindow;
- (void)shakeWindowAndShake;
- (void)sendTipsTouchAIO:(id)arg1;
- (void)deletedMsgByAIOModel:(id)arg1;
- (void)handleReplyMessageEvent:(id)arg1;
- (void)handleReplyCommandEvent:(id)arg1;
- (void)QQAIOShareMessageCellDidAction:(id)arg1 aioModel:(id)arg2;
- (void)didEndScroll:(id)arg1;
- (void)didSelectIDNumber:(id)arg1;
- (void)didSelectLongNumber:(id)arg1;
- (void)didSelectQQNumber:(id)arg1;
- (void)didSelectEmail:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (struct CGRect)getOriginalRectForPhoto:(id)arg1 atIndex:(int)arg2 thumbRegion:(struct CGRect *)arg3 clipRect:(struct CGRect *)arg4;
- (void)openMarketFaceDetailWithChatCellModel:(id)arg1;
- (void)updateUIOperation:(id)arg1 isFoot:(_Bool)arg2;
- (id)mergeMsgArrayNeedCopy:(id)arg1;
- (id)messageModelFromCellModel:(id)arg1;
- (id)cellArrayForTable:(id)arg1;
- (id)filterArray:(id)arg1;
- (id)sortMsgArray:(id)arg1;
- (void)saveImgToAlbum:(id)arg1;
- (void)marketFacePlayAudio:(id)arg1;
- (void)handleTransferStateNotification:(id)arg1;
- (void)_reloadPageInfo;
- (void)startRefreshFoot:(id)arg1;
- (void)startRefresh:(id)arg1;
- (void)downLoadC2COfflineImg:(id)arg1;
- (void)downLoadGroupImg:(id)arg1 isRefresh:(_Bool)arg2;
- (id)paseImage:(id)arg1;
- (void)didSelectReloadImage:(id)arg1;
- (void)tableViewMultiMsgForwardModelDidTouch:(id)arg1;
- (void)tableViewImageModelDidTouch:(id)arg1;
- (void)ActionBrowsePhotos:(id)arg1;
- (void)transform:(id)arg1;
- (void)tableViewDidScroll;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)deleteMessageModel:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (struct CGRect)getVoiceRouteBtnFrame;
- (id)getPttList;
- (id)getRouteTipParentView;
- (id)getVoiceRouteBtnParentView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)doDismissLoadingTips;
- (void)dismissLoadingTips;
- (void)showLoadingTips;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setCoverWithImageName:(id)arg1;
- (void)setChatViewCover;
- (void)leftButtonClick:(id)arg1;
- (id)getCurrentPttPlayer;
- (id)getPttPlayer;
- (id)UITableViewGetEventModule;
- (id)GetChatUIOperation;
- (id)GetBaseChatModel;
- (void)showHintView:(_Bool)arg1;
- (void)setHintViewHidden:(_Bool)arg1 forever:(_Bool)arg2;
- (void)loadMsg;
- (void)refreshTimeScrollTips;
- (void)clickHintView:(id)arg1;
- (void)clickScrollView:(id)arg1;
- (void)beginShowTipsTimer;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithuin:(id)arg1 nick:(id)arg2 headImage:(id)arg3 isGroup:(_Bool)arg4 isDiscussGroup:(_Bool)arg5;
- (void)dealloc;
- (_Bool)getIsGroup;
- (id)getUin;
- (void)showVoiceToTextNotifyError:(id)arg1;
- (void)voiceToTextNotifyError:(id)arg1;
- (void)getVoiceToTextPushResult:(id)arg1 Result:(id)arg2;
- (void)requestVoiceToText:(id)arg1 withObject:(id)arg2;
- (void)didTouchInTabelView:(id)arg1;
- (void)forwardTo:(id)arg1;
- (void)fileForwardTo:(id)arg1 appShareID:(unsigned int)arg2;
- (void)textForwardTo:(id)arg1 appShareID:(unsigned int)arg2;
- (void)leftButtonClickC2C:(id)arg1;
- (void)searchBarShouldReturn:(id)arg1;
- (void)searchBar:(id)arg1 cancelButtonClick:(_Bool)arg2;
- (void)layoutViewsIfNeeds:(id)arg1;
- (void)searchRoamMsgFail;
- (void)searchRoamMsgFinish:(_Bool)arg1;
- (void)selectSearch;
- (void)cancelSearch:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)clickSearch:(id)arg1;
- (id)getSvrSearchingHeader:(id)arg1 color:(id)arg2;
- (id)getSvrSearchHeader:(id)arg1 color:(id)arg2;
- (id)getSearchHeader:(id)arg1;
- (void)searchBarValueChange:(id)arg1;
- (void)searchBarEndEdit:(id)arg1;
- (void)searchBarStartEdit:(id)arg1;
- (void)historyLoadMore;
- (void)didSendMsgFinished:(_Bool)arg1;
- (void)startLocateMsgModel:(id)arg1;
- (void)requestGetSearchSvrWithKeyWord:(id)arg1;
- (void)addLocalSearchResult:(CDUnknownBlockType)arg1;
- (void)actionGetSearchCloudResult:(id)arg1;
- (void)actionGetSearchResult:(id)arg1;
- (void)requestGetSearchResultWithKeyWord:(id)arg1;
- (_Bool)getGroupDicussSearchFlag:(id)arg1;
- (int)getC2CSearchFlagWithKeyWord:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchResultCellDidSelect:(id)arg1;
- (id)getSearBarButton;
- (id)getSearchBarTextFiled;
- (void)clickSearchView:(id)arg1;
- (void)showSearchView;
- (void)OnDraggingInTableView:(id)arg1;
- (void)showSearchBar:(_Bool)arg1;
- (void)BeginDraggingInTableView:(id)arg1;
- (void)updateC2CSearchContent:(id)arg1;
- (void)refreshSearchResultTable;
- (void)initSearchDisplay;
- (void)showDeleteMsgAlertView:(_Bool)arg1;
- (void)freshEditableItem;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionDeleteMessageModel:(id)arg1;
- (void)refreshMessageListAfterDeleteMsg:(id)arg1;
- (void)recaculatePageNumber;
- (void)actionPasteString:(id)arg1;
- (void)actionLaunchEmail:(id)arg1;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)ActionTrash;
- (void)saveContext:(id)arg1;
- (id)filterRichSigMsgsInList:(id)arg1;
- (void)loadBottomPage:(id)arg1;
- (void)loadTopPage:(id)arg1;
- (void)loadPage:(int)arg1;
- (void)ActionNext;
- (void)ActionRewind;
- (void)disableAllButton;
- (void)deleteMessageAllPage:(_Bool)arg1;
- (void)tableViewDidTouchRecordAtIndexPath:(id)arg1;
- (void)resumeFile:(id)arg1;
- (id)getQQFAModelFromMessages;
- (void)openFAViewer:(id)arg1;
- (void)didCellWithEvent:(int)arg1 object:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasShowTip; // @dynamic hasShowTip;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isGroup; // @dynamic isGroup;
@property(nonatomic) _Bool isShowingActionSheet; // @dynamic isShowingActionSheet;
@property(retain, nonatomic) QQMessageModel *lModel; // @dynamic lModel;
@property(retain, nonatomic) QQMessageModel *locationModel; // @dynamic locationModel;
@property(retain, nonatomic) QQMessageModel *sModel; // @dynamic sModel;
@property(retain, nonatomic) QQMessageModel *searchLModel; // @dynamic searchLModel;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *uin; // @dynamic uin;

@end
