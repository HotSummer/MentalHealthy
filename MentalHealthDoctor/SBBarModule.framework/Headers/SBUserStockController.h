/*
 #####################################################################
 # File    : SBUserStockController.h
 # Project : StockBar
 # Created : 14-6-21
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

#import "SBMarketCell.h"       //行情单元格


//我的自选股单元格
@interface SBOptionalStocksCell:SBMarketCell
@end

//我的自选股空单元格
@interface SBOptionalStocksEmptyCell:SBFullEmptyCell
@end

@interface SBUserStockController : SBBasicController <MarketUnitDelegate>{
}

@property (nonatomic, copy) NSString *userId;      //用户id
@property (nonatomic, strong) SBMarketTitleView *marketTitleView;        //行情表头
@property (nonatomic, strong) SBTableView *optionalStockTable;     //自选股票

@end
