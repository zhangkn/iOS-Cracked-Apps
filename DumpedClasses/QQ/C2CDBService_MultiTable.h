//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBAccountChangedProtocol.h"
#import "DBAsyncCallbackProtocol.h"
#import "IC2CDBService_MultiTable.h"

@class NSString, QQLockDictionary;

@interface C2CDBService_MultiTable : NSObject <IC2CDBService_MultiTable, DBAccountChangedProtocol, DBAsyncCallbackProtocol>
{
    QQLockDictionary *_c2cMsgTables;
    int _sepcial_care_getc2cMsg;
    int _sepcial_care_getAudioMsg;
    int _sepcial_care_getVideoMsg;
    CDUnknownBlockType _block_getc2cMsg;
    CDUnknownBlockType _block_getAudioMsg;
    CDUnknownBlockType _block_getVideoMsg;
}

- (void)updateMessageAfterLargeMsgRecved:(id)arg1;
- (_Bool)updateC2CMessageSeq:(int)arg1 msgUid:(long long)arg2 msgTime:(int)arg3 uin:(id)arg4 msgID:(int)arg5;
- (id)getMessage:(id)arg1 time:(int)arg2 msgSeq:(int)arg3;
- (void)deleteMessage:(id)arg1 time:(int)arg2 msgSeq:(int)arg3 msgUid:(long long)arg4;
- (id)getMessage:(id)arg1 time:(int)arg2 msgSeq:(int)arg3 msgUid:(long long)arg4;
- (void)updateMessageContentAndType:(id)arg1;
- (void)asyncGetQQMessageWithUin:(id)arg1 msgId:(int)arg2 userData:(id)arg3 callback:(id)arg4;
- (void)asyncGetC2CAndTempMsgWithTargetUin:(id)arg1 withTypes:(id)arg2 beforeOrEqualTime:(long long)arg3 limitCount:(unsigned int)arg4 userdata:(id)arg5 callback:(id)arg6;
- (void)asyncGetC2CMsgWithTargetUin:(id)arg1 withTypes:(id)arg2 beforeOrEqualTime:(long long)arg3 limitCount:(unsigned int)arg4 userdata:(id)arg5 callback:(id)arg6;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (void)GetVideoMesage:(id)arg1 Nday:(int)arg2 success:(CDUnknownBlockType)arg3;
- (void)GetVoiceModelList:(id)arg1 Nday:(int)arg2 success:(CDUnknownBlockType)arg3;
- (void)getC2CMessage:(id)arg1 Nday:(int)arg2 WithBlankMsg:(_Bool)arg3 success:(CDUnknownBlockType)arg4;
- (void)directInsertMessageIntoDb:(id)arg1;
- (void)SetC2CMsgSendStateWithMsgID:(id)arg1 state:(int)arg2 uin:(id)arg3;
- (_Bool)updateMessageTimeWithMessageModel:(id)arg1;
- (void)updateMessageTime:(long long)arg1 withMsgId:(int)arg2 uin:(id)arg3;
- (void)onDBChanged:(id)arg1;
- (void)beforeDBChange;
- (void)updateMessageReadStateAndExInfo:(id)arg1;
- (void)updateMessageExInfo:(id)arg1;
- (void)deleteMsgsWithQAMsgId:(id)arg1 QAMsgId:(unsigned long long)arg2;
- (void)updateAIOFeedMessage:(id)arg1 MsgID:(long long)arg2 content:(id)arg3 time:(int)arg4 actionUrl:(id)arg5;
- (id)getC2CMessageListIncludingMsg:(id)arg1 pageReturn:(int *)arg2 pagesize:(int)arg3 numberOfPage:(int)arg4;
- (id)getC2CMessageListAfterMsg:(id)arg1 keyword:(id)arg2 flag:(int)arg3 count:(int)arg4;
- (id)getC2CMessageList:(id)arg1 keyword:(id)arg2 types:(id)arg3 flag:(int)arg4 count:(int)arg5;
- (id)getC2CMessageList:(id)arg1 keyword:(id)arg2 flag:(int)arg3 count:(int)arg4;
- (id)getRecordWithUin:(id)arg1 inOut:(_Bool)arg2 msgNum:(unsigned int)arg3;
- (void)updateMessagePicUrlOfRichInfo:(id)arg1;
- (void)updateMessageRichInfo:(id)arg1;
- (id)getLastMessageWithUin:(id)arg1 isSend:(_Bool)arg2;
- (id)getC2CMessageListAsc:(id)arg1 msgTime:(int)arg2 msgID:(int)arg3 fromOldTable:(_Bool)arg4 count:(int)arg5;
- (id)getC2CMessage:(id)arg1 startTime:(unsigned int)arg2 endTime:(unsigned int)arg3;
- (id)getC2CMessageListNoBlank:(id)arg1 msgTime:(int)arg2 msgIDs:(id)arg3 fromOldTable:(_Bool)arg4 count:(int)arg5;
- (id)getC2CMessageListNoBlank:(id)arg1 msgTime:(int)arg2 msgID:(int)arg3 fromOldTable:(_Bool)arg4 count:(int)arg5;
- (id)getC2CMessageListAscForHistory:(id)arg1 msgTime:(int)arg2 msgID:(int)arg3 fromOldTable:(_Bool)arg4 count:(int)arg5;
- (id)getC2CMessageListNoBlankForHistory:(id)arg1 msgTime:(int)arg2 msgID:(int)arg3 fromOldTable:(_Bool)arg4 count:(int)arg5;
- (id)_examineWhetherExistSameTimeStamp:(id)arg1 msgTime:(int)arg2 msgID:(int)arg3 fromOldTable:(_Bool)arg4 count:(int)arg5 isAsc:(_Bool)arg6 uin:(id)arg7;
- (_Bool)_isSameTimeStamp:(id)arg1 count:(int)arg2;
- (id)_processForSameTimeStamp:(id)arg1 msgTime:(int)arg2 msgID:(int)arg3 count:(int)arg4 isAsc:(_Bool)arg5;
- (id)_filterMsgList:(id)arg1 msgTime:(int)arg2 msgID:(int)arg3 count:(int)arg4 isAsc:(_Bool)arg5;
- (id)_getPredicatewithMsgTime:(int)arg1 msgID:(int)arg2 count:(int)arg3 isAsc:(_Bool)arg4;
- (id)_limitMsgCount:(id)arg1 count:(unsigned long long)arg2 isAsc:(_Bool)arg3;
- (id)directGetRecentMsgWithUin:(id)arg1 limitcount:(int)arg2;
- (_Bool)hasInMessage:(id)arg1;
- (id)getC2CMessageList:(id)arg1 msgTime:(unsigned int)arg2 msgID:(int)arg3 fromOldTable:(_Bool)arg4 count:(int)arg5;
- (id)_uin2MsgDicFromMessages:(id)arg1;
- (void)_prepareForSendMessage:(id)arg1;
- (int)asyncUpdateWithSendResultMoedls:(id)arg1 userdata:(id)arg2 callback:(id)arg3;
- (_Bool)deleteAccostMsgsWithUin:(id)arg1;
- (id)getLastMessageWithUin:(id)arg1;
- (double)maxValidMessageTimeOfUin:(id)arg1;
- (double)maxMessageTimeOfUin:(id)arg1;
- (_Bool)deleteMessage:(id)arg1;
- (_Bool)removeMessage:(id)arg1;
- (void)clearAllMessage;
- (void)updateC2CRichMsgState:(int)arg1 msgTime:(int)arg2 state:(int)arg3 uin:(id)arg4;
- (id)GetC2CMsgWithTargetUin:(id)arg1 WithTypes:(id)arg2 beforeOrEqualTime:(long long)arg3 limitCount:(unsigned int)arg4;
- (void)updatePlaceholderFileMsg:(int)arg1 content:(id)arg2 uin:(id)arg3;
- (void)transferOnlineFileToOffline:(int)arg1 newContent:(id)arg2 fromUin:(id)arg3 msgTime:(int)arg4 fileId:(unsigned int)arg5;
- (id)getOnlineFileMsg:(id)arg1 fileId:(unsigned int)arg2 time:(int)arg3;
- (id)getOnlineFileMsg:(id)arg1 fileId:(unsigned int)arg2;
- (void)updateOnlineFileStateWithTime:(int)arg1 fromUin:(id)arg2 fileId:(unsigned int)arg3 newState:(int)arg4;
- (void)updateOnlineFileState:(id)arg1 fileId:(unsigned int)arg2 newState:(int)arg3;
- (void)deleteQQMessageWithUin:(id)arg1 FromTime:(int)arg2 toTime:(int)arg3;
- (void)deleteMsgWithUin:(id)arg1 msgID:(int)arg2;
- (_Bool)getPTTPICFileFromDB:(id)arg1 len:(int)arg2 type:(int)arg3 uin:(id)arg4;
- (void)removeAllAccostMessages;
- (id)getAccostMessages:(int)arg1;
- (void)saveChangeToDB:(id)arg1;
- (void)updateMessage:(id)arg1;
- (void)upOffLineFileMsg:(id)arg1 time:(long long)arg2 forRead:(int)arg3;
- (void)upOfflineFileMsg:(id)arg1 uuid:(id)arg2 forContent:(id)arg3;
- (void)upOfflineFileMsg:(id)arg1 uuid:(id)arg2 forRead:(int)arg3;
- (void)upOfflineFileMsg:(id)arg1 time:(int)arg2 forRead:(int)arg3;
- (_Bool)updateFileMsgContent:(id)arg1 msgID:(int)arg2 msgTime:(int)arg3 content:(id)arg4;
- (void)upOffLineFileMsg:(id)arg1 msgId:(int)arg2 forRead:(int)arg3;
- (id)GetVoiceModelList:(id)arg1 msgId:(id)arg2;
- (void)setQQFailStateWithUUid:(id)arg1 uin:(id)arg2;
- (int)GetC2CMessageCount:(id)arg1;
- (int)GetC2CMessageCountWithoutRichStateSig:(id)arg1;
- (void)deleteMsgWithContent:(id)arg1 forUin:(id)arg2;
- (void)deleteMsgsWithUin:(id)arg1;
- (id)QQMessageWithUin:(id)arg1 msgId:(int)arg2 timeStamp:(int)arg3;
- (id)QQMessageWithUin:(id)arg1 msgId:(int)arg2;
- (id)QQMessageWithUin:(id)arg1 timeStamp:(int)arg2;
- (id)QQMessageWithUinAsc:(id)arg1 pagesize:(unsigned long long)arg2 page:(unsigned long long)arg3;
- (id)QQRomaMessageWithUin:(id)arg1 startTime:(unsigned long long)arg2 pageSize:(unsigned long long)arg3;
- (id)QQFriendMessage:(id)arg1 MsgID:(long long)arg2 msgCount:(long long)arg3;
- (id)systemMessages:(unsigned long long)arg1;
- (void)upVideMsg:(double)arg1 read:(int)arg2 content:(id)arg3 uin:(id)arg4;
- (id)getC2CMessage:(id)arg1 readTime:(int)arg2 count:(int)arg3;
- (_Bool)batchInsertReceivedMessages:(id)arg1;
- (id)getLastMessage:(id)arg1;
- (_Bool)batchInsertSendMessages:(id)arg1;
- (_Bool)insertSendMessage:(id)arg1;
- (id)dbServiceWithUin:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)gc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
