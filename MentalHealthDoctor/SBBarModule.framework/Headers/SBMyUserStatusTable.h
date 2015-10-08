
/**
 * 文件名：SBMyUserStatusTable .<#h#>
 * 软件名称：StockBar
 * 文件描述：主帖table
 * 作者&创建时间：Created by 陈永智 on 2015-03-13.
 * 版本号：xxx
 * 保护声明：Copyright (c) 2014年 com.eastMoney. All rights reserved.
 * 完成日期：
 * 修改历史:
 */
#import "SBStatusTableView.h"
#import "SBSourceStatusCell.h"

//关注的人表头
@interface SBMyFollowUsersCell : SBDataTableCell {
    UIView *_displayView;       //显示背景色
    SBMessageCountIcon *_newFriendsIcon;        //新的股友
    UILabel *_titleLbl;         //标题
    UILabel *_tipsLbl;         //提示
    UILabel *_viewLbl;         //查看
}
@end

//关注的人单元格
@interface SBMyUsersStatusCell : SBSourceStatusCell
@end

@interface SBMyUserStatusTable : SBStatusTableView

@property (assign )NSInteger fansCount;

//成功获取了帖子数据
@property (nonatomic, copy) receiveDataBlock recievedUserStatus;

@end
