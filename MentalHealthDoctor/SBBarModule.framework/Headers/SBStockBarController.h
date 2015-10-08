/*
 #####################################################################
 # File    : SBStockBarController.h
 # Project : StockBarIndependent
 # Created : 14-5-22
 # DevTeam : eastmoney
 # Author  : Thomas
 # Notes   : 股吧
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

#import "SBTableTabController.h"
#import "SBStatusTableView.h"
//股吧界面导航条类型
typedef enum {
//	SBStockBarNavTypeActivity = 0,          //动态
    //	SBStockBarNavTypeDiscover = 1,            //发现
	SBStockBarNavTypeMyStocks = 0,          //关注的股
	SBStockBarNavTypeMyUsers = 1,            //关注的人
} SBStockBarNavType;

//发现界面类型
//typedef enum {
//	SBStockBarTableTypeMyStocks = 0,          //关注的股
//	SBStockBarTableTypeMyUsers = 1,            //关注的人
//	SBStockBarTableTypeMyFriend = 2,            //好友
//} SBStockBarTableType;

@interface SBStockBarController : SBBasicController

@property (nonatomic, weak) UIViewController *currentCtrl;       //当前显示界面 指针

//刷新帖子数据
- (void)refreshStatusTable;

@end
