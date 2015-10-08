/*
 #####################################################################
 # File    : SBAllSearchCell.h
 # Project : StockBar
 # Created : 14/11/13
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

#import "SBSourceStatusCell.h"
#import <SBBarModule/SBUserCell.h>

extern NSString *const __DELETE_SEARCH_CACHE_TAG;

@class SBCellLabel;


typedef NS_ENUM(NSInteger, SBSearchType){
    SBSearchTypeStock = 0,   //搜索个股
    SBSearchTypeAuthor = 1,    //找人
    SBSearchTypeContent = 2,       //搜索内容
};

@interface DataItemResult (sbsearchcell)

/** 处理帖子的列表数据 */
- (DataItemResult *)handleSearchResult;

@end

//搜索过的字段cell
@interface SBSearchHistoryCell : SBTitleCell
@end

//最后一行用于删除的单元格
@interface SBSearchEmptyCell : SBEmptyTableCell
@end



//搜索吧
@interface SBSearchBarCell:SBTitleCell {
    UIButton *followBtn;        //关注按钮
    SBCellLabel *stockStatusLabel;        //股票所属
    UILabel *followedLbl;        //已关注
}
@end

//搜索帖子吧
@interface SBSearchStatusCell:SBSourceStatusCell {
    
}
@end

//搜索用户
@interface SBSearchAuthorCell : SBUserCell{
}
@end
