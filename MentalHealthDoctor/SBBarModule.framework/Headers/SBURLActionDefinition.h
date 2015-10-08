//
//  SBURLActionDefinition.h
//  StockBar
//
//  Created by Thomas on 15/1/12.
//  Copyright (c) 2015年 Thomas. All rights reserved.
//

#import <SBModule/SBURLAction.h>
#import <SBModule/NSString+SBMODULE.h>

#ifndef StockBar_SBURLActionDefinition_h
#define StockBar_SBURLActionDefinition_h

/** 进入帖子正文的 url */
NS_INLINE SBURLAction *sb_actionurl_statusbody(NSString *postId, NSString *barName) {
    barName = [barName sb_urlEncoding];
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBStatusBodyController?postId=%@&barName=%@", postId, barName];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入帖子正文的 url 带2个额外的参数 */
NS_INLINE SBURLAction *sb_actionurl_statusbody2(NSString *postId, NSString *barName, int controllerType, int comefromType) {
    barName = [barName sb_urlEncoding];
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBStatusBodyController?postId=%@&barName=%@&controllerType=%d&comeFromType=%d", postId, barName, controllerType, comefromType];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入个人中心页的 url */
NS_INLINE SBURLAction *sb_actionurl_userpage(NSString *userId, DataItemDetail *userDetail) {
    //是进入我的主页还是他人主页
    NSString *actionURL ;
    if ([userId isEqualToString:[SBUserInfoUnit getUserID]]) {
        actionURL = [NSString stringWithFormat:@"stockbar://SBStockBarController?"];
    }else{
        actionURL = [NSString stringWithFormat:@"stockbar://SBUserPageNewController?userId=%@", userId];
    }
    
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    if (userDetail != nil) {
        [action setObject:userDetail forKey:@"userDetail"];
    }
    return action;
}

/** 进入主题吧中心页的 url */
NS_INLINE SBURLAction *sb_actionurl_themepage(NSString *barcode, NSString *barname) {
    barname = [barname sb_urlEncoding];
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBThemePageController?barcode=%@&barname=%@", barcode, barname];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入个人自选股的 url */
NS_INLINE SBURLAction *sb_actionurl_user_stocks(NSString *userId) {
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBUserOptionalController?userId=%@", userId];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入个人关注的人 url */
NS_INLINE SBURLAction *sb_actionurl_user_users(NSString *userId) {
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBMyFollowUsersController?userId=%@", userId];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入个人粉丝的 url */
NS_INLINE SBURLAction *sb_actionurl_user_fans(NSString *userId) {
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBMyFansController?userId=%@", userId];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入个人详情页的 url */
NS_INLINE SBURLAction *sb_actionurl_userinfo(NSString *userId, DataItemDetail *userDetail) {
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBUserInfoController?userId=%@", userId];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    if (userDetail != nil) {
        [action setObject:userDetail forKey:@"userDetail"];
    }
    return action;
}

/** 发新帖 **/
NS_INLINE SBURLAction *sb_actionurl_poststatus(NSString *stockCode){
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBPostStatusController?stockCode=%@", stockCode];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 发新帖 草稿箱 **/
NS_INLINE SBURLAction *sb_actionurl_poststatus2(NSInteger draftIndex){
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBPostStatusController?draftIndex=%d", (int)draftIndex];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入转发帖的 url */
NS_INLINE SBURLAction *sb_actionurl_repoststatus(NSObject *originalPost) {
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBRepostStatusController"];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    [action setObject:originalPost forKey:@"originalPost"];
    return action;
}

/** 转发帖 草稿箱 **/
NS_INLINE SBURLAction *sb_actionurl_repoststatus2(NSInteger draftIndex){
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBRepostStatusController?draftIndex=%d", (int)draftIndex];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}


/** 进入影响力介绍的 url */
NS_INLINE SBURLAction *sb_actionurl_influence() {
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBIntroduceViewController"];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}


/** 隐私界面 */
NS_INLINE SBURLAction *sb_actionurl_privacy() {
    NSString *actionURL = @"stockbar://SBPrivacyViewController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/*** 自选权限设置 */
NS_INLINE SBURLAction *sb_actionurl_optional_setting(int selectedCellTag, id delegate){
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBMyOptionalStocksSettingViewController?selectedCellTag=%d",selectedCellTag];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    [action setObject:delegate forKey:@"delegate"];
    return action;
}

/***  黑名单 */
NS_INLINE SBURLAction *sb_actionurl_black_user(){
    NSString *actionURL = @"stockbar://SBMyBlackUserViewController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入相册或者拍照的 url */
NS_INLINE SBURLAction *sb_actionurl_imagepicker(int imagePickerType, int sourceType, id ctrl) {
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBImagePickerController?imagePickerType=%d&sourceType=%d", imagePickerType, sourceType];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    [action setObject:ctrl forKey:@"parentController"];
    action.openCtrlStyle = SBOpenCtrlStyleModal;
    return action;
}
/** 进入我关注的股 **/
NS_INLINE SBURLAction *sb_actionurl_view_my_bars(){
    NSString *actionURL = @"stockbar://SBMyOptionalController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入我关注的人 **/
NS_INLINE SBURLAction *sb_actionurl_view_my_friends(){
    NSString *actionURL = @"stockbar://SBStockFriendsController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入发现界面 **/
NS_INLINE SBURLAction *sb_actionurl_view_my_discover(){
    NSString *actionURL = @"stockbar://SBDiscoverController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入股吧搜索界面 searchtype 是人，帖，股，conmeFrom是 要不要滚动到股吧**/
NS_INLINE SBURLAction *sb_actionurl_stockbar_search(int searchType , int comfromType){
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBAllSearchController?searchType=%d&allSearchComeFrom=%d", searchType,comfromType];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入热门帖子 **/
NS_INLINE SBURLAction *sb_actionurl_hot_status(){
    NSString *actionURL = @"stockbar://SBHotStatusController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入热门个股吧 **/
NS_INLINE SBURLAction *sb_actionurl_hot_bars(){
    NSString *actionURL = @"stockbar://SBHotBarsController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入热门主题吧 **/
NS_INLINE SBURLAction *sb_actionurl_hot_themes(){
    NSString *actionURL = @"stockbar://SBHotThemesController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入修改账户 **/
NS_INLINE SBURLAction *sb_actionurl_modify_account(){
    NSString *actionURL = @"stockbar://SBModifyAccountController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入我的消息**/
NS_INLINE SBURLAction *sb_actionurl_mymessage(){
    NSString *actionURL = @"stockbar://SBMessageController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入我的主帖**/
NS_INLINE SBURLAction *sb_actionurl_mypost(){
    NSString *actionURL = @"stockbar://SBMyPostStatusController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入我的回复**/
NS_INLINE SBURLAction *sb_actionurl_myreply(){
    NSString *actionURL = @"stockbar://SBMyReplyStatusController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入我的收藏**/
NS_INLINE SBURLAction *sb_actionurl_myfavorite(){
    NSString *actionURL = @"stockbar://SBMyFavoriteStatusController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入我的赞**/
NS_INLINE SBURLAction *sb_actionurl_myassist(){
    NSString *actionURL = @"stockbar://SBMyAssistController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入我的草稿箱**/
NS_INLINE SBURLAction *sb_actionurl_mydraft(){
    NSString *actionURL = @"stockbar://SBMyDraftBoxController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}


/** 进入系统设置**/
NS_INLINE SBURLAction *sb_actionurl_system_setting(){
    NSString *actionURL = @"stockbar://SBSystemSettingController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入系统设置->资讯设置**/
NS_INLINE SBURLAction *sb_actionurl_system_sn_setting(){
    NSString *actionURL = @"stockbar://SNSettingController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入暗门**/
NS_INLINE SBURLAction *sb_actionurl_codeworker(){
    NSString *actionURL = @"stockbar://SBCodeWorkerController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入测试暗门**/
NS_INLINE SBURLAction *sb_actionurl_codeworkerForTest(){
    NSString *actionURL = @"stockbar://EMTrialFeedBackController";
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}


/** 进入投资组合-》我的组合 url */
NS_INLINE SBURLAction *sb_actionurl_myportfolio() {
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBMyPortfolioListViewController"];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 进入投资组合-》他人组合 url */
NS_INLINE SBURLAction *sb_actionurl_otherportfolio_list(NSString *userID) {
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBOtherPortfolioListViewController?userId=%@",userID];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 模拟推送 的url跳转 **/
NS_INLINE SBURLAction *sb_actionurl_BigNews(){
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SNBigNewsController"];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 对我发言的评论 **/
NS_INLINE SBURLAction *sb_reply_me_controller(){
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBReplyMeController"];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** @我的 */
NS_INLINE SBURLAction *sb_at_me_controller(){
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBATMeController"];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 赞我的发言 */
NS_INLINE SBURLAction *sb_assist_me_controller(){
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBAssistMeController"];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

/** 我的信息 */
NS_INLINE SBURLAction *sb_my_message_controller(){
    NSString *actionURL = [NSString stringWithFormat:@"stockbar://SBMyMessageController"];
    SBURLAction *action = [SBURLAction actionWithURLString:actionURL];
    return action;
}

#endif