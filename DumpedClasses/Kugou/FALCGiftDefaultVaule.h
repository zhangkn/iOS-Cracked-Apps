//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, NSMutableDictionary, NSString, NSUserDefaults;

@interface FALCGiftDefaultVaule : NSObject
{
    NSMutableArray *_recentlyArray;
    NSUserDefaults *_userDefault;
    NSLock *_arrayLock;
    NSString *_saveFilePath;
    NSMutableDictionary *_savedGiftDic;
    NSString *_currentUser;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSString *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) NSMutableDictionary *savedGiftDic; // @synthesize savedGiftDic=_savedGiftDic;
@property(retain, nonatomic) NSString *saveFilePath; // @synthesize saveFilePath=_saveFilePath;
@property(retain, nonatomic) NSLock *arrayLock; // @synthesize arrayLock=_arrayLock;
@property(retain, nonatomic) NSUserDefaults *userDefault; // @synthesize userDefault=_userDefault;
@property(retain, nonatomic) NSMutableArray *recentlyArray; // @synthesize recentlyArray=_recentlyArray;
- (void).cxx_destruct;
- (id)filePath;
- (void)saveNewAppGiftToArray:(id)arg1;
- (void)saveGiftArrayToDicFile:(id)arg1;
- (id)getSavedGiftArray;
- (id)recentlyGiftList;
- (id)getSavedGiftDic;
- (id)init;

@end

