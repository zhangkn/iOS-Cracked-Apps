//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBFavoriteNewItemModel : TBJSONModel
{
    _Bool _canBeAddCart;
    _Bool _invalid;
    long long _favType;
    long long _itemType;
    long long _collectCount;
    long long _categoryLv1;
    long long _frontCategory;
    long long _saleType;
    long long _promotionType;
    long long _originOptions;
    NSString *_priceWhenCollect;
    NSString *_originPrice;
    NSString *_promotionPrice;
    NSString *_favId;
    NSString *_itemTitle;
    NSString *_sellerId;
    NSString *_shopUrl;
    NSString *_category;
    NSString *_itemPic;
    NSString *_collectTime;
    NSString *_similarItemUrl;
    NSString *_price;
    NSArray *_icons;
}

@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *similarItemUrl; // @synthesize similarItemUrl=_similarItemUrl;
@property(retain, nonatomic) NSString *collectTime; // @synthesize collectTime=_collectTime;
@property(retain, nonatomic) NSString *itemPic; // @synthesize itemPic=_itemPic;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *shopUrl; // @synthesize shopUrl=_shopUrl;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(retain, nonatomic) NSString *favId; // @synthesize favId=_favId;
@property(retain, nonatomic) NSString *promotionPrice; // @synthesize promotionPrice=_promotionPrice;
@property(retain, nonatomic) NSString *originPrice; // @synthesize originPrice=_originPrice;
@property(retain, nonatomic) NSString *priceWhenCollect; // @synthesize priceWhenCollect=_priceWhenCollect;
@property(nonatomic) long long originOptions; // @synthesize originOptions=_originOptions;
@property(nonatomic) long long promotionType; // @synthesize promotionType=_promotionType;
@property(nonatomic) long long saleType; // @synthesize saleType=_saleType;
@property(nonatomic) long long frontCategory; // @synthesize frontCategory=_frontCategory;
@property(nonatomic) long long categoryLv1; // @synthesize categoryLv1=_categoryLv1;
@property(nonatomic) long long collectCount; // @synthesize collectCount=_collectCount;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) long long favType; // @synthesize favType=_favType;
@property(nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(nonatomic) _Bool canBeAddCart; // @synthesize canBeAddCart=_canBeAddCart;
- (void).cxx_destruct;

@end

