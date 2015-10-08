/*
 #####################################################################
 # File    : SBMyReplyStatusController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 我回复过的帖子
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

#import "SBReplyStatusCell.h"

@class SBStatusTableView;
//回复单元格
@interface SBMyReplyStatusCell : SBReplyStatusCell {
}
@end

@interface SBMyReplyStatusController : SBBasicController
@property  (nonatomic ,strong)SBStatusTableView *replysTable;        //回复信息列表

@end
