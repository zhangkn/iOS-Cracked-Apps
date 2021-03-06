//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBCollectionAbstractCell.h"

@class FBCollectionProfileFieldSection, NSMutableArray, NSMutableDictionary;
@protocol FBCollectionPageTagsCellDelegate;

@interface FBCollectionPageTagsCell : FBCollectionAbstractCell
{
    NSMutableDictionary *_nameURL;
    NSMutableArray *_tagLabels;
    FBCollectionProfileFieldSection *_collectionItem;
    id <FBCollectionPageTagsCellDelegate> _delegate;
}

+ (double)availableWidth;
+ (double)calculateHeightForCollectionItem:(id)arg1 shouldUpdateCell:(_Bool)arg2 nameURL:(id)arg3 tagLabels:(id)arg4 selfCell:(id)arg5;
+ (double)desiredHeightForCollectionItem:(id)arg1;
+ (void)setUpTagLabelWithSelfCell:(id)arg1 tagLabels:(id)arg2;
@property(nonatomic) __weak id <FBCollectionPageTagsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBCollectionProfileFieldSection *collectionItem; // @synthesize collectionItem=_collectionItem;
- (void).cxx_destruct;
- (void)tapAction:(id)arg1;
- (void)updateContentLabelsForCollectionItem:(id)arg1;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1 collectionItem:(id)arg2 showCustomBorder:(_Bool)arg3;

@end

