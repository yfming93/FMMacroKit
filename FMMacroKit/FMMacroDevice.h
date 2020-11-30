//
//  FMMacroDevice.h
//  FMMacroKitExample
//
//  Created by mingo on 2019/4/13.
//  Copyright © 2019年 mingo. All rights reserved.
//
//  作者博客：https://www.yfmingo.cn

#ifndef FMMacroDevice_h
#define FMMacroDevice_h
#import "FMMacroKitTools.h"

// 一些重要缩写
#pragma mark - 一些重要缩写
//
#define kApplication        [UIApplication sharedApplication]
#define kWindow             [UIApplication sharedApplication].keyWindow
#define kAppDelegate        [UIApplication sharedApplication].delegate
#define kUserDefaults       [NSUserDefaults standardUserDefaults]
#define kNotificationCenter [NSNotificationCenter defaultCenter]
#define kScreenW            [UIScreen mainScreen].bounds.size.width       //屏幕宽度
#define kScreenH            [UIScreen mainScreen].bounds.size.height      //屏幕高度

// 判断系统版本
#pragma mark - 判断系统版本
//
#define kSystemVersion [[UIDevice currentDevice].systemVersion doubleValue]
#define kiOS10Later (kSystemVersion >= 10)
#define kiOS11Later (kSystemVersion >= 11)
#define kiOS12Later (kSystemVersion >= 12)
#define kiOS13Later (kSystemVersion >= 13)
#define kiOS14Later (kSystemVersion >= 14)


// iPhone 手机型号
#pragma mark - iPhone 手机型号
//
// 判断是否是 ipad
#define kIsPad ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
// 判断 iPhone6系列 kIsiPhone_6_6s_7_8
#define kIsiPhone_6_6s_7_8 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)
// 判断iphone6+系列 kiIsPhone_6p_6sp_7p_8p
#define kIsiPhone_6p_6sp_7p_8p ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)
// 判断iPhoneX Xs
#define kIsPhone_x_xs ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
// 判断iPHoneXr
#define kIsiPhone_xr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1624), [[UIScreen mainScreen] currentMode].size) : NO)
// 判断iPhone XsMax
#define kIsiPhone_xsmax ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) : NO)
/// 是否是iPhonex系列手机
#define kIsiPhoneXLotsof (([FMMacroKitTools fm_isNotchScreen]) ? YES : NO)

// 状态栏 导航栏 tabbar高度
#pragma mark -  状态栏 导航栏 tabbar高度
/*状态栏高度*/
#define kStatusBarHeight (([FMMacroKitTools fm_isNotchScreen]) ? 44.0 : 20.0)
/*状态栏和导航栏总高度*/
#define kNavBarAllH ((([FMMacroKitTools fm_isNotchScreen]) ? 88.0 : 64.0) + kStatusBarHeight)
/*导航栏总高度*/
#define kNavBarH (([FMMacroKitTools fm_isNotchScreen]) ? 88.0 : 64.0)
/*TabBar高度*/
#define kTabbarH (([FMMacroKitTools fm_isNotchScreen]) ? 83.0 : 49.0)
/*顶部安全区域远离高度*/
#define kSafeHeightTopBar (CGFloat)(([FMMacroKitTools fm_isNotchScreen])?(44.0):(0))
/*底部安全区域远离高度*/
#define kSafeHeightBottom (CGFloat)(([FMMacroKitTools fm_isNotchScreen])?(34.0):(0))
#define kAppVersionCode ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"])

#endif /* FMMacroDevice_h */
