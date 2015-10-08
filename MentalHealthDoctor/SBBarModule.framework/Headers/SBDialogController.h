/*
 #####################################################################
 # File    : SBDialogController.h
 # Project : StockBar
 # Created : 14-5-28
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 对话框 父类，只用于继承
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
 *  这个类是一个类族的父类，不能直接初始化
 */
#import <SBModule/SBPlaceholderTextView.h>
@class SBPlaceholderTextView;
@class SBEmojiView;
extern NSInteger const DialogCharCountMax;

@interface SBDialogController : SBBasicController<UITextViewDelegate>{
    NSMutableArray* _aryExtendViews;
    UIView *_toolbar;
    
    UIView* _viewCurTopMain;

    UILabel *_lblCountDown;
    SBEmojiView *_emojiView;
    
    UIButton *_btnSmile;
    UIButton *_btnMention;
    UIButton *_btnDollar;
    UIButton *_btnPickImage;
    UIButton *_btnCamera;
    
    SBPlaceholderTextView* _textView;
}

@property (nonatomic, assign) NSInteger draftIndex; //草稿箱数据位置  默认NSNotFound
- (void)dollarButtonOnTouch:(id)sender ;//股票
- (void)mentionButtonOnTouch:(id)sender ;//at
- (void)smileButtonOnTouch:(id)sender ;//表情

//增加修改或删除toolbar上面的bar
-(void)switchToolbarExtendView:(UIView*)extendView atIndex:(NSInteger)nIndex;
-(void)insertOrAdjustToolbarExtendView:(UIView*)extendView atIndex:(NSInteger)nIndex;
- (void)addOrAdjustToolbarExtendView:(UIView *)extendView;
- (void)removeToolbarExtendView;
-(void)removeToolbarExtendView:(UIView*)extendView;

//子类定义toolbar上的按钮
- (NSArray *)toolbarButtons;

//切换顶部textview为其他的view
-(void)changeTopMainView:(UIView*)viewTopMain;
-(UIView*)getTopMainView;
@end
