/*
 #####################################################################
 # File    : SBMessageCountUnit.h
 # Project : StockBar
 # Created : 14-6-5
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 消息数请求
 #####################################################################
 ### Change Logs   ###################################################
 #####################################################################
 ---------------------------------------------------------------------
 # Date  : 14-6-6
 # Author: Thomas
 # Notes : 消息数标志
 #
 #####################################################################
 */

@class SBMessageCountUnit;

//关注完毕
typedef void (^messageUnitBlock)(SBMessageCountUnit *unit);

/**
 *  消息数量
 */
@interface SBMessageCountUnit : NSObject <SBHttpDataLoaderDelegate>

SB_ARC_SINGLETON_DEFINE(SBMessageCountUnit);

@property (nonatomic, strong) SBHttpDataLoader *countLoader;   //数量请求
@property (nonatomic, strong) NSTimer *timer;           //定时器

@property (nonatomic, assign) NSInteger atPostCount;  //@我的帖子
@property (nonatomic, assign) NSInteger atReplyCount;//@我的回复
@property (nonatomic, assign) NSInteger assistPostCount;//赞我的帖子
@property (nonatomic, assign) NSInteger assistReplyCount;//赞我的回复
@property (nonatomic, assign) NSInteger replyCount;//回复我的
@property (nonatomic, assign) NSInteger followStocksCount;//关注的股 新
@property (nonatomic, assign) NSInteger hotPostsCount ;//关注的股 热帖数
@property (nonatomic, assign) NSInteger followUsersCount;//关注的人新
@property (nonatomic, assign) NSInteger newFansCount;//粉丝新
@property (nonatomic, assign) NSInteger followUserCount;//关注的人数
@property (nonatomic, assign) NSInteger fansCount;//粉丝数
@property (nonatomic, assign) NSInteger followBarCount;//股吧数



//5.4需求改为只有四个参数,前边参数调用地方太多，先不动
@property (nonatomic, retain)NSString *lastNewId ;        //第一条关注新股的id
@property (nonatomic, retain)NSString *lastHotId ;      //第一条热股id
@property (nonatomic, strong) NSString * lastUserStatusId;  //关注人帖子Id
@property (nonatomic, strong) NSString * lastUserReplyId;//关注人回复Id

@property (nonatomic, assign) NSInteger myStockNewCount;//关注股新帖数
@property (nonatomic, assign) NSInteger myStockHotCount;//热帖数
@property (nonatomic, assign) NSInteger myUserstatusCount;//关注人新帖数
@property (nonatomic, assign) NSInteger myUserReplyCount;//回复数

@property (nonatomic, assign) NSInteger iconBageMessageCount;//应用角标数
@property (nonatomic, assign) NSInteger drafCounts;//草稿数

@property (nonatomic, copy) messageUnitBlock recieveCounts;


/**
 *  开启循环请求
 */
+ (void)startLoopRequest;

/**
 *  关闭循环请求
 */
+ (void)stopLoopRequest;

/*请求消息数*/
+ (void)onTimerFired;

/**
 清除所有消息数字
 */
- (void)clearCount;
/**
 *  停止请求
 */
+(void)stopMessageRequest;

@end
