//
//  SBUserPageCard.h
//  StockBar
//
//  Created by 张松涛 on 15/1/4.
//  Copyright (c) 2015年 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBStatusTableView.h"
#import "SBAuthorLevelLabel.h"          //用户等级
#import <SBModule/SBNavRefreshTitle.h>           //导航条带刷新
#import "SBStatusInfluenceView.h"
#import <SBModule/SBLinkLabel.h>


//个人主页名片
@interface SBUserPageCard : UIButton {
    
    SBCacheImageView *_portraitView;    //肖像
    UILabel *_userNicknameLbl;          //用户昵称
    SBAuthorLevelLabel *_levelLbl;      //用户等级
    SBUserPageInfluenceView *_influenceView;             //用户影响力View
    UILabel *_userBarAge;               //用户吧龄
    UIButton *_influenceAndAgeBtn;      //吧龄背景
    UILabel *_userIntroduceLbl;         //用户简介
    UILabel *_registerTimeLbl;          //注册时间
    UIButton *_followBtn;               //加关注按钮
    UIButton *_reportButton;             //举报按钮
    UIButton *chatBtn;                  //聊天按钮
    UILabel *_bothFollowLbl;            //共同关注
    UILabel *_influRangeLbl;           //能力圈
    UIView *_sepLine;                   //分割线
}

@property (nonatomic ,weak) UIViewController *ctrl;      //中心界面
@property (nonatomic ,strong) DataItemDetail *userDetail;      //用户信息
@end
