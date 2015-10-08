
/**
 * 文件名：SBMyStockStatusTable .<#h#>
 * 软件名称：StockBar
 * 文件描述：热帖新帖table父类，包含列表头等共有属性
 * 作者&创建时间：Created by 陈永智 on 2015-03-12.
 * 版本号：xxx
 * 保护声明：Copyright (c) 2014年 com.eastMoney. All rights reserved.
 * 完成日期：
 * 修改历史: 
 */
#import "SBStatusTableView.h"
#import "SBSourceStatusCell.h"

//关注的股单元格
@interface SBMyStockStatusCell : SBSourceStatusCell
@end

@interface SBMyStockStatusTable : SBStatusTableView

//请求了帖子数据
@property (nonatomic, copy) requestDataBlock requestMyStockStatus;            //必须实现
//成功获取了帖子数据
@property (nonatomic, copy) receiveDataBlock recievedMyStockStatus;

@end
