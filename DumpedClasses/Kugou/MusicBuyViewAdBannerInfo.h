//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MusicBuyViewAdBannerInfo : NSObject
{
    NSString *_title;
    NSString *_url;
    long long _jump_type;
    long long _listen_type;
    long long _source_id;
    NSString *_name;
    long long _singer_id;
    NSString *_singer_name;
    long long _zji_user_id;
    long long _zji_list_id;
    long long _view_sing_id;
    NSString *_view_sing_args;
    NSString *_banner_url;
    NSString *_image;
    long long _Id;
}

@property(nonatomic) long long Id; // @synthesize Id=_Id;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *banner_url; // @synthesize banner_url=_banner_url;
@property(copy, nonatomic) NSString *view_sing_args; // @synthesize view_sing_args=_view_sing_args;
@property(nonatomic) long long view_sing_id; // @synthesize view_sing_id=_view_sing_id;
@property(nonatomic) long long zji_list_id; // @synthesize zji_list_id=_zji_list_id;
@property(nonatomic) long long zji_user_id; // @synthesize zji_user_id=_zji_user_id;
@property(copy, nonatomic) NSString *singer_name; // @synthesize singer_name=_singer_name;
@property(nonatomic) long long singer_id; // @synthesize singer_id=_singer_id;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long source_id; // @synthesize source_id=_source_id;
@property(nonatomic) long long listen_type; // @synthesize listen_type=_listen_type;
@property(nonatomic) long long jump_type; // @synthesize jump_type=_jump_type;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)copyFromDictionary:(id)arg1;

@end

