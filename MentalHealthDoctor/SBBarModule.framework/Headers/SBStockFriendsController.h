/*
 #####################################################################
 # File    : SBStockFriendsController.h
 # Project : StockBar
 # Created : 14-6-21
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

//发现界面类型
typedef NS_ENUM(NSInteger, SBFriendTableType) {
	SBFriendTableTypeEachFollow = 0,          //互相关注
	SBFriendTableTypeMyFollow = 1,            //关注
	SBFriendTableTypeFollowMe = 2,            //粉丝
} ;

//好友单元格
@interface SBFriendUserCell : SBUserCell
@end

//好友单元格(空)
@interface SBFriendUserEmptyCell : SBFullEmptyCell
@end

@interface SBStockFriendsController : SBBasicController

@property (strong) SBTableView *friendTable;            //好友列表
//成功获取了粉丝数据
@property (nonatomic, copy) receiveDataBlock recievedFans;

@end
