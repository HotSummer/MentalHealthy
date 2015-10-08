//
//  SBInterestPeopleCell.h
//  StockBar
//
//  Created by 张松涛 on 14-9-22.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import "SBAdvertisementCell.h"

extern CGFloat const SBInterestPeopleCellHeight;      //提示单元格 高度
extern NSInteger const SBInterestPeopleCellCount;         //单元格数量


@interface SBInterestPeopleTitleCell : SBDataTableCell
@end

@interface SBInterestPeopleCell :SBUserCell{
    UIImageView *_statusView;
}

@property (strong)UIButton *followBar;
@end
