/*
 #####################################################################
 # File    : SBAllSearchController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 查找帖子
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

//typedef NS_ENUM(NSInteger, SBAllSearchComeFrom) {
//    SBAllSearchComeFromEastMoney = 0,
//    SBAllSearchComeFromGuBa = 1
//};

#import "SBStatusTableView.h"
#import "SBAllSearchCell.h"


@interface SBAllSearchController : SBBasicController
@property (nonatomic, strong) DataItemResult* searchTableContentResult;//记录搜索字
@property (assign) SBSearchType searchType;       //搜索类型
//选择了一个列表
- (void)switchTableSegment:(SBSearchType)index;

@property (nonatomic, assign) SBAllSearchComeFrom allSearchComeFrom;
@end
