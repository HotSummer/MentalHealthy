/*
 #####################################################################
 # File    : NSObject_SBEventNode.h
 # Project : StockBar
 # Created : 14-7-31
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

#import <Foundation/Foundation.h>

#pragma mark - 股吧
extern NSString * const 	SBCftEvtPageGuba;//我的股吧
extern NSString * const 	SBCftEvtPageGerenye;//股吧界面
extern NSString * const 	SBCftEvtGubaNavXiaoxi;    //消息提醒
extern NSString * const 	SBCftEvtGubaNavDongtai;            //动态
extern NSString * const 	SBCftEvtGubaNavFind ;     //发现
extern NSString * const 	SBCftEvtGubaNavSearch;            //搜索
extern NSString * const 	SBCftEvtGubaNavFatie;            //发帖
extern NSString * const 	SBCftEvtGubaGuanzhugu;            //关注的股
extern NSString * const 	SBCftEvtGubaGuanzhuren;            //关注的人
extern NSString * const 	SBCftEvtGubaGuanzhurenZhutie;       //关注人主帖
extern NSString * const 	SBCftEvtGubaGuanzhurenPinglun;      //关注人评论
extern NSString * const 	SBCftEvtGubaBanner;     //关注人广告位
extern NSString * const 	SBCftEvtGubaHuanyihuan;     //感兴趣人换一换
extern NSString * const 	SBCftEvtGubaInterestTouxiang1;     //头像1
extern NSString * const 	SBCftEvtGubaInterestGuanzhu1;     //关注1
extern NSString * const 	SBCftEvtGubaInterestTouxiang2;     //头像2
extern NSString * const 	SBCftEvtGubaInterestGuanzhu2;     //关注2
extern NSString * const 	SBCftEvtGubaInterestTouxiang3;     //头像3
extern NSString * const 	SBCftEvtGubaInterestGuanzhu3;     //关注3


extern NSString * const     SBCftEvtGubaZan       ;//我的赞
extern NSString * const     SBCftEvtGubaZhutie    ;//我的主贴
extern NSString * const     SBCftEvtGubaPingLun   ;//我的评论
extern NSString * const     SBCftEvtGubaShouCang  ;//我的收藏
extern NSString * const     SBCftEvtGubaCaogao    ;//我的草稿

extern NSString * const 	SBCftEvtGubaGuyou;            //股友
extern NSString * const 	SBCftEvtTabGuba;            //股吧
extern NSString * const 	SBCftEvtTabZixuan;            //自选
extern NSString * const 	SBCftEvtTabHangqing;            //行情
extern NSString * const 	SBCftEvtTabZixun;            //资讯
extern NSString * const 	SBCftEvtTabMe;            //我
extern NSString * const 	SBCftEvtGBPullrefresh;            //第一页下拉刷新
extern NSString * const 	SBCftEvtSearchGegu;            //个股
extern NSString * const 	SBCftEvtSearchNeirong;            //内容
extern NSString * const 	SBCftEvtSearchZuozhe;            //作者
extern NSString * const 	SBCftEvtFindGuanggao;            //广告
extern NSString * const 	SBCftEvtFindPageRemen;//热门页
extern NSString * const 	SBCftEvtFindHottie;            //热门帖子
extern NSString * const 	SBCftEvtFindHotbar     ;            //热门股吧
extern NSString * const 	SBCftEvtFindHotzhuti    ;            //热门主题
extern NSString * const 	SBCftEvtFindActive  ;            //活跃用户
extern NSString * const 	SBCftEvtFindFamous   ;            //知名用户


extern NSString * const 	SBCftEvtListHotTie  ;//热帖列表
extern NSString * const 	SBCftEvtListHotBar  ;//热门吧列表
extern NSString * const 	SBCftEvtListZhuTi   ;//主题
extern NSString * const 	SBCftEvtListACtive  ;//活跃
extern NSString * const 	SBCftEvtListFamous  ;//知名

extern NSString * const 	SBCftEvtFindSectionHottie    ;            //更多热门帖子
extern NSString * const 	SBCftEvtFindSectionHotbar     ;            //更多热门股吧
extern NSString * const 	SBCftEvtFindSectionHotzhuti    ;            //更多热门主题
extern NSString * const 	SBCftEvtFindSectionActive  ;            //换一换活跃用户
extern NSString * const 	SBCftEvtFindSectionFamous   ;            //换一换知名用户


#pragma mark - 股友
extern NSString * const 	SBCftEvtGuyouSina   ;            //新浪微博
extern NSString * const 	SBCftEvtGuyouQQ   ;            //QQ
extern NSString * const 	SBCftEvtGuyouList   ;            //通讯录
extern NSString * const 	SBCftEvtGuyouWeixin   ;            //微信
extern NSString * const 	SBCftEvtGuyouInterest   ;            //感兴趣
extern NSString * const 	SBCftEvtGuyouHuxiang   ;            //互相关注
extern NSString * const 	SBCftEvtGuyouSearchHuxiang   ;            //搜索互相关注
extern NSString * const 	SBCftEvtGuyouGuanzhu   ;            //关注
extern NSString * const 	SBCftEvtGuyouFans   ;            //粉丝
#pragma mark - 个股
extern NSString * const 	SBCftEvtGbggGuanzhu   ;            //添加关注和取消关注的总次数
extern NSString * const 	SBCftEvtGbggRefresh   ;            //刷新
extern NSString * const 	SBCftEvtGbggHangqing   ;            //查看走势
extern NSString * const 	SBCftEvtGbggFatie   ;            //发帖
extern NSString * const 	SBCftEvtGbggZhang   ;            //看涨
extern NSString * const 	SBCftEvtGbggDie   ;            //看跌
extern NSString * const 	SBCftEvtGbggAll   ;            //全部
extern NSString * const 	SBCftEvtGbggGudonghui   ;            //股东会
extern NSString * const 	SBCftEvtGbggNews   ;            //新闻
extern NSString * const 	SBCftEvtGbggYanbao   ;            //研报
extern NSString * const 	SBCftEvtGbggGonggao   ;            //公告
extern NSString * const 	SBCftEvtGbggPullrefresh   ;            //第一页下拉刷新

#pragma mark - 主题吧
extern NSString * const 	SBCftEvtGbztGuanzhu   ;            //添加关注和取消关注的总次数
extern NSString * const 	SBCftEvtGbztRefresh   ;            //刷新
extern NSString * const 	SBCftEvtGbztFatie   ;            //发帖
extern NSString * const 	SBCftEvtGbztPullrefresh   ;            //第一页下拉刷新

#pragma mark - 个人
extern NSString * const 	SBCftEvtGbgrGuanzhu   ;            //添加关注和取消关注的总次数
extern NSString * const 	SBCftEvtGbgrRefresh   ;            //刷新
extern NSString * const 	SBCftEvtGbgrJianjie   ;            //查看简介
extern NSString * const 	SBCftEvtGbgrZixuangu   ;            //自选股
extern NSString * const 	SBCftEvtGbgrGuanzhuren   ;            //关注的人
extern NSString * const 	SBCftEvtGbgrTzzh ;  //他人投资组合
extern NSString * const 	SBCftEvtGbgrFans   ;            //粉丝
extern NSString * const 	SBCftEvtGbgrPullrefresh   ;            //第一页下拉刷新
extern NSString * const 	SBCftEvtGbgrMore          ;//更多
extern NSString * const     SBCftEvtGRZan        ;//ta的赞
extern NSString * const     SBCftEvtGRZhutie     ;//ta的主贴
extern NSString * const     SBCftEvtGRPingLun    ;//ta的评论

#pragma mark - 帖子
extern NSString * const 	SBCftEvtGubaZhengwenRefresh   ;            //刷新
extern NSString * const 	SBCftEvtGubaZhengwenMore   ;            //更多
extern NSString * const 	SBCftEvtZhengwenMoreCollect   ;            //收藏
extern NSString * const 	SBCftEvtZhengwenMoreFanye   ;            //翻页
extern NSString * const 	SBCftEvtZhengwenMoreLouzhu   ;            //只看楼主
extern NSString * const 	SBCftEvtGubaZhengwenPinglun   ;            //评论
extern NSString * const 	SBCftEvtGubaZhengwenZhuanfa   ;            //转发
extern NSString * const 	SBCftEvtGubaZhengwenNewly   ;            //最近/最早评论
extern NSString * const 	SBCftEvtGubaZhwTabFenxiang   ;            //分享
extern NSString * const 	SBCftEvtGubaZhwTabZhuanfa   ;            //转发
extern NSString * const 	SBCftEvtGubaZhwTabPinlun   ;            //评论
extern NSString * const 	SBCftEvtGubaZhwTabZan       ;            //赞
extern NSString * const 	SBCftEvtGbShareZhwSina      ;            //到新浪
extern NSString * const 	SBCftEvtGbShareZhwTx        ;            //到腾讯
extern NSString * const 	SBCftEvtGbShareZhwWeixin    ;            //微信好友
extern NSString * const 	SBCftEvtGbShareZhwPengyouquan    ;            //微信朋友圈
extern NSString * const 	SBCftEvtGbShareZhwQQ    ;            //QQ
extern NSString * const 	SBCftEvtGbShareZhwQzone    ;            //QQ空间
extern NSString * const 	SBCftEvtGbShareZhwMail    ;            //邮件
extern NSString * const 	SBCftEvtGbShareZhwMessage   ;            //短信

#pragma mark - 消息
extern NSString * const 	SBCftEvtGubaXXAt   ;            //@我的
extern NSString * const 	SBCftEvtGubaXXPinglun   ;            //评论
extern NSString * const 	SBCftEvtGubaXXZan   ;            //赞
extern NSString * const 	SBCftEvtGubaXXZixuan   ;            //自选消息
extern NSString * const 	SBCftEvtGubaXXZhongda   ;            //重大消息
extern NSString * const 	SBCftEvtXiaoxiPullrefresh   ;            //下拉刷新
extern NSString * const 	SBCftEvtXXAtTiezi   ;            //帖子
extern NSString * const 	SBCftEvtXXAtPinglun   ;            //评论
extern NSString * const 	SBCftEvtXXZanTiezi   ;            //帖子
extern NSString * const 	SBCftEvtXXZanPinglun   ;            //评论

#pragma mark - 我
extern NSString * const 	SBCftEvtMeSet   ;            //设置
extern NSString * const 	SBCftEvtMeLogin   ;            //登录
extern NSString * const 	SBCftEvtMeZhuye   ;            //个人主页
extern NSString * const 	SBCftEvtMeManage   ;            //账号管理
extern NSString * const 	SBCftEvtMeZhutie   ;            //我的主帖
extern NSString * const 	SBCftEvtMePinglun   ;            //发出评论
extern NSString * const 	SBCftEvtMeCollect   ;            //收藏
extern NSString * const 	SBCftEvtMeZan   ;            //赞
extern NSString * const 	SBCftEvtMeDraft   ;            //草稿
extern NSString * const 	SBCftEvtMeZanTiezi   ;            //帖子
extern NSString * const 	SBCftEvtMeZanPinglun   ;            //评论
extern NSString * const 	SBCftEvtMeManageTouxiang   ;            //头像
extern NSString * const 	SBCftEvtMeManageNickname   ;            //昵称
extern NSString * const 	SBCftEvtMeManageAddress   ;            //居住地
extern NSString * const 	SBCftEvtMeManageSex   ;            //性别
extern NSString * const 	SBCftEvtMeManageJianjie   ;            //个人简介
extern NSString * const 	SBCftEvtMeManagePassword   ;            //修改密码
extern NSString * const 	SBCftEvtMeManageLogout   ;            //退出登录
extern NSString * const 	SBCftEvtMeSetZixun   ;            //资讯设置
extern NSString * const 	SBCftEvtMeSetClean   ;            //清除缓存
extern NSString * const 	SBCftEvtMeSetPingfen   ;            //评分
extern NSString * const 	SBCftEvtMeSetFankui   ;            //意见反馈
extern NSString * const 	SBCftEvtMeSetUpdate   ;            //检查更新
extern NSString * const 	SBCftEvtMeSetApp   ;            //应用推荐
extern NSString * const 	SBCftEvtMeSetAbout   ;            //关于帮助
extern NSString * const 	SBCftEvtMeSetZixunPicture   ;            //下载图片
extern NSString * const 	SBCftEvtMeSetZixunZiti   ;            //字体
extern NSString * const 	SBCftEvtMeSetFankuiTijiao   ;            //提交
extern NSString * const 	SBCftEvtMeSetFankuiUpload   ;            //上传图片
extern NSString * const 	SBCftEvtMeSetAboutMistake   ;            //错误日志
extern NSString * const 	SBCftEvtMeSetAboutTele   ;            //客服电话
extern NSString * const 	SBCftEvtMeSetAboutXieyi  ;            //查看协议
extern NSString * const 	SBCftEvtMeSetZhuyeInformation   ;            //账户信息
extern NSString * const 	SBCftEvtMeSetZhuyeZixuan  ;            //账户自选股
extern NSString * const 	SBCftEvtMeSetZhuyeGuanzhuren  ;            //账户关注的人
extern NSString * const 	SBCftEvtMeSetZhuyeFans ;            //账户粉丝


//发帖
extern NSString * const     SBCftEvtGubaFatie      ;//发帖界面
extern NSString * const 	SBCftEvtGubaFatiePic   ;            //图片
extern NSString * const 	SBCftEvtGubaFatiePhoto ;        //拍照
extern NSString * const 	SBCftEvtGubaFatieGu   ;            //股票
extern NSString * const 	SBCftEvtGubaFatieAt   ;            //@
extern NSString * const 	SBCftEvtGubaFatieExpress   ;            //表情
extern NSString * const 	SBCftEvtGubaFatieRelease   ;            //发布
extern NSString * const 	SBCftEvtGubaZhuanfaTongshi   ;            //同时评论
extern NSString * const 	SBCftEvtGubaZhuanfaRelease   ;            //发布
extern NSString * const 	SBCftEvtGubaPinglunTongshi   ;            //同时评论
extern NSString * const 	SBCftEvtGubaPinglunRelease   ;            //发布


//单元格
extern NSString * const 	SBCftEvtGubaCellTouxiang   ;            //头像
extern NSString * const 	SBCftEvtGubaCellGb   ;            //股吧
extern NSString * const 	SBCftEvtGubaCellPic   ;            //图片
extern NSString * const 	SBCftEvtGubaCellShare   ;            //分享
extern NSString * const 	SBCftEvtGubaCellZhuanfa   ;            //转发
extern NSString * const     SBCftEvtGuBaZhuanFaGu;                 //转发 股票
extern NSString * const     SBCftEvtGuBaZhuanFaAt;                  //转发 at
extern NSString * const     SBCftEvtGuBaZhuanFaExpress;             //转发 表情
extern NSString * const 	SBCftEvtGubaCellPinglun   ;            //评论
extern NSString * const 	SBCftEvtGubaCellZan   ;            //赞帖子
extern NSString * const 	SBCftEvtGubaCellZanPinglun   ;            //赞评论
extern NSString * const 	SBCftEvtGubaCellLink   ;            //赞评论
extern NSString * const 	SBCftEvtGubaCellCollect  ;            //收藏
extern NSString * const 	SBCftEvtGubaCellPinglunPinglun ;            //评论评论
extern NSString * const 	SBCftEvtGubaCellSource;            //原帖
extern NSString * const 	SBCftEvtGubaCellAllPinglun;     //所有对话


#pragma mark- 评论
extern NSString * const     SBCftEvtPagePlingLun   ;                //评论界面
extern NSString * const     SBCftEvtGuBaPlingLunGu;                 //评论 股票
extern NSString * const     SBCftEvtGuBaPingLunAt;                  // 评论 at
extern NSString * const     SBCftEvtGuBaPingLunExpress;             //  评论 表情


//5.1新增
extern NSString * const     SBCftEvtGuBaGuanZhuGuBa;             //  关注的股 标题栏	您关注的股吧
extern NSString * const     SBCftEvtGuBaMyAdd;              //关注的股 我的自选吧	加自选
extern NSString * const     SBCftEvtGuBaMyZiXuan;          //我的自选吧      自选股
extern NSString * const     SBCftEvtGuBaMyZhuTi;            // 我的自选吧     主题吧
extern NSString * const     SBCftEvtGuBaFindLogin;          //发现界面	登录
extern NSString * const     SBCftEvtDiscoverRegister;        //发现界面   注册    （未提供。待添加）
extern NSString * const     SBCftEvtGuBaCellClick;         // 关注的股  单元格点击
extern NSString * const     SBCftEvtBZhengWenMoreDelete;           //删除 主帖
extern NSString * const     SBCftEvtGuBaZhengWenWangYou;        //正文界面	网友提问
extern NSString * const     SBCftEvtGuBaZhengWenJiaBin;          //正文界面   嘉宾回答
extern NSString * const     SBCftEvtGuBaZhengWenGuba;          //正文界面   来自股吧
extern NSString * const     SBCftEvtGuBaZhengWenZhanKai;            //正文       展开评论
extern NSString * const     SBCftEvtGuBaZhengWenDelete;            //正文        删除评论
extern NSString * const     SBCftEvtMeXiaoXi;         //我界面      我的消息


//5.3 新增
extern NSString * const     SBCftEvtGuBaNavNew;//关注的股 新帖
extern NSString * const     SBCftEvtGuBaNavHot;//关注的股 热帖
extern NSString * const     SBCftEvtGBGRConsequence;//个人中心 影响力
extern NSString * const    SBCftEvtGuBaZhengWenJvBao; //举报本帖
extern NSString * const     SBCftEvtGbShareZhwGeRenZhuYe;//分享到个人主页
extern NSString * const  SBCftEvtGbGeRenHeiMingDan;//加入黑名单
extern NSString * const  SBCftEvtGbGeRenJvBao;//举报

#pragma mark - 投资组合
extern NSString * const    EMCftEvtPortfolioDetailPage; //组合单页
extern NSString * const    EMCftEvtFindPage; //发现高手页面
extern NSString * const    EMCftEvtPortfolioRankPage;//组合排行页面

extern NSString * const    EMCftEvtPortfolioAtteontion ; //关注
extern NSString * const    EMCftEvtPortfolioHistoryBusiness;//查看历史交易
extern NSString * const    EMCftEvtPortfolioAddTendencyLine ;//叠加
extern NSString * const    EMCftEvtPortfolioLookAllHoldStock;//所有持仓
extern NSString * const    EMCftEvtPortfolioRecentComment;//最近评论
extern NSString * const    EMCftEvtPortfolioManagerComment;//管理人评论
extern NSString * const    EMCftEvtPortfolioPraise ;//赞
extern NSString * const    EMCftEvtPortfolioComment;//评论
extern NSString * const    EMCftEvtPortfolioShare;//分享
extern NSString * const    EMCftEvtPortfolioManagerMain;//他人主页
extern NSString * const    EMCftEvtPortfolioCommentAt ;//评论at
extern NSString * const    EMCftEvtPortfolioCommentEmoji;//评论表情
extern NSString * const    EMCftEvtPortfolioCommentAndShare;//评论同是转发
extern NSString * const    EMCftEvtPortfolioCommentRelease ;//评论发表
extern NSString * const    EMCftEvtPortfolioShareSina ;//分享新浪
extern NSString * const    EMCftEvtPortfolioShareWeixin ;//分享微信
extern NSString * const    EMCftEvtPortfolioShareWeixinLine ;//分享朋友圈
extern NSString * const    EMCftEvtPortfolioShareMail;//分享邮件
extern NSString * const    EMCftEvtPortfolioShareMessage ;//分享信息
extern NSString * const    EMCftEvtPortfolioShareMain ;//分享个人主页

//5.4新增
extern NSString * const     SBCftEvtGuBaNavCaoZuo;//我的操作
extern NSString * const     SBCftEvtGuBaNavTouXiang;//首页头像
extern NSString * const     SBCftEvtGuBaNavTouZiZuHe;//投资组合
extern NSString * const     SBCftEvtGuBaBanner;//广告

extern NSString * const    EMCftEvtPortfolioRankListRefresh;//组合排行刷新
extern NSString * const    EMCftEvtPortfolioRankListMostPorfit;//组合排行最赚钱
extern NSString * const    EMCftEvtPortfolioRankListPopular;//组合排行人气排行
extern NSString * const    EMCftEvtPortfolioRankListDay;//组合排行日收益
extern NSString * const    EMCftEvtPortfolioRankListWeek;//组合排行周收益
extern NSString * const    EMCftEvtPortfolioRankListMonth;//组合排行月收益
extern NSString * const    EMCftEvtPortfolioRankListYear;//组合排行年收益

extern NSString * const    EMCftEvtPortfolioRankListSelectMostPorfit;//组合排行最赚钱选中
extern NSString * const    EMCftEvtPortfolioRankListSelectPopular;//组合排行人气选中
extern NSString * const    EMCftEvtPortfolioRankListSelectDay;//组合排行日手艺选中
extern NSString * const    EMCftEvtPortfolioRankListSelectWeek;//组合排行周收益选中
extern NSString * const    EMCftEvtPortfolioRankListSelectMonth;//组合排行月收益选中
extern NSString * const    EMCftEvtPortfolioRankListSelectYear;//组合排行年收益选中

extern NSString * const    EMCftEvtPortfolioRankListConcern;//组合排行列表加关注
extern NSString * const    EMCftEvtPortfolioRankListMore;//组合排行加载个更多
extern NSString * const    EMCftEvtPortfolioTop;//管理我的组合，置顶
extern NSString * const    EMCftEvtPortfolioSave;//管理我的组合，保存

extern NSString * const    EmCftEvtZxzhSelect;//自选组合点击
