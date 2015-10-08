/*
 #####################################################################
 # File    : SBMyUserHeaderView.h
 # Project : StockBar
 # Created : 14-8-25
 # DevTeam :
 # Author  :张松涛
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


#import <UIKit/UIKit.h>

CGFloat const SBMyUserStatusHeaderHeight; //顶部header高度
@class SBMessageCountIcon;

@interface SBMyUserHeaderView : UIView
//关注的人列表头
//@interface SBMyUsersStatusHeader: UIView
{
    UIButton *_displayView;       //显示背景色
    SBMessageCountIcon *_newFriendsIcon;        //新的股友
    UILabel *_titleLbl;         //标题
    UILabel *_tipsLbl;         //提示
    UILabel *_viewLbl;         //查看
    UIImageView *_arrowView;         //箭头
}

@property (assign) SBTableView *tableView;

@end
