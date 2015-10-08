/*
 #####################################################################
 # File    : SBFriendsSearchController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 查找用户
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


//查找互相关注的好友单元格
@interface SBFriendsSearchCell:SBUserCell
@end

//查找互相关注的好友
@interface SBFriendsSearchController : SBBasicController

@property (strong) DataItemResult *friendsResult;


@end
