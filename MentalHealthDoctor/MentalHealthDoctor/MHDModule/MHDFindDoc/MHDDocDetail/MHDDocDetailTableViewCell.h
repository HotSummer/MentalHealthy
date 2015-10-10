//
//  MHDDocDetailTableViewCell.h
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/10.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

typedef NS_ENUM (NSUInteger,MHDDocDetailCellType) {
    MHDDocDetailCellPrice = 0,          //收费标准
    MHDDocDetailCellFavourable = 1,         //优惠信息
    MHDDocDetailCellSchool = 2,          //学历头衔
    MHDDocDetailCellSkill = 3,          //擅长领域
    MHDDocDetailCellAchieve = 4,         //成就
} ;

#define docDetialTableCellFontSize 15.0f


/**
 *  收费标准
 */
@interface MHDDocDetailPriceCell : SBDataTableCell

@property(nonatomic ,strong) UILabel *contentLbl;

@end

/**
 *  优惠信息
 */
@interface MHDDocDetailFavourableCell : MHDDocDetailPriceCell

@end

/**
 *  学历
 */
@interface MHDDocDetailSchoolCell : MHDDocDetailPriceCell

@property(nonatomic ,strong) UIView *leftView;

@end

/**
 *  其他
 */
@interface MHDDocDetailOtherCell : MHDDocDetailPriceCell

@end

/**
 *  section头
 */
@interface MHDDocDetailSectionView : UIView

@property(nonatomic ,strong) UILabel *sectionTitleLbl;

- (id)initWithFrame:(CGRect)frame title:(NSString *)title;

@end