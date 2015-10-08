/*
 #####################################################################
 # File    : SBDiscoverController.h
 # Project : StockBar
 # Created : 14-6-23
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 发现界面
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

#import "SBDiscoverCell.h"

typedef void (^SBDiscoverWillRequestBlock)();
typedef void (^SBDiscoverDidRequestCompleteBlock)();

@interface SBDiscoverController : SBBasicController {
    SBTableView *_discoverTable;      //显示热门的列表
}


/**
 *  加载发现列表的数据
 */
- (void)loadDiscoverData;

//第一个热门加载完毕，提供给自选刷新按钮
@property (nonatomic, copy) SBDiscoverWillRequestBlock willRequestBlock;
@property (nonatomic, copy) SBDiscoverDidRequestCompleteBlock didRequstBlock;

@end
