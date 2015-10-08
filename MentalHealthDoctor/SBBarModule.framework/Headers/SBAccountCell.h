/*
 #####################################################################
 # File    : SBAccountCell.h
 # Project : StockBar
 # Created : 14-6-16
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

extern CGFloat const SBAccountCellHeight;       //账户头像单元格高度

/**
 *  账号单元格
 */
@interface SBAccountCell : SBDataTableCell {
    SBCacheImageView *_portraitView;           //头像
    UILabel *_nickLbl;                //作者名字
    UILabel *_infoLbl;                //作者信息
    UILabel *_introLbl;               //作者简介
    UILabel *_viewLbl;               //查看
}

/**
 *  返回一个常用的 账号信息的列表单元格数据
 *
 *  @return 账号信息单元格数据
 */
+ (DataItemDetail *)sbUserAccountData;

@end

/**
 *  账号普通单元格
 */
@interface SBAccountDataCell : SBDataTableCell {
    UIImageView *_iconImageView;            //icon
    UILabel *_itemLbl;          //标题
}

@end
