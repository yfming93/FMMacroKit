//
//  FMMacroKitTools.h
//  AFNetworking
//
//  Created by mingo on 2019/6/20.
//

#import <Foundation/Foundation.h>


@interface FMMacroKitTools : NSObject
/// 判断刘海屏，返回YES表示是刘海屏
+ (BOOL)fm_isNotchScreen;
/// 16进制颜色转换
+ (UIColor *)fm_colorWithHexString:(NSString *)hexStr;
/// 是否包含中文
+ (BOOL)fm_isContainChinese:(NSString *)str;
@end

