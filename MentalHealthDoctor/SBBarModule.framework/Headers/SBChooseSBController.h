/*
 #####################################################################
 # File    : SBChooseSBController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 选择要标注的股票
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


//选择吧
@interface SBSelectBarCell:SBDataTableCell {
    SBCacheImageView *_portraitView;        //头像
    UILabel *_stockNameLabel;
}
@end

typedef void (^selectBar) (NSString *stockName, NSString *stockCode);

typedef void (^cancelSelectBar)();
@interface SBChooseSBController : SBBasicController

@property (nonatomic, copy) cancelSelectBar cancelSelectBar;  //取消选择
@property (nonatomic, copy) selectBar selectBar;  //选择了一个吧

@end

//选择吧(空)
@interface SBSelectBarEmptyCell:SBEmptyNotClickCell {
}
@end
