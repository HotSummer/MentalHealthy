/*
 #####################################################################
 # File    : SBMarketCell.h
 # Project : StockBar
 # Created : 14-6-11
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 股价单元格
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

#import <SBModule/SBCellLabel.h>

extern CGFloat const SBMarketCellHeight;           //行情单元格高
extern CGFloat const SBMarketTitleHeight;          //行情表头高

//股价单元格表头
@interface SBMarketTitleView : UIView {
    UILabel *_marketStockLbl;         //初始
    UILabel *_marketNewLbl;         //现价
    UILabel *_marketPercentLbl;         //涨跌幅
    UILabel *_marketAmountLbl;         //涨跌值
    
}

@end

//股价单元格
@interface SBMarketCell : SBDataTableCell {
    SBCellLabel *_stockStatusLabel;        //股票所属
    UILabel *_stockNameLbl;         //股票名
    UILabel *_marketCodeLbl;         //行情代码
    UILabel *_marketNewLbl;         //现价
    UILabel *_marketPercentLbl;         //涨跌幅
    UILabel *_marketAmountLbl;         //涨跌值
    
}

@end
