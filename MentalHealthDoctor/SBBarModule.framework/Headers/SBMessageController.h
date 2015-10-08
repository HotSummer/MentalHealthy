/*
 #####################################################################
 # File    : SBMessageController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 消息
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



//消息界面
typedef enum {
	SBMessageItemAtMe = 0,          //@我
	SBMessageItemReplyMe = 1,          //回复我
	SBMessageItemAssistMe = 2,            //赞我
	SBMessageItemOptional = 3,            //自选消息
	SBMessageItemGreat = 4,            //重大消息
} SBMessageItem;

@interface SBMessageController : SBBasicController {
    SBTableView *_messageTable;
}

@end
