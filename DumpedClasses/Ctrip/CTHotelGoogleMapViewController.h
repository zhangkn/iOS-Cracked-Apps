//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTGoogleMapViewDelegate.h"
#import "CTHotelPoiFloatingViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class CTGoogleMapAnotation, CTHotelGoogleMapView, CTHotelMapPoiCacheBean, CTHotelPoiFloatingView, NSString, UIButton;

@interface CTHotelGoogleMapViewController : CTRootViewController <CTGoogleMapViewDelegate, UIAlertViewDelegate, CTHotelPoiFloatingViewDelegate>
{
    int dataFlag;
    _Bool isGoBack;
    _Bool isGoNextPage;
    int _hotelId;
    int _cityId;
    _Bool _googleMapLoaded;
    int __hotelMapType;
    CTHotelGoogleMapView *__mapView;
    UIButton *__backButton;
    UIButton *__streetButton;
    UIButton *__navigationButton;
    CTHotelPoiFloatingView *__poiFloatingView;
    UIButton *__otherMapButton;
    NSString *_hotelName;
    NSString *_hotelAddress;
    NSString *__streetUrl;
    CTHotelMapPoiCacheBean *__mapPoiCacheBean;
    CDUnknownBlockType __googleMapDidLoadFinishBlock;
    CTGoogleMapAnotation *__currentHotelAnnotation;
    NSString *__pageCode;
    struct CLLocationCoordinate2D __hotelCoordiante;
}

@property(copy, nonatomic) NSString *_pageCode; // @synthesize _pageCode=__pageCode;
@property(retain, nonatomic) CTGoogleMapAnotation *_currentHotelAnnotation; // @synthesize _currentHotelAnnotation=__currentHotelAnnotation;
@property(copy, nonatomic) CDUnknownBlockType _googleMapDidLoadFinishBlock; // @synthesize _googleMapDidLoadFinishBlock=__googleMapDidLoadFinishBlock;
@property(retain, nonatomic) CTHotelMapPoiCacheBean *_mapPoiCacheBean; // @synthesize _mapPoiCacheBean=__mapPoiCacheBean;
@property(nonatomic) int _hotelMapType; // @synthesize _hotelMapType=__hotelMapType;
@property(copy, nonatomic) NSString *_streetUrl; // @synthesize _streetUrl=__streetUrl;
@property(copy, nonatomic) NSString *hotelAddress; // @synthesize hotelAddress=_hotelAddress;
@property(copy, nonatomic) NSString *hotelName; // @synthesize hotelName=_hotelName;
@property(retain, nonatomic) UIButton *_otherMapButton; // @synthesize _otherMapButton=__otherMapButton;
@property(retain, nonatomic) CTHotelPoiFloatingView *_poiFloatingView; // @synthesize _poiFloatingView=__poiFloatingView;
@property(retain, nonatomic) UIButton *_navigationButton; // @synthesize _navigationButton=__navigationButton;
@property(retain, nonatomic) UIButton *_streetButton; // @synthesize _streetButton=__streetButton;
@property(retain, nonatomic) UIButton *_backButton; // @synthesize _backButton=__backButton;
@property(retain, nonatomic) CTHotelGoogleMapView *_mapView; // @synthesize _mapView=__mapView;
@property(nonatomic) struct CLLocationCoordinate2D _hotelCoordiante; // @synthesize _hotelCoordiante=__hotelCoordiante;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)floatingView:(id)arg1 poiDidSelected:(unsigned long long)arg2 poiType:(int)arg3;
- (void)floatingView:(id)arg1 statusDidChanged:(long long)arg2;
- (void)floatingView:(id)arg1 statusWillChange:(long long)arg2;
- (void)resetDrivingClicked;
- (void)drawHotelMap;
- (void)doSenderHotelData;
- (void)doSenderMethod;
- (void)searWayDestAddress:(id)arg1;
- (void)telephoneClick:(id)arg1;
- (void)updateViewData;
- (void)initData:(id)arg1 address:(id)arg2 hotelCoordiante:(id)arg3 hotelMapType:(int)arg4;
- (void)urlServiceSuccessCallBackWithBusinessCode:(id)arg1 subServiceCount:(unsigned long long)arg2;
- (void)urlServiceFailedCallBackWithBusinessCode:(id)arg1 errorCode:(int)arg2 errorInformation:(id)arg3;
- (void)onInfoWindowClicked:(id)arg1;
- (void)onAnotationClicked:(id)arg1;
- (void)mapZoomChanged:(int)arg1;
- (void)mapCenterChanged:(double)arg1 longitude:(double)arg2;
- (void)loadGoogleMapFail;
- (void)loadGoogleMapFinish;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)adjustStatusBar;
- (void)viewDidLoad;
- (id)initWithHotelName:(id)arg1 hotelAddress:(id)arg2 hotelCoordinate:(id)arg3 hotelMapType:(int)arg4 cityId:(int)arg5 hotelId:(int)arg6 streetUrl:(id)arg7 nearbyInfoArr:(id)arg8 selectNearbyModel:(id)arg9;
- (void)_otherMapButtonDidClicked;
- (void)_navigationButtonDidClicked;
- (void)_streetButtonDidClicked;
- (void)_goToStreetViewController;
- (void)_updatelist;
- (void)_doSenderHotelData;
- (void)_doSenderMethod;
- (void)_initView;
- (void)_selectAnnotationWithModel:(id)arg1 moveToCenter:(_Bool)arg2;
- (id)createHotelAnotation:(id)arg1 index:(long long)arg2;
- (void)_addHotelListAnnotations;
- (void)_addPOIListAnnotations;
- (id)hotelTypeFlag:(int)arg1;
- (id)_createAnnotationWithModel:(id)arg1;
- (void)_addHotelAnnotation;
- (void)_goToHotelDetail:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

