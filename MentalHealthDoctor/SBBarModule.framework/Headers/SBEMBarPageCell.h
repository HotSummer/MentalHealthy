/*
 #####################################################################
 # File    : SBEMBarPageCell.h
 # Project : StockBar
 # Created : 14-7-2
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 
 #####################################################################
 ### Change Logs   ###################################################
 #####################################################################
 ---------------------------------------------------------------------
 # Date  :
 # Author:
 # Notes :
 #
 #####################################################################
 */

#import "SBSourceStatusCell.h"          //帖子单元格样式
#import <SBBarModule/SBUserCell.h>

/** 统计数据的界面 */
@interface SBEMStatisticsView : UIView

@property (nonatomic, assign) NSInteger   postCount;
@property (nonatomic, assign) NSInteger followerCount;
@property (nonatomic, strong) SBLinkLabel *  followerCountLLbl;
@property (nonatomic, strong) SBLinkLabel *  postCountLLbl;

@end

/** 财付通下正常显示的单元格 */
@interface SBEMBarPageCell : SBSourceStatusCell

@property (nonatomic, strong) UILabel *updateTimeLbl;                        //更新时间

@end

/** 当数据为空的单元格样式 */
@interface SBEMBarEmptyCell : SBEmptyTableCell
@end

/** 正常帖 */
@interface SBEMAllStatusCell : SBEMBarPageCell

//@property (nonatomic, strong) SBEMStatisticsView *statisticsView;                        //统计数据
@property (nonatomic, strong) SBCellLabel *topIconLbl;                        //置顶标志位
@property (nonatomic, strong) SBCellLabel *typeIconLbl;                       //帖子类型标志

@end



/** 热帖 */
@interface SBEMHotStatusCell : SBEMAllStatusCell

@end


/** 股友 */
@interface SBBarFriendCell : SBUserCell

@property (nonatomic, strong) UILabel *headerLabel;
//计算股友单元格的高度
+ (CGFloat)cellHeight:(DataItemDetail *)cellDetail indexPath:(NSIndexPath *)indexPath;
@end
