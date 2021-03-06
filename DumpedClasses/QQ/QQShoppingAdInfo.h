//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface QQShoppingAdInfo : NSObject
{
    unsigned int _product_type;
    unsigned int _price;
    unsigned int _ad_uin;
    unsigned int _creative_size;
    NSString *_img;
    NSString *_img_s;
    NSString *_txt;
    NSString *_desc;
    NSString *_rl;
    NSString *_apurl;
    NSString *_traceid;
    NSString *_product_id;
    NSString *_via;
    NSString *_landing_page;
    NSString *_button_txt;
    NSString *_view_id;
    NSString *_customized_invoke_url;
    NSString *_corporation_name;
    NSString *_corporate_image_name;
    NSString *_corporate_logo;
    NSString *_ext;
    NSString *_video_url;
    NSArray *_title_list;
    NSArray *_image_list;
    NSArray *_url_list;
    unsigned long long _aid;
    NSString *_button_url;
    NSString *_app_download_schema;
}

+ (id)getStrArr:(struct CPBMessageDecoder *)arg1 AtIndex:(unsigned int)arg2;
+ (id)getStr:(struct CPBMessageDecoder *)arg1 AtIndex:(unsigned int)arg2;
+ (id)initWithData:(struct CPBMessageDecoder *)arg1;
@property(readonly, copy, nonatomic) NSString *app_download_schema; // @synthesize app_download_schema=_app_download_schema;
@property(readonly, copy, nonatomic) NSString *button_url; // @synthesize button_url=_button_url;
@property(readonly, nonatomic) unsigned int creative_size; // @synthesize creative_size=_creative_size;
@property(readonly, nonatomic) unsigned long long aid; // @synthesize aid=_aid;
@property(readonly, copy, nonatomic) NSArray *url_list; // @synthesize url_list=_url_list;
@property(readonly, copy, nonatomic) NSArray *image_list; // @synthesize image_list=_image_list;
@property(readonly, copy, nonatomic) NSArray *title_list; // @synthesize title_list=_title_list;
@property(readonly, copy, nonatomic) NSString *video_url; // @synthesize video_url=_video_url;
@property(readonly, copy, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(readonly, nonatomic) unsigned int ad_uin; // @synthesize ad_uin=_ad_uin;
@property(readonly, copy, nonatomic) NSString *corporate_logo; // @synthesize corporate_logo=_corporate_logo;
@property(readonly, copy, nonatomic) NSString *corporate_image_name; // @synthesize corporate_image_name=_corporate_image_name;
@property(readonly, copy, nonatomic) NSString *corporation_name; // @synthesize corporation_name=_corporation_name;
@property(readonly, copy, nonatomic) NSString *customized_invoke_url; // @synthesize customized_invoke_url=_customized_invoke_url;
@property(readonly, copy, nonatomic) NSString *view_id; // @synthesize view_id=_view_id;
@property(readonly, copy, nonatomic) NSString *button_txt; // @synthesize button_txt=_button_txt;
@property(readonly, nonatomic) unsigned int price; // @synthesize price=_price;
@property(readonly, copy, nonatomic) NSString *landing_page; // @synthesize landing_page=_landing_page;
@property(readonly, copy, nonatomic) NSString *via; // @synthesize via=_via;
@property(readonly, nonatomic) unsigned int product_type; // @synthesize product_type=_product_type;
@property(readonly, copy, nonatomic) NSString *product_id; // @synthesize product_id=_product_id;
@property(readonly, copy, nonatomic) NSString *traceid; // @synthesize traceid=_traceid;
@property(readonly, copy, nonatomic) NSString *apurl; // @synthesize apurl=_apurl;
@property(readonly, copy, nonatomic) NSString *rl; // @synthesize rl=_rl;
@property(readonly, copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(readonly, copy, nonatomic) NSString *txt; // @synthesize txt=_txt;
@property(readonly, copy, nonatomic) NSString *img_s; // @synthesize img_s=_img_s;
@property(readonly, copy, nonatomic) NSString *img; // @synthesize img=_img;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWith:(struct CPBMessageDecoder *)arg1;

@end

