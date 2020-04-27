//
//  FMMacroColorFont.h
//  FMMacroKitExample
//
//  Created by mingo on 2019/4/13.
//  Copyright © 2019年 mingo. All rights reserved.
//
//  作者博客：https://www.yfmingo.cn

#ifndef FMMacroColorFont_h
#define FMMacroColorFont_h
#import "FMMacroKitTools.h"

// 颜色
#pragma mark - 颜色
//
// rgba颜色
#define kRGBColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define kRGBAColor(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]
#define rgba(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]
// 随机色
#define kRandomColor  [UIColor colorWithRed:(arc4random_uniform(256))/255.0 green:arc4random_uniform(256)/255.0 blue:(arc4random_uniform(256))/255.0 alpha:1.0]
/// 16进制 颜色 转换 传入 #5D9EE1，5D9EE1，0x5D9EE1 等等
#define kHexColor(_hex_)   [FMMacroKitTools fm_colorWithHexString:((__bridge NSString *)CFSTR(#_hex_))] //只 需要传入 _hex_
#define kHexColorFormat(_hex_)   [FMMacroKitTools fm_colorWithHexString:_hex_] //需要传入@"_hex_"


//kColor
#pragma mark - 固定颜色
//
#define kGreyColor   [UIColor colorWithRed:0.717647 green:0.717647 blue:0.717647 alpha:1.0]
#define kGreyColor1  [UIColor colorWithRed:0.662745 green:0.650980 blue:0.650980 alpha:1.0]
#define kGreyColor2  [UIColor colorWithRed:0.423529 green:0.423529 blue:0.423529 alpha:1.0]
#define kGreyColor3  [UIColor colorWithRed:0.929412 green:0.929412 blue:0.929412 alpha:1.0]
#define kGreyColor4  [UIColor colorWithRed:0.878431 green:0.878431 blue:0.878431 alpha:1.0]
#define kGreyColor5  [UIColor colorWithRed:0.509804 green:0.509804 blue:0.509804 alpha:1.0]
#define kGreyColorN  [UIColor colorWithRed:0.93 green:0.93 blue:0.93 alpha:1.00]

#define kWhiteColor  [UIColor whiteColor]
#define kBlackColor  [UIColor blackColor]
#define kRedColor    [UIColor colorWithRed:0.878431 green:0.003922 blue:0.003922 alpha:1.0]
#define kOrangeColor [UIColor colorWithRed:0.949020 green:0.447059 blue:0.109804 alpha:1.0]
#define kBorderColor [UIColor colorWithRed:0.815686 green:0.815686 blue:0.815686 alpha:1.0]
#define KGreenColor  [UIColor colorWithRed:0.364706 green:0.635294 blue:0.215686 alpha:1.0]


//kFont
#pragma mark - 固定字体
//
#define kFont22         [UIFont systemFontOfSize:22.f]
#define kFont20         [UIFont systemFontOfSize:20.f]
#define kFont18         [UIFont systemFontOfSize:18.f]
#define kFont17         [UIFont systemFontOfSize:17.f]
#define kFont16         [UIFont systemFontOfSize:16.f]
#define kFont15         [UIFont systemFontOfSize:15.f]
#define kFont14         [UIFont systemFontOfSize:14.f]
#define kFont13         [UIFont systemFontOfSize:13.f]
#define kFont12         [UIFont systemFontOfSize:12.f]
#define kFontBold(kNum)  [UIFont boldSystemFontOfSize:kNum]
#define kFont(kNum)  	[UIFont systemFontOfSize:kNum]
#define kFontFromPx(pixel) ([UIFont systemFontOfSize:pixel*3/4]) /// UI效果图中的字体大小，px单位字体换成UIFont
#endif /* FMMacroColorFont_h */
