//
//  SBAdvetisementCell.h
//  StockBar
//
//  Created by 张松涛 on 14-9-10.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//




extern CGFloat const SBMyAdvertiseCellHeight;           //广告单元格高度
extern NSString *const ADTableDataStoreKey;       //广告
extern NSInteger const SBAdvertiseBannerIndexPath;       //布告栏位置


typedef enum
{
    SBBannerTypeNone,               //空
    SBBannerTypeAdvertisement,      //广告
    SBBannerTypeInterest,           //可能感兴趣的人
}SBBannerType;                      //布告栏类型


@interface SBAdvertisementUnit:NSObject
@property (nonatomic, strong) DataItemResult *advertiseInfo;

SB_ARC_SINGLETON_DEFINE(SBAdvertisementUnit);
- (void)loadAdvertise;
@end

@interface SBAdvertisementCell : SBDataTableCell {
    SBCacheImageView *_adImageView;      //广告图
    UIImageView *_titleBg;         //广告标题背景
    UILabel *_titleLbl;         //广告标题
}

@end
