/*
 #####################################################################
 # File    : SBFollowUnit.h
 # Project : StockBar
 # Created : 14-6-6
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 
 #####################################################################
 ### Change Logs   ###################################################
 #####################################################################
 ---------------------------------------------------------------------
 # Date  :
 # Author:
 # Notes :
 #
 #####################################################################
 */

#import <UIKit/UIKit.h>

//通知中心，关注操作的结果
extern NSString *const SBNotificationNameSBFollow;


//关注完毕
typedef void (^followBlock)(DataItemResult *result);

@interface SBFollowUnit : NSObject 

SB_ARC_SINGLETON_DEFINE(SBFollowUnit);


//关注某人
+(void)followUser:(NSString *)userId;

//取消关注某人
+(void)unfollowUser:(NSString *)userId;

//关注个股
+(void)followStock:(NSString *)sCode;

//取消关注个股
+(void)unfollowStock:(NSString *)sCode;

//收藏主题吧
+(void)followTheme:(NSString *)tCode;

//取消收藏主题吧
+(void)unfollowTheme:(NSString *)tCode;

@end
