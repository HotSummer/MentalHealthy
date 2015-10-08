//
//  SBMyOptionalStocksSettingViewController.h
//  StockBar
//
//  Created by 张松涛 on 14/12/23.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//
//

/**
 *  我的自选股权限设置
 */

//对应的cell
typedef NS_ENUM(NSInteger, SBMyOptionalSettingType) {
    SBMyOptionalSettingTypeAll = 0,
    SBMyOptionalSettingTypeFollow = 1,
    SBMyOptionalSettingTypeNone = 2,
};

//权限设置
typedef NS_ENUM(NSInteger, SBSettingType) {
    SBSettingTypeAll = 0,   //所有人
    SBSettingTypeAllow = 1, //我允许的
    SBSettingTypeNone = 2,  //无
};


//选中数据标记
extern NSString *const SBMyOptionalStocksSettingTag;
extern NSInteger emptyTag;//上一级传入为空的标记
//设置成功后的回掉
@protocol SBOptionalSettingDelegate <NSObject>

-(void)saveOptionSettingString:(NSString *)settingStr tagValue:(NSInteger)tag;
@end

@interface SBMyOptionalStocksSettingViewController : SBBasicController<SBHttpDataLoaderDelegate>
@property (nonatomic, strong) id<SBOptionalSettingDelegate> delegate;
@property (nonatomic, assign) NSInteger selectedCellTag;//上一级传入的标记数据
@end
