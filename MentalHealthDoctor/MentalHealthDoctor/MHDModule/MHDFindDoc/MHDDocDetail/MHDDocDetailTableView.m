//
//  MHDDocDetailTableView.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/10.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDDocDetailTableView.h"
#import "MHDDocDetailTableViewCell.h"

#define sectionTitleArr @[@"收费标准",@"优惠信息",@"学历/头衔",@"擅长领域",@"履历与成就"]

@implementation MHDDocDetailTableView

- (id)initWithStyle:(BOOL)isGrouped {
    self = [super initWithStyle:isGrouped];
    
    self.scrollsToTop = NO;
    self.separatorStyle = UITableViewCellSeparatorStyleNone;
    self.isRefreshType = NO;
    
    __weak typeof(self) __weakSelf = self;
    
    //列表接收网络数据
    self.receiveData = ^(SBTableView *tableView ,SBTableData *tableViewData, DataItemResult *result) {
    };
    
    //点击单元格
    self.didSelectRow = ^(SBTableView *tableView, NSIndexPath *indexPath) {
    };
    
    //临时修改单元格样式
    self.modifiRowClass = ^ (SBTableView *tableView, Class originClass, NSIndexPath *indexPath) {
        switch (indexPath.section) {
            case MHDDocDetailCellPrice:
                return [MHDDocDetailPriceCell class];
                break;
            case MHDDocDetailCellFavourable:
                return [MHDDocDetailFavourableCell class];
                break;
            case MHDDocDetailCellSchool:
                return [MHDDocDetailSchoolCell class];
                break;
            case MHDDocDetailCellSkill:
                return [MHDDocDetailOtherCell class];
                break;
            case MHDDocDetailCellAchieve:
                return [MHDDocDetailOtherCell class];
                break;
            default:
                break;
        }
        return [MHDDocDetailOtherCell class];
    };
    
    //计算单元格的高度
    self.heightForRow = ^CGFloat(SBTableView *tableView, NSIndexPath *indexPath) {
        return [__weakSelf getCellHeight:indexPath];
    };
    
    //段头
    self.headerForSection = ^(SBTableView *table, NSInteger section) {
        SBTableData *tableViewData = [table dataOfSection:section];
        return [__weakSelf tableSectionHeaderView:tableViewData.tag];
    };
    
    SBTableData *tableViewData = [[SBTableData alloc] init];
    tableViewData.mDataCellClass = [MHDDocDetailPriceCell class];
    [self addSectionWithData:tableViewData];
    
    [self addData];
    
    return self;
}

//列表段头
- (UIView *)tableSectionHeaderView:(MHDDocDetailCellType)type {
    MHDDocDetailSectionView *sectionView = [[MHDDocDetailSectionView alloc] initWithFrame:CGRectMake(0.0f, 0.0f, CGRectGetWidth(self.bounds), 25.0f) title:sectionTitleArr[type]];
    [sectionView setBackgroundColor:[UIColor clearColor]];
    return sectionView;
}

