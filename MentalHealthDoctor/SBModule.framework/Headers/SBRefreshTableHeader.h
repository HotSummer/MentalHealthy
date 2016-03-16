/*
 #####################################################################
 # File    : SBRefreshTableHeader.h
 # Project : GubaModule
 # Created : 14/12/29
 # DevTeam : eastmoney
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

#import <UIKit/UIKit.h>

#define __SB_HEIGHT_PULLDOWN_HEADER               63.0f           //默认刷新区域高度
#define __SB_COLOR_PULLDOWN_STR                     RGB(0x33, 0x33, 0x33)       //提示文字色值

//下拉列表顶部视图的状态
typedef enum {
    RefreshHeaderStateNormal,                   //正常状态
    RefreshHeaderStateDraggedLittle,            //拖动到一半，但是没达到刷新的高度
    RefreshHeaderStateDraggedLot,             //拖动到比较下面，放手能刷新的高度
    RefreshHeaderStateLoading,               //松手后刷新的状态
} RefreshHeaderState;

//下拉列表的表头
@interface SBRefreshTableHeader : UIView {
}
//列表状态
@property (nonatomic, assign) RefreshHeaderState state;

@end
