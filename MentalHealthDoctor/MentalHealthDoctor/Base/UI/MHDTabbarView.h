//
//  MHDTabbarView.h
//  
//
//  Created by jf on 15/10/4.
//
//  自定义的tabbar View

#import <UIKit/UIKit.h>

typedef void(^tabbarDidSelectedBlock)(NSInteger selectedIndex);

@interface MHDTabbarView : UIView

@property(nonatomic,copy) tabbarDidSelectedBlock didSelectedTab;

/**
 初始化自定义tabbar
 @param tabbars 菜单的组合名称
 */
- (id)initWithTabbars:(NSArray *)tabbars;

@end
