/*
 #####################################################################
 # File    : SBEMAllStatusComponent.h
 # Project : StockBar
 # Created : 14/11/11
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

typedef NS_ENUM(NSInteger, SBEMTalbeSortStyleType) {
    SBEMTalbeSortStyleTimeType = 0,
    SBEMTalbeSortStyleReplyType = 1
};

#import "BarArticleListComponentProtocol.h"
#import <SBBarModule/SBEMConstant.h>

@interface SBEMTableComponent : NSObject <BarArticleListComponentProtocol, SBHttpDataLoaderDelegate>

//规定必传的属性
@property (nonatomic, weak) UITableView *tableView;               //列表
@property (nonatomic, assign) UINavigationController *navigationController;//导航条
@property (nonatomic, copy) void (^finishBlock)(id<BarArticleListComponentProtocol> gubaComponent);

//自定义属性
@property (nonatomic, strong) DataItemResult *tableResult;          //列表数据

@property (nonatomic, assign) BOOL hasMoreButton;               //是否有更多数据

@property (nonatomic, copy) NSString *stockCode;            //股票代码
@property (nonatomic, copy) NSString *stockName;            //股票名字

@property (nonatomic, unsafe_unretained) NSInteger pageAt;          //当前页码
@property (nonatomic, assign) NSInteger sortType;     //当前页面排序

@property (nonatomic, strong) DataItemResult *currentResult;        //当前的数据
@property (nonatomic, strong) SBHttpDataLoader *statusLoader;           //数据请求



/** 单元格高度 **/
- (CGFloat)cellHeight:(DataItemDetail *)cellDetail indexPath:(NSIndexPath *)indexPath;

/** 单元格样式 **/
- (Class)tableDataCellClass;

/** 点击单元格 **/
- (void)didSelectCell:(DataItemDetail *)cellDetail tableView:(UITableView *)tableView index:(NSIndexPath *)index;

/** 请求数据 **/
- (SBHttpDataLoader *)requestData;

/** 接收数据 **/
- (DataItemResult *)recieveData:(DataItemResult *)result;

/** 接收数据失败 **/
- (void)recieveDataFailed;

@end
