//
//  SBMyStockTable.h
//  SBBarModule
//
//  Created by Chenyz on 15/3/13.
//  Copyright (c) 2015年 thomas. All rights reserved.
//

#import "SBStatusTableView.h"
#import "SBUserOptionalCell.h"

//股票及板块单元格
@interface SBMyStocksCell:SBUserOptionalCell
@end

//股票及板块空单元格
@interface SBMyStocksEmptyCell:SBFullEmptyCell
@end

@interface SBMyStockTable : SBStatusTableView

@end
