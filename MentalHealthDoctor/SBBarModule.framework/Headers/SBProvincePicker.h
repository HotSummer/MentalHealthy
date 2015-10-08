/*
 #####################################################################
 # File    : SBProvincePicker.h
 # Project : StockBar
 # Created : 14-7-24
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


/**
 *  修改昵称回调
 */
@protocol SBProvincePickerDelegate <NSObject>
/**
 *
 *  @param provinceStr   省
 *  @param cityStr 城市
 */
- (void)pickProvince:(NSString *)provinceStr city:(NSString *)cityStr;

/**
 *  取消选择
 */
- (void)cancelPick;
@end

@interface SBProvincePicker : UIView {
    
}
@property (nonatomic, copy) NSString *pickedProvince;        //省
@property (nonatomic, copy) NSString *pickedCity;        //城市
@property (nonatomic, retain) NSMutableArray *provinceCityArr;        //省 //城市
@property (weak) id<SBProvincePickerDelegate> delegate;           //回调

@end
