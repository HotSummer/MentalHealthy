/*
 #####################################################################
 # File    : SBModifyNickController.h
 # Project : StockBar
 # Created : 14-7-23
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



//昵称错误
@interface SBNickErrorCell : SBDataTableCell {
    UILabel *_errorLbl;       //错误
}
@end

//选择昵称单元格
@interface SBChooseNickCell : SBDataTableCell {
}
@property (strong) UILabel *nickLbl;      //昵称
@property (strong) UIButton *chooseBtn;      //选择
@end

/**
 *  修改昵称回调
 */
@protocol SBModifyNickDelegate <NSObject>
/**
 *  修改昵称
 *
 *  @param intro 昵称
 */
- (void)savedNick:(NSString *)nickStr;
@end

@interface SBModifyNickController : SBBasicController

@property (nonatomic, copy) NSString *nickStr;           //昵称
@property (weak) id<SBModifyNickDelegate> delegate;           //回调

@end
