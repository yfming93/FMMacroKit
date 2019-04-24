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
#define kiOS9Later (kSystemVersion >= 9)
#define kiOS10Later (kSystemVersion >= 10)
#define kiOS11Later (kSystemVersion >= 11)
#define kiOS12Later (kSystemVersion >= 12)


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


// 状态栏 导航栏 tabbar高度
#pragma mark -  状态栏 导航栏 tabbar高度
//
#define kStatusBarHeight ((kIsPhone_x_xs == YES || kIsiPhone_xr == YES ||  kIsiPhone_xsmax == YES) ? 44.0 : 20.0)
#define kNavBarH ((kIsPhone_x_xs==YES || kIsiPhone_xr ==YES ||  kIsiPhone_xsmax == YES) ? 88.0 : 64.0)
#define kTabbarH ((kIsPhone_x_xs==YES || kIsiPhone_xr ==YES ||  kIsiPhone_xsmax == YES) ? 83.0 : 49.0)

//获取当前版本号
#define kBundleVersion [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleVersion"]
//获取当前版本的biuld
#define kBiuldVersion [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"]

#endif /* FMMacroDevice_h */
