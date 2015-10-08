/**
 * 文件名：SBStockFriendView .<#h#>
 * 软件名称：
 * 文件描述：找股友
 * 作者&创建时间：Created by 陈永智 on 2015-04-16.
 * 版本号：xxx
 * 保护声明：Copyright (c) 2014年 com.eastMoney. All rights reserved.
 * 完成日期：
 * 修改历史:
 */

#import <UIKit/UIKit.h>
#import "SBWeChatShareView.h"

//table滚动或者按钮点击时隐藏键盘回调
typedef void(^SBStockFriendViewHiddenKeyboardBlock)();

//发现界面类型
typedef NS_ENUM(NSInteger, SBFriendTableType) {
    SBFriendTableTypeEachFollow = 0,          //互相关注
    SBFriendTableTypeMyFollow = 1,            //关注
    SBFriendTableTypeFollowMe = 2,            //粉丝
} ;

//未登录单元格
@interface SBNotLoginedCell : SBDataTableCell
@end

//好友单元格
@interface SBFriendUserCell : SBUserCell
@end

//好友单元格(空)
@interface SBFriendUserEmptyCell : SBFullEmptyCell
@end

@interface SBStockFriendView : UIView

@property (nonatomic,weak) UIViewController *rootVC;

@property (strong) SBTableView *friendTable;            //好友列表
//成功获取了粉丝数据
@property (nonatomic, copy) receiveDataBlock recievedFans;

/**隐藏键盘回调*/
@property (nonatomic, copy) SBStockFriendViewHiddenKeyboardBlock hiddenKeyboardBlock;
/**微信找人弹出view*/
@property (nonatomic,strong) SBWeChatShareView *weChatShareView;

@end
