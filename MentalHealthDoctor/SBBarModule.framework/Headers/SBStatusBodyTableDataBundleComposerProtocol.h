//
//  SBStatusBodyTableDataBundleComposerProtocol.h
//  StockBar
//
//  Created by 缪和光 on 14-8-22.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SBStatusBodyTableDataBundleComposerProtocol <NSObject>

@required

/**
 生成`SBStatusBodyTableViewDataBundle`组成的数组。

 `SBStatusBodyTableViewDataBundle`在SBStatusBodyTableView中定义。
 
 @return `SBStatusBodyTableViewDataBundle`组成的数组
 */
- (NSArray *)composeTableDataBundles;

@end
