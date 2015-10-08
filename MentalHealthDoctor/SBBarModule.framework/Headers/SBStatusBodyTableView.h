//
//  SBStatusBodyTableView.h
//  StockBar
//
//  Created by 缪和光 on 14-7-29.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import "SBStatusBodySectionHeaderProtocol.h"

@class SBStatusBodySectionHeader, SBStatusBodyTableViewDataBundle;

typedef SBTableData * (^SBStatusBodySectionDataMakeBlock)();
typedef SBHttpDataLoader *(^SBStatusBodyRequestMakeBlock)(SBTableData *tableViewData, SBV3ReplysSort sort);
typedef void(^SBStatusBodyHandleFakeDataBlock)(SBTableView *tableView, NSNotification *notification, SBStatusBodyTableViewDataBundle *bundle);


/**
 本类封装了TableView的逻辑，相当于TableView的delegate二次封装。
 
 本类封装了每一个type如何网络请求，如何指定cell的类，如何做假数据等。并且实现了NSCopying协议，
 所以相似的逻辑可以直接copy。比如“只看楼主”和“评论”逻辑相似，如果已经做了“评论”，则在创建针对
 “只看楼主”的bundle时，直接进行copy，再做修改（详见SBStatusBodyDefaultTableDataBundleComposer）
 */
@interface SBStatusBodyTableViewDataBundle : NSObject<NSCopying>

/**
 SBStatusBodyType决定了cell，网络请求，列表数据，响应假数据等
 */
@property (nonatomic, assign) SBStatusBodyType type;
@property (nonatomic, unsafe_unretained) SBV3ReplysSort sort;

@property (nonatomic, assign) SBV3AritlceType aritlceType;  //判断是新闻还是普通帖，还是投资组合

/**
 数据存储的地方，这个property不会在copy函数中被复制
 */
@property (nonatomic, strong) SBTableData *sectionData;
@property (nonatomic, copy) SBStatusBodySectionDataMakeBlock sectionDataMakeBlock;
@property (nonatomic, copy) SBStatusBodyRequestMakeBlock requestMakeBlock; //有sort，特殊处理
@property (nonatomic, copy) heightForRowBlock heightForRowBlock;
@property (nonatomic, copy) modifiRowClassBlock modifyRowCellInfoBlock;
@property (nonatomic, copy) receiveDataBlock receiveDataExtraOperationBlock;
@property (nonatomic, copy) SBStatusBodyHandleFakeDataBlock handleFakeDataBlock;

@end

/**
 正文使用的Table
 */
@interface SBStatusBodyTableView : SBTableView

// ----------- 正文所在的股吧相关信息(假数据用) ------------
/**
 正文所在的股吧名
 */
@property (nonatomic, copy) NSString *stockBarName DEPRECATED_ATTRIBUTE;
/**
 正文所在的股吧id
 */
@property (nonatomic, copy) NSString *stockBarId DEPRECATED_ATTRIBUTE;
/**
 正文所在的股吧类型
 */
@property (nonatomic, unsafe_unretained) NSInteger stockBarType DEPRECATED_ATTRIBUTE;

// ----------- 帖子相关信息 ------------
/**
 帖子id
 */
@property (nonatomic, copy) NSString *postId;
/**
 楼主id
 */
@property (nonatomic, copy) NSString *postAuthorId DEPRECATED_ATTRIBUTE;


// ----------- 回调 ------------
@property (nonatomic, copy) void (^onReceiveData)(DataItemResult *result); //网络请求完成回调

// 接收到了数据
@property (nonatomic, copy) receiveDataBlock didRecieveData;

// ----------- section header related -----------
@property (nonatomic, strong) UIView<SBStatusBodySectionHeaderProtocol> *sectionHeader;
@property (nonatomic, unsafe_unretained) SBStatusBodyType listType;
@property (nonatomic, strong) NSMutableDictionary *typeBundleMapping;

- (void)loadtypeBundleMappingFromBundleArray:(NSArray *)array;

- (void)loadDataForBodyType:(SBStatusBodyType)type;
- (void)refreshDataForBodyType:(SBStatusBodyType)type;

@end
