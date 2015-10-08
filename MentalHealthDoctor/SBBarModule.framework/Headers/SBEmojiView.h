/*
 #####################################################################
 # File    : SBEmojiView.h
 # Project : StockBar
 # Created : 14-6-16
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 表情键盘
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

 

//选择了一个表情
typedef void(^secletEmojiBlock)(NSString *emojiMeaning) ;

@interface SBEmojiView : UIView <UIScrollViewDelegate>{
@private
    UIScrollView *_emojiShowBoard;                          //表情滑动显示面
    UIPageControl *_pageControl;                            //底部点
    
}

@property (strong) NSMutableArray *emojiNames;                            //表情图片名
@property (strong) NSMutableDictionary *emojiNamesDictionary;             //表情 图片名 含义字典
@property (nonatomic, copy) secletEmojiBlock selectEmoji;  //选择了一个表情



/** 载入表情 */
+ (DataItemResult *)loadEmoji;

@end
