//
//  BarArticleListComponentProtocol.h
//  StockBar
//
//  Created by 缪和光 on 14-6-26.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>

@class StockObject;

//适配财付通k线图下的数据适配
@protocol BarArticleListComponentProtocol <NSObject, UITableViewDataSource, UITableViewDelegate>

@required

/**
 刷新列表数据，并指定完成后的回调block
 @param block 完成刷新后的回调用block
 */
- (void)refreshGubaListWithFinishBlock:(void (^)(id<BarArticleListComponentProtocol> gubaComponent))block;

#pragma mark - 必须设置的节点
/** 传nav进来 **/
- (void)setNavigationController:(UINavigationController *)navController;
/** 传table进来 **/
- (void)setTableView:(UITableView *)tableView;
/** 传code **/
- (void)setStockCode:(NSString *)stockCode;
/** 传name **/
- (void)setStockName:(NSString *)stockName;
//传排序方法
-(void)setSortType:(NSInteger)sortType;
#pragma mark - 方法
/** 显示下一页数据 */
- (void)showNextPage;

//发帖成功
- (void)postSuccess:(NSNotification *)notification;

@end
