//
//  SBReportUserOrPostUnit.h
//  StockBar
//
//  Created by 张松涛 on 14/12/22.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <SBModule/SBObjectSingleton.h>     //单例


extern NSString *const SBReportUserOrPostNotification;//举报通知
@interface SBReportUserOrPostUnit : NSObject

SB_ARC_SINGLETON_DEFINE(SBReportUserOrPostUnit);


+(void)reportUser:(NSString *)userId;//举报人
+(void)reportPost:(NSString *)postId;//举报帖子
@end
