/*
 #####################################################################
 # File    : SBStatusCell.h
 # Project : StockBar
 # Created : 14-5-28
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

#import "SBStatusCellUnit.h"                        //帖子单元格数据操作
#import <SBModule/SBLinkLabel.h>                       //图文标签，点击使用
#import "SBStatusInfluenceView.h"                         //影响力view

@class SBUserTitleView;                        //帖子列表个人信息头

/**
 *  帖子单元格
 */
@interface SBStatusCell : SBDataTableCell <SBLinkLabelDelegate> {
    UIImageView *_statusView;                 //显示控件的区域
    SBUserTitleView *_userTitleView;          //用户信息头
}

/**
 *  根据单元格绑定的数据确定单元格的高度
 *
 *  @param cellDetail 单元格数据
 */
+ (CGFloat)cellHeight:(DataItemDetail *)cellDetail;

@end

/**
 *  当数据出错时的单元格样式
 */
@interface SBStatusErrorCell : SBErrorTableCell
@end

/**
 *  当数据加载时的单元格样式
 */
@interface SBStatusLoadingCell : SBLoadingTableCell
@end

/**
 *  当数据更多的单元格样式
 */
@interface SBStatusMoreCell : SBMoreTableCell
@end

/**
 *  当数据为空时的单元格样式
 */
@interface SBStatusEmptyCell : SBFullEmptyCell
@end
