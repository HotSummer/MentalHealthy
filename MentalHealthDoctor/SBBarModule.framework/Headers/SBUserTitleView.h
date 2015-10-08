//
//  SBUserTitleView.h
//  StockBar
//
//  Created by 张松涛 on 14/11/7.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>


@class SBStatusInfluenceView;                       //影响力

#define __SB_COLOR_STATUS_AUTHOR               RGB(0x33, 0x33, 0x33)       //作者颜色
#define __SBEM_COLOR_STATUS_AUTHOR               RGB(0xb2, 0xb2, 0xb2)       //作者颜色
#define __SBEM_COLOR_STATUS_TIME               RGB(0x80, 0x80, 0x80)         //时间颜色
extern CGFloat const SBStatusAuthorFont;           //作者字体
extern CGFloat const SBStatusProtraitBoard;                //头像边框

typedef void (^portraitBtnOnTouchBlock)();
typedef void (^influenceBtnOnTouchBlock)();
@class SBLinkLabel;
//用户资料界面
@interface SBUserTitleView : UIView{
    
}
@property (nonatomic, retain) SBCacheButton *portraitBtn;               //头像
@property (nonatomic, retain) UILabel *authorNameLbl;                        //作者名字
@property (nonatomic, retain) SBStatusInfluenceView *influenceView;              //影响力View
@property (nonatomic, retain) SBLinkLabel *userBarAgeLbl;                        //用户吧龄
@property (nonatomic, strong) UIImageView *questionMark;                        //问号
@property (nonatomic, retain) UIButton *influenceAndAgeBtn;                    //影响力和吧龄点击背景
@property (nonatomic, retain) UILabel *postTimeLbl;                          //发帖时间
@property (nonatomic, retain) UILabel *statusFromLbl;                        //帖子发布源

@property (nonatomic, assign) CGFloat headerBorder;                 //头像边长
@property (nonatomic, assign) BOOL isMajia;                         //是否是马甲
@property (nonatomic, assign) NSInteger userBlackType;              //屏蔽信息
@property (nonatomic, copy) NSString *userId;                       //用户id
@property (nonatomic, copy) NSString *authorName;                   //作者名字
@property (nonatomic, copy) NSString *authorV;                      //作者vip
@property (nonatomic, copy) NSString *ipAddress;                    //ip所在地址
@property (nonatomic, copy) NSString *stockCode;                    //股吧代码
@property (nonatomic, assign) NSInteger influencelvl;               //影响力
@property (nonatomic, copy) NSString *userBarAge;                 //吧龄
@property (nonatomic, copy) NSString *postTime;                     //发帖时间
@property (nonatomic, copy) NSString *statusFrom;                   //帖子来源
@property (nonatomic, copy) influenceBtnOnTouchBlock turnToIntroduce;    //转到影响力界面


@property (nonatomic, assign) BOOL isBlackPage;                     //是否是财付通界面
@property (assign) UIViewController *ctrl;                          //保存当前界面的controller
@property (nonatomic, assign) CGFloat userTitleHeight;              //高度

@end

