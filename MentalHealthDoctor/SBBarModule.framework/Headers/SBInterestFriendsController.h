/*
 #####################################################################
 # File    : SBInterestFriendsController.h
 # Project : StockBar
 # Created : 14-6-25
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 感兴趣好友
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
#define __SB_COLOR_INTEREST_SECTION_BG               RGB(0xee, 0xee, 0xee)            //悬浮层标题
#define __SB_COLOR_INTEREST_SECTION_TITLE            RGB(0x33, 0x33, 0x33)            //悬浮层标题
#define __SB_COLOR_INTEREST_SECTION_SUBTITLE         RGB(0x99, 0x99, 0x99)            //悬浮层副标题

//发现界面类型
typedef NS_ENUM(NSInteger, SBInterestFriendsSection) {
	SBInterestFriendsSectionBars = 0,          //个股吧活跃用户
	SBInterestFriendsSectionFamous = 1,            //知名活跃用户
} ;


//感兴趣的好友单元格
@interface SBInterestFriendsCell:SBUserCell
@end

@interface SBInterestFriendsController : SBBasicController

@end
