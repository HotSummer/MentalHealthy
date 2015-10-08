//
//  SBAllSearchDataChange.h
//  SBBarModule
//
//  Created by 张松涛 on 15/3/31.
//  Copyright (c) 2015年 thomas. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const SBAllSearchStockMarketType;//保存财富网的marketType，用于数据重组
extern NSString *const SBAllSearchStockType; //StockType 

@class StockItemInfo;
@interface SBAllSearchDataChange : NSObject
//从stockInfo 的 array  转换成 DataItemResult
+(DataItemResult *)sb_resultFromItemInfo:(NSMutableArray *)resultArray;

//从DataItemDetail 转换 成 StockItemInfo
+(StockItemInfo *)sb_itemInfoFromDetail:(DataItemDetail *)detail;

@end
