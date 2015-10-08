/*
 #####################################################################
 # File    : SBShareUnit.h
 # Project : StockBar
 # Created : 14-7-3
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 分享管理
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

#import <EMModuleUtility/EMPresentationManager.h>
#import <EM3rdPartShare/EMShareManager.h>

@interface SBShareUnit : NSObject <EMActivityShareDelegate>

SB_ARC_SINGLETON_DEFINE(SBShareUnit);

/**
 *  分享一篇帖子
 *
 *  @param statusDetail 分享的数据  这个数据格式要严格按照
 *  @param ctrl    所在的界面ctrl
 */
+ (void)shareStatus:(DataItemDetail *)statusDetail ctrl:(UIViewController *)ctrl;
+ (void)shareStatus:(DataItemDetail *)statusDetail ctrl:(UIViewController *)ctrl withShareType:(EMActivityShareScene) shareType;

@end
