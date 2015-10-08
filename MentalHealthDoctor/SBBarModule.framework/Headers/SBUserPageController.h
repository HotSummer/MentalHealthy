/*
 #####################################################################
 # File    : SBUserPageController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 个人中心
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

#import "SBStatusTableView.h"
#import "SBAuthorLevelLabel.h"          //用户等级
#import <SBModule/SBNavRefreshTitle.h>           //导航条带刷新
#import "SBStatusInfluenceView.h"
#import <SBModule/SBLinkLabel.h>
#import "SBStockBarCardView.h"

@interface SBUserPageCardView : SBStockBarCardView

@end

//个人发帖数
@interface SBUserPostCountView : UIView {
}

@property (nonatomic ,strong) DataItemDetail *userDetail;      //用户信息

@end

//个人主页
@interface SBUserPageController : SBBasicController

@property (nonatomic, copy) NSString *userId;      //用户的id （必传）
@property (nonatomic ,strong) DataItemDetail *userDetail;      //用户信息

@end
