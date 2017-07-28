//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NMMyAlbumManager : NSObject
{
    long long _previousStatus;
    _Bool _synchronizedFromServer;
}

+ (id)sharedManager;
@property(nonatomic) _Bool synchronizedFromServer; // @synthesize synchronizedFromServer=_synchronizedFromServer;
- (void)doRemoveSubscribedAlbumWithIds:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)removeSubscribedAlbum:(id)arg1 sender:(id)arg2;
- (void)updateSubscribedAlbum:(id)arg1 withSongs:(id)arg2 sender:(id)arg3;
- (void)formatUpdateSubscribedAlbums:(id)arg1 updatedAlbums:(CDUnknownBlockType)arg2;
- (void)doAddSubscribedAlbums:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)updateSingleAlbumInSubscribedList:(id)arg1 sender:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)updateSubscribedAlbums:(id)arg1 sender:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)fillDownloadCountForAlbums:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)checkIsAlbumSubscribedFromDatabase:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)loadSongIdsFromDatabaseWithAlbumId:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)loadAlbumCountFromDatabase:(CDUnknownBlockType)arg1;
- (void)loadAlbumsFromDatabase:(CDUnknownBlockType)arg1;
- (void)loadAlbumFromDatabaseWithAlbumId:(id)arg1 loadSong:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)postUpdateNotificationWithChange:(unsigned long long)arg1 albumIds:(id)arg2 sender:(id)arg3;
- (void)callbackAlbumSongIdsBlock:(CDUnknownBlockType)arg1 songIds:(id)arg2;
- (void)callbackAlbumSubscribeBlock:(CDUnknownBlockType)arg1 subscribed:(_Bool)arg2;
- (void)callbackAlbumCountBlock:(CDUnknownBlockType)arg1 count:(long long)arg2;
- (void)callbackAlbumBlock:(CDUnknownBlockType)arg1 album:(id)arg2 songs:(id)arg3;
- (void)callbackAlbumsBlock:(CDUnknownBlockType)arg1 albums:(id)arg2;
- (void)resetSynchronizedMark;
- (void)refreshUMG;
- (void)reachabilityChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end
