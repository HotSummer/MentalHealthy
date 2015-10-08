
/**
 * 文件名：SBMyUserReplyTable .<#h#>
 * 软件名称：StockBar
 * 文件描述：评论table
 * 作者&创建时间：Created by 陈永智 on 2015-03-13.
 * 版本号：xxx
 * 保护声明：Copyright (c) 2014年 com.eastMoney. All rights reserved.
 * 完成日期：
 * 修改历史:
 */
#import "SBStatusTableView.h"
#import "SBReplyStatusCell.h"

//回复单元格
@interface SBMyUserReplyStatusCell : SBReplyStatusCell {
}
@end

@interface SBMyUserReplyTable : SBStatusTableView

@property (nonatomic, copy)   receiveDataBlock recievedReplyStatus;   //获取帖子数

@end
