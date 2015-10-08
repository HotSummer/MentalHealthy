/*
 #####################################################################
 # File    : SBHotBarsController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 热门股吧
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

@class SBTableView;

@interface SBHotBarsController : SBBasicController

@property (nonatomic, strong) SBTableView *barTable;

@property (nonatomic, copy) tableViewDataBlock startRequestData;//开始接收
@property (nonatomic, copy) receiveDataBlock didRecieveData;//已经接收到数据

@end
