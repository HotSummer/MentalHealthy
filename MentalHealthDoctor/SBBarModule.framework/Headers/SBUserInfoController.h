/*
 #####################################################################
 # File    : SBUserInfoController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 用户信息
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

//信息界面类型
typedef enum {
	SBUserInfoTypePortrait = 0,          //头像
	SBUserInfoTypeNick = 1,            //昵称
	SBUserInfoTypeAddress = 2,            //地址
	SBUserInfoTypeSex = 3,            //性别
	SBUserInfoTypeProfile = 4,            //简介
} SBUserInfoType;

// 账户头像资料
@interface SBUserInfoPortraitCell : SBDataTableCell {
     SBCacheButton* _portraitView;
}

@end

// 账户其他基础信息
@interface SBUserInfoBaseCell : SBDataTableCell {
    UILabel *_titleLbl;
    UILabel *_valueLbl;
}

@end

//个人信息列表
@interface SBUserInfoController : SBBasicController {
    SBTableView *_infoTable;       //信息列表
}

// 账户id
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, strong) DataItemDetail *userDetail;

//列表
- (void)tableDidLoad;

@end