- (void)addData{
    //收费标准
    SBTableData *priceTableData = [self dataOfSection:0];
    [priceTableData.tableDataResult clear];
    priceTableData.SBTableDataStatus = SBTableDataStatusFinished;
    priceTableData.hasHeaderView = YES;
    priceTableData.tag = MHDDocDetailCellPrice;
    priceTableData.mDataCellClass = [MHDDocDetailPriceCell class];
    priceTableData.emptyCellHeight = 0.0f;
    
    DataItemDetail *adDetail = [[DataItemDetail alloc] init];
    [adDetail setString:@"标准收费 500元/小时" forKey:__KEY_CELL_TITLE];
    [adDetail setTableCellTag:MHDDocDetailCellPrice];
    [priceTableData.tableDataResult addItem:adDetail];

    DataItemDetail *ad2Detail = [[DataItemDetail alloc] init];
    [ad2Detail setString:@"心里医生会员收费 450元/小时" forKey:__KEY_CELL_TITLE];
    [ad2Detail setTableCellTag:MHDDocDetailCellPrice];
    [priceTableData.tableDataResult addItem:ad2Detail];
    
    //优惠信息
    SBTableData *favourableTableData = [[SBTableData alloc] init];
    favourableTableData.SBTableDataStatus = SBTableDataStatusFinished;
    favourableTableData.hasHeaderView = YES;
    favourableTableData.tag = MHDDocDetailCellFavourable;
    favourableTableData.mDataCellClass = [MHDDocDetailFavourableCell class];
    favourableTableData.emptyCellHeight = 0.0f;
    [self addSectionWithData:favourableTableData];

    DataItemDetail *favourableDetail = [[DataItemDetail alloc] init];
    [favourableDetail setString:@"一次性购买4个咨询时享受8.5折优惠" forKey:__KEY_CELL_TITLE];
    [favourableDetail setTableCellTag:MHDDocDetailCellPrice];
    [favourableTableData.tableDataResult addItem:favourableDetail];

    //学历
    SBTableData *schoolTableData = [[SBTableData alloc] init];
    schoolTableData.SBTableDataStatus = SBTableDataStatusFinished;
    schoolTableData.hasHeaderView = YES;
    schoolTableData.tag = MHDDocDetailCellSchool;
    schoolTableData.mDataCellClass = [MHDDocDetailSchoolCell class];
    schoolTableData.emptyCellHeight = 0.0f;
    [self addSectionWithData:schoolTableData];
    
    for(int i=0;i<3;i++){
        DataItemDetail *schoolDetail = [[DataItemDetail alloc] init];
        [schoolDetail setString:@"美国宾夕法尼亚大学应用心理学博士" forKey:__KEY_CELL_TITLE];
        [schoolDetail setTableCellTag:MHDDocDetailCellSchool];
        [schoolTableData.tableDataResult addItem:schoolDetail];
    }
    
    //擅长领域
    SBTableData *skillTableData = [[SBTableData alloc] init];
    skillTableData.SBTableDataStatus = SBTableDataStatusFinished;
    skillTableData.hasHeaderView = YES;
    skillTableData.tag = MHDDocDetailCellSkill;
    skillTableData.mDataCellClass = [MHDDocDetailOtherCell class];
    skillTableData.emptyCellHeight = 0.0f;
    [self addSectionWithData:skillTableData];
    
    DataItemDetail *skillDetail = [[DataItemDetail alloc] init];
    [skillDetail setString:@"儿童孤独症／神经衰弱／恐怖症强迫症／失眠焦虑症／抑郁症／工作压力" forKey:__KEY_CELL_TITLE];
    [skillDetail setTableCellTag:MHDDocDetailCellSkill];
    [skillTableData.tableDataResult addItem:skillDetail];
    
    //履历
    SBTableData *achieveTableData = [[SBTableData alloc] init];
    achieveTableData.SBTableDataStatus = SBTableDataStatusFinished;
    achieveTableData.hasHeaderView = YES;
    achieveTableData.tag = MHDDocDetailCellAchieve;
    achieveTableData.mDataCellClass = [MHDDocDetailOtherCell class];
    achieveTableData.emptyCellHeight = 0.0f;
    [self addSectionWithData:achieveTableData];
    
    DataItemDetail *achieveDetail = [[DataItemDetail alloc] init];
    [achieveDetail setString:@"王颖1964年生于吉林长春，毕业于哈尔滨医科大学，从事精神科临床、研究工作30余年，善于运用中西医结合治疗各种精神疑难疾病。提出“精神病人的社会功能性恢复”的主张，强调与患者心与心的沟通，被患者称为“最懂你的人”。" forKey:__KEY_CELL_TITLE];
    [achieveDetail setTableCellTag:MHDDocDetailCellAchieve];
    [achieveTableData.tableDataResult addItem:achieveDetail];
    
    [self reloadData];
}

- (float)getCellHeight:(NSIndexPath *)indexPath{
    
    DataItemDetail *cellDetail = [self dataOfIndexPath:indexPath];
    if(!cellDetail){
        return 40.0f;
    }
    NSString *title = [cellDetail getString:__KEY_CELL_TITLE];
    CGFloat contentHeight = [title sb_sizeWithFont:[UIFont systemFontOfSize:docDetialTableCellFontSize] constrainedToSize:CGSizeMake(APPCONFIG_UI_SCREEN_FWIDTH-20.0f, 1000.0f) lineBreakMode:NSLineBreakByCharWrapping].height;
    if(contentHeight < 40){
        return 40.0f;
    }
    return contentHeight + 10.0f;
}

@end
