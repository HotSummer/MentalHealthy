/*
 #####################################################################
 # File    : SBModifyAccountController.h
 # Project : StockBar
 # Created : 14-7-23
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



//修改界面类型
typedef enum {
	SBModifyTypeProtrait = 0,          //头像
	SBModifyTypeNick = 1,            //昵称
	SBModifyTypeAddress = 2,            //地址
	SBModifyTypeSex = 3,            //性别
	SBModifyTypeIntro = 4,            //个人简介
	SBModifyTypePassword = 5,            //密码
	SBModifyTypeLogout = 6,            //退出
} SBModifyType;

//账户管理单元格
@interface SBModifyDataCell : SBDataTableCell {
    UILabel *_titleLbl;
    UILabel *_valueLbl;
}

@end

//修改头像单元格
@interface SBModifyProtraitCell : SBModifyDataCell {
    UIImageView *_portraitView;           //头像
}

@end

@interface SBModifyAccountController : SBBasicController

@property (strong) SBTableView *modifyTable;       //修改列表

@property (assign) BOOL hasPickedImage;           //是否选过照片
@property (assign) BOOL hasUpdateNick;           //是否改过昵称

//添加用户的信息
- (void)addPassportDatas;

//给一个单元格赋值
- (void)createCell:(SBTableData *)tableData title:(NSString *)title value:(NSString *)value tag:(SBModifyType)tag;

@end
