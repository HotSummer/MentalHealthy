//
//  SBPushViewController.h
//  StockBar
//
//  Created by eastmoney on 14-8-21.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import "SBAccountCell.h"

//股吧界面导航条类型
typedef enum {
	SBPushTypeEnable = 0,          //推送
	SBPushTypeAtme = 1,            //at我的
	SBPushTypePrice = 2,          //股价
	SBPushTypeMessage = 3,            //重要消息
} SBPushType;

@class EMRemoteNotificationSettings;
//推送单元格
@interface SBPushNormalCell : SBDataTableCell
{
    EMRemoteNotificationSettings *_notificationSettings;     //推送设置单例
}
@property (strong) UISwitch *switchView;
@end

//sectionFooter
@interface SBSectionFooter : UIView
@property (nonatomic, retain) UILabel *tipsLbl;

@end

//为空的推送单元格
@interface SBPushEmptyCell : SBDataTableCell

@end
//推送界面
@interface SBPushViewController : SBBasicController

@end


