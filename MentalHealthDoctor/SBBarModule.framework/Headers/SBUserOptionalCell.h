//
//  SBOptionalCell.h
//  StockBar
//
//  Created by 张松涛 on 15/1/6.
//  Copyright (c) 2015年 Thomas. All rights reserved.
//

@class SBCellLabel;

@interface SBUserOptionalCell : SBBarCell

@property (nonatomic, strong) SBCellLabel *stockStatusLabel;        //股票所属
@property (nonatomic, strong) SBCellLabel *companyStatusLabel;      //公司状态
//根据传入的type 转换为string
-(NSString *)typeStringFromBarType:(SBV3StockbarType)barType;
@end
