/*
#####################################################################
# File    : EmptyTableCell.h
# Project : 
# Created : 2013-03-30
# DevTeam : Thomas Develop
# Author  : 
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

#import "SBErrorTableCell.h"

/** 空数据单元格 */
@interface SBEmptyTableCell : SBErrorTableCell {
}
@end
/**  空数据单元格 不能点击 */
@interface SBEmptyNotClickCell : SBEmptyTableCell {
}
@end
