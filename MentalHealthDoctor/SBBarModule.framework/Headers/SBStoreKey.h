//
//  SBStoreKey.h
//  SBBarModule
//
//  Created by Thomas on 15/2/27.
//  Copyright (c) 2015年 thomas. All rights reserved.
//

#ifndef SBBarModule_SBStoreKey_h
#define SBBarModule_SBStoreKey_h

#pragma mark -
#pragma mark 列表缓存键名
//一般数据缓存宏
#define __SB_CACHE_DATA(type, key)       [NSString stringWithFormat:@"sb_cache_data_%@_%@", type, key]
//账户的数据缓存宏
#define __SB_CACHE_DATA_MINE(type)      [NSString stringWithFormat:@"sb_cache_data_mine_%@_%@", type, [SBUserInfoUnit getUserID]]

//普通列表数据
#define __SB_CACHE_HOT_BARS                    __SB_CACHE_DATA(@"HOT_BARS", @"")          //热门股吧
#define __SB_CACHE_HOT_THEMEBARS               __SB_CACHE_DATA(@"HOT_THEMEBARS", @"")          //热门主题股吧
#define __SB_CACHE_HOT_STATUS                    __SB_CACHE_DATA(@"HOT_STATUS", @"")          //热门帖子
#define __SB_CACHE_HOT_USERS                   __SB_CACHE_DATA(@"HOT_USERS", @"")     //热门用户
#define __SB_CACHE_FAMOUS_USERS                   __SB_CACHE_DATA(@"FAMOUS_USERS", @"")     //知名用户
#define __SB_CACHE_RECENT_BARS                 __SB_CACHE_DATA(@"RECENT_BARS", @"")        //最近浏览的吧
#define __SB_CACHE_USER_STATUS(uid)            __SB_CACHE_DATA(@"USER_STATUS", uid)     //用户的讨论列表
#define __SB_CACHE_USER_REPLYS(uid)             __SB_CACHE_DATA(@"USER_REPLYS",uid)     //我的回复列表
#define __SB_CACHE_USERASSIST_STATUS(uid)            __SB_CACHE_DATA(@"USERASSISTSTATUS",uid)        //我赞的主帖列表
#define __SB_CACHE_USER_BARS(uid)              __SB_CACHE_DATA(@"USER_BARS", uid)       //用户自选列表
#define __SB_CACHE_USER_USERS(uid)             __SB_CACHE_DATA(@"USER_USERS", uid)//用户关注股列表
#define __SB_CACHE_USER_FANS(uid)              __SB_CACHE_DATA(@"USER_FANS", uid)        //用户粉丝列表
#define __SB_CACHE_USER_INFO(uid)              __SB_CACHE_DATA(@"USER_INFO",uid)            //账户信息
#define __SB_CACHE_SOURCE_STATUS(sid)                    __SB_CACHE_DATA(@"SOURCE_STATUS", sid)    //原帖

//账户列表数据
#define __SB_CACHE_EM_FOLLOW_STOCKS       __SB_CACHE_DATA_MINE(@"EM_FOLLOW_STOCKS")       //财付通自选股列表
#define __SB_CACHE_MY_STATUS              __SB_CACHE_DATA_MINE(@"MY_STATUS")     //我的讨论列表
#define __SB_CACHE_MY_REPLYS             __SB_CACHE_DATA_MINE(@"MY_REPLYS")     //我的回复列表
#define __SB_CACHE_MY_FAVSTATUS          __SB_CACHE_DATA_MINE(@"MY_FAVSTATUS") //我收藏的帖子列表
#define __SB_CACHE_MY_FAVTHEMES          __SB_CACHE_DATA_MINE(@"MY_FAVTHEME") //我收藏的主题的列表
#define __SB_CACHE_REPLYME_REPLYS         __SB_CACHE_DATA_MINE(@"REPLYME")     //回复我的列表
#define __SB_CACHE_ATME_STATUS           __SB_CACHE_DATA_MINE(@"ATMESTATUS")        //@我的主帖列表
#define __SB_CACHE_ATME_REPLYS           __SB_CACHE_DATA_MINE(@"ATMEREPLYS")       //@我的回复列表
#define __SB_CACHE_MYASSIST_STATUS            __SB_CACHE_DATA_MINE(@"MYASSISTSTATUS")        //我赞的主帖列表
#define __SB_CACHE_MYASSIST_REPLYS           __SB_CACHE_DATA_MINE(@"MYASSISTREPLYS")       //我赞的回复列表

#define __SB_CACHE_ASSISTME_STATUS            __SB_CACHE_DATA_MINE(@"ASSISTMESTATUS")        //赞我的主帖列表
#define __SB_CACHE_ASSISTME_REPLYS            __SB_CACHE_DATA_MINE(@"ASSISTMEREPLYS")       //赞我的回复列表

#define __SB_CACHE_MYBARS_STATUS        __SB_CACHE_DATA_MINE(@"MYBARS_STATUS")//关注股吧的讨论列表
#define __SB_CACHE_MYBARS_HOTSPOSTS     __SB_CACHE_DATA_MINE(@"MYBARS_HOTPOSTS") //关注的股 热帖列表
#define __SB_CACHE_MYUSERS_STATUS        __SB_CACHE_DATA_MINE(@"MYUSERS_STATUS")  //关注人的讨论列表
#define __SB_CACHE_MYUSERS_REPLYS       __SB_CACHE_DATA_MINE(@"MY_USERS_REPLYS") //我关注的人 回复汇总


#define __SB_CACHE_RECENT_ATUSER         __SB_CACHE_DATA_MINE(@"RECENT_ATUSER")  //最近@的人
#define __SB_CACHE_RECENT_STOCK         __SB_CACHE_DATA_MINE(@"RECENT_STOCK")  //最近搜索的股票
#define __SB_CACHE_RECENT_CONTENT        __SB_CACHE_DATA_MINE(@"RECENT_CONTENT") //最近搜索的内容
#define __SB_CACHE_DRAFTBOX             __SB_CACHE_DATA_MINE(@"DRAFTBOX")   //草稿箱
#define __SB_CACHE_DRAFTBOXv2           __SB_CACHE_DATA(@"DRAFTBOXv2",@"")   //草稿箱v2,不与用户绑定了


#endif
