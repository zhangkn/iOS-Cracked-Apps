//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface DRCLicensePlateTopView : UIView
{
    CDUnknownBlockType _block;
    long long _selectIndex;
    NSMutableArray *_itemButtonArray;
}

@property(retain, nonatomic) NSMutableArray *itemButtonArray; // @synthesize itemButtonArray=_itemButtonArray;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)reloadDataWithLicenceArray:(id)arg1 defaultLicense:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 selectedBlock:(CDUnknownBlockType)arg2;

@end
