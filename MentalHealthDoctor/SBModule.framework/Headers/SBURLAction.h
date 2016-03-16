/*
 #####################################################################
 # File    : SBURLAction.h
 # Project :
 # Created : 2015-01-12
 # DevTeam : Thomas Develop
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

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum {
    SBOpenCtrlStylePush,      //push方式
    SBOpenCtrlStyleModal,      //present方式
} SBOpenCtrlStyle;

//
@interface SBURLAction : NSObject

/**
 需要导航到的url地址
 */
@property (nonatomic, strong, readonly) NSURL *url;

/**
 所有的参数构建成query
 */
@property (nonatomic, readonly) NSString* query;

/**
 打开界面的方式
 */
@property (nonatomic) SBOpenCtrlStyle openCtrlStyle;

/**
 如果url为http url，则会询问是否在外部打开
 默认为NO
 */
@property (nonatomic) BOOL openExternal;


//////////////////////////////
+ (id)actionWithURL:(NSURL *)url;
+ (id)actionWithURLString:(NSString *)urlString;
- (id)initWithURL:(NSURL *)url;
- (id)initWithURLString:(NSString *)urlString;


- (void)setInteger:(NSInteger)intValue forKey:(NSString *)key;
- (void)setDouble:(double)doubleValue forKey:(NSString *)key;
- (void)setString:(NSString *)string forKey:(NSString *)key;
- (void)setObject:(NSObject *)object forKey:(NSString *)key;
- (void)setAnyObject:(id)object forKey:(NSString *)key;

/**
 一次性写入多个参数
 使用场景：
    拷贝另一个SBURLAction的参数值到新的SBURLAction中
 */
- (void)addEntriesFromDictionary:(NSDictionary *)otherDictionary;
/**
 使用场景：
 从另一个SBURLAction拷贝参数
 */
- (void)addParamsFromURLAction:(SBURLAction *)otherURLAction;

- (NSInteger)integerForKey:(NSString *)key;
- (double)doubleForKey:(NSString *)key;
- (NSString *)stringForKey:(NSString *)key;
- (NSObject *)objectForKey:(NSString *)key;
- (id)anyObjectForKey:(NSString *)key;

/**
 *  parameters for navigator
 *
 *  @return
 */
- (NSDictionary *)queryDictionary;

@end

/** root controller 首页 */
NS_INLINE UIViewController *sb_rootCtrl() {
    UIWindow *window;
    if ([[UIApplication sharedApplication].delegate respondsToSelector:@selector(window)]) {
        window = [[UIApplication sharedApplication].delegate performSelector:@selector(window)];
    }else{
        window = [UIApplication sharedApplication].keyWindow;
    }
    
    //区分 nav 和 tab 2种设计框架
    UIViewController * rootvc = window.rootViewController;
    if ([rootvc isKindOfClass:[UINavigationController class]]) {
        return rootvc;
    } else if ([rootvc isKindOfClass:[UITabBarController class]]) {
        if ([((UITabBarController *)rootvc).selectedViewController isKindOfClass:[UINavigationController class]]) {
            return ((UITabBarController *)rootvc).selectedViewController;
        }
    }
    return rootvc;
}


/** url跳转 会猜测根nav来跳转 c方法 */
UIViewController *sb_openCtrl(SBURLAction *urlAction);
void sb_colseCtrl();

@interface UIViewController (urlAction)
@property (nonatomic, strong) SBURLAction *urlAction;

/**
 在当前的 栈中打开新的URL
 
 可以向SBURLAction中传入制定的参数，参数可以为integer, double, string3种类型
 bool的参数可以用0和1表示
 
 URL中附带的参数和setXXX:forKey:所设置的参数等价，
 例如下面两种写法是等价的：
 SBURLAction *a = [SBURLAction actionWithURL:@"stockbar://shop?id=1"];
 和
 SBURLAction *a = [SBURLAction actionWithURL:@"stockbar://shop"];
 [a setInteger:1 forKey:@"id"]
 
 在获取参数时，调用[a integerForKey:@"id"]，返回值均为1
 */
- (UIViewController *)sb_openCtrl:(SBURLAction *)urlAction;
/** 跳转到root 再推出界面 */
- (UIViewController *)sb_popRootAndOpenCtrl:(SBURLAction *)urlAction;

/** 在当前的 栈中关闭新的URL */
- (void)sb_colseCtrl;
@end

/** url跳转 根据当前nav来跳转 */
@interface UINavigationController (urlAction)
- (UIViewController *)sb_openCtrl:(SBURLAction *)urlAction;
- (UIViewController *)sb_popRootAndOpenCtrl:(SBURLAction *)urlAction;
- (void)sb_colseCtrl;
@end

@interface NSURL (urlAction)

/**
 将query解析为NSDictionary
 
 @return 返回参数字典对象，参数的值已经进行了decode.
 (stringByReplacingPercentEscapesUsingEncoding:NSUTF8StringEncoding)
 */
- (NSDictionary *)parseQuery;

@end



