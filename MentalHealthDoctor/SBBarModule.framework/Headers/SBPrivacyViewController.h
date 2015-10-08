//
//  SBPrivacyViewController.h
//  StockBar
//
//  Created by 张松涛 on 14/12/23.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

/**
 *  隐私界面
 */
#import "SBMyOptionalStocksSettingViewController.h"

typedef NS_ENUM(NSInteger, SBPrivacyCellType) {
    SBPrivacyCellTypeOptionalStock = 0,//自选股设置
    SBPrivacyCellTypeBlackUser = 1,//黑名单
};



@interface SBPrivacyViewController : SBBasicController<SBOptionalSettingDelegate>

@end
