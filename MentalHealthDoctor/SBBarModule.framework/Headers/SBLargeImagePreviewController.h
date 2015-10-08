//
//  SBLargeImagePreviewController.h
//  StockBar
//
//  Created by 缪和光 on 14-6-12.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SBLargeImagePreviewController;
@protocol SBLargeImagePreviewControllerDelegate <NSObject>

- (void)sbLargeImagePreviewController:(SBLargeImagePreviewController *)controller
            didFinishModifyWithResult:(NSArray *)resultImageArray;

@end

@interface SBLargeImagePreviewController : UIViewController

/**
 包含image information的dictionary，不是UIImage
 */
@property (nonatomic, strong) NSMutableArray *imageInfoArray;

/**
 初始显示的图像index，比如设置成3，则从第三张图片开始显示
 */
@property (nonatomic, unsafe_unretained) NSInteger showIndex;

@property (nonatomic, weak) id<SBLargeImagePreviewControllerDelegate> delegate;


- (instancetype)initWithImageInfoArray:(NSArray *)imageArray;

@end
