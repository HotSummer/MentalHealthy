//
//  MHDActivityTableCell.h
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/8.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

@interface MHDActivityTableCell : SBDataTableCell

#define _ActivityTableCellHeight (CGRectGetWidth(self.frame) + 140.0f)

@property (nonatomic ,strong) UIImageView     * activityPosterImageView;//活动海报
@property (nonatomic ,strong) UIView          * activityIntroduceView;//活动介绍View
@property (nonatomic ,strong) UILabel         * activityReimdLbl;//活动期限提醒
@property (nonatomic ,strong) UILabel         * activityTypeLbl;//活动性质
@property (nonatomic ,strong) UILabel         * activityTitleLbl;//活动名称
@property (nonatomic ,strong) UILabel         * activityTimeLbl;//活动时间
@property (nonatomic ,strong) UILabel         * activityAddressLbl;//活动地址
@property (nonatomic ,strong) UIImageView     * activityTimeImageView;//活动时间图片
@property (nonatomic ,strong) UIImageView     * activityAddressImageView;//活动地址图片

@end