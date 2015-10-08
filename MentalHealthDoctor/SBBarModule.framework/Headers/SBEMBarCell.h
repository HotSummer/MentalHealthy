/*
 #####################################################################
 # File    : SBEMBarCell.h
 # Project : StockBar
 # Created : 14/12/15
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

/** 当数据出错时的单元格样式 */
@interface SBEMBarPageErrorCell : SBErrorTableCell
@end

/** 当数据为空的单元格样式 */
@interface SBEMBarPageEmptyCell : SBEmptyTableCell
@end

/** 当数据加载时的单元格样式 */
@interface SBEMBarPageLoadingCell : SBLoadingTableCell
@end

/** 当数据更多的单元格样式 */
@interface SBEMBarPageMoreCell : SBMoreTableCell
@end

/** 当数据结束的单元格样式 */
@interface SBEMBarPageFinishCell : SBFinishedTableCell
@end
