/*
 #####################################################################
 # File    : SBAtUsersController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 选择要@的用户
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



//选择人
@interface SBSelectUserCell:SBDataTableCell {
    SBCacheImageView *_portraitView;        //头像
    UILabel *_nickLbl;                  //昵称
}
@end

typedef void (^cancelSelectUser)();
typedef void (^selectUser) (NSString *userNick);

@interface SBAtUsersController : SBBasicController

@property (nonatomic, copy) cancelSelectUser cancelSelectUser;  //取消选择
@property (nonatomic, copy) selectUser selectUser;  //选择了一个人

@end
//选择人(空)
@interface SBSelectUserEmptyCell:SBEmptyNotClickCell {
}
@end
