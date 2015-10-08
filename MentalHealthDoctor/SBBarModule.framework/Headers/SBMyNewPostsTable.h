/**
 * 文件名：SBMyHotPostsTable .<#h#>
 * 软件名称：StockBar
 * 文件描述：关注的股新帖table
 * 作者&创建时间：Created by 陈永智 on 2015-03-12.
 * 版本号：xxx
 * 保护声明：Copyright (c) 2014年 com.eastMoney. All rights reserved.
 * 完成日期：
 * 修改历史:
 */

#import "SBMyStockStatusTable.h"

@interface SBMyNewPostsTable : SBMyStockStatusTable

@property (nonatomic, strong) UIViewController *emStockBarCtrl;//给财付通自选用
@property (nonatomic, copy) tableViewDataBlock startRequestData;//开始请求

@end
