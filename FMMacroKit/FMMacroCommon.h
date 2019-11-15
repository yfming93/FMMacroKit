//
//  FMMacroCommon.h
//  FMMacroKitExample
//
//  Created by mingo on 2019/4/13.
//  Copyright © 2019年 mingo. All rights reserved.
//
//  作者博客：https://www.yfmingo.cn

#ifndef FMMacroCommon_h
#define FMMacroCommon_h

// property
#pragma mark - property

#define proNSString(str)                @property (nonatomic,copy) NSString *str;
#define proNSArray(arr)                 @property (nonatomic,retain) NSArray *arr;
#define proNSMutableArray(arr)          @property (nonatomic,strong) NSMutableArray *arr;
#define proNSMutableArrayType(type,arr) @property (nonatomic,strong) NSMutableArray <type * >*arr;
#define proNSDictionary(dic)            @property (nonatomic,strong) NSDictionary *dic;
#define proStrongType(type,name)        @property (nonatomic,strong) type *name;
#define proNSInteger(value)             @property(nonatomic, assign) NSInteger value;
#define proAssignType(type,name)        @property(nonatomic, assign) type name;
#define proCGFloat(value)               @property(nonatomic, assign) CGFloat value;
#define proDouble(value)                @property(nonatomic, assign) double value;
#define proBool(value)                  @property(nonatomic, assign) BOOL value;

// 常用
#pragma mark - 常用
//
#define weakSelf(self)  __weak typeof(self)weakSelf = self;                         //弱引用
#define FM_IMAGE(str)   [UIImage imageNamed:(str)]                                  //image
#define FM_STR(id)      [NSString stringWithFormat:@"%@",id]                        //转字符串
#define FM_URL(kstr)    [NSURL URLWithString:[FMMacroKitTools fm_isContainChinese:kstr] ? [kstr stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLQueryAllowedCharacterSet]] : kstr]                                   //url

#define kAllocInitVC(objc)              objc *vc = [[objc alloc] init];
#define kAllocInit(objc,name)           objc *name = [[objc alloc] init];
#define kAllocViewControllerByStr(objc) UIViewController *vc = [[NSClassFromString(objc) alloc] init];
#define kPushToTheViewController(vc)    [self.navigationController pushViewController:vc animated:YES];
#define kNavTitle(text)                 self.navigationItem.title = text;
#define kPopViewControllerWithAnimated  [self.navigationController popViewControllerAnimated:YES];

//fit 屏幕适配
#define KFitPx_6PlusW(WIDTH)     ((WIDTH) / (1920.0/2208.0))/3.0 * (([UIScreen mainScreen].bounds.size.width) / 414.0)
#define KFitPx_6PlusH(HEIGHT)    ((HEIGHT)/ (1920.0/2208.0))/3.0 * (([UIScreen mainScreen].bounds.size.height / 736.0))
#define KFitPx_6W(WIDTH)     ((WIDTH) / 2.0 * (([UIScreen mainScreen].bounds.size.width) / 360.0)) // 这是对720屏幕适配所以360
#define KFitPx_6H(HEIGHT)    ((HEIGHT)/ 2.0 * (([UIScreen mainScreen].bounds.size.height) / 667.0))
#define kFit_6W(x)       ([UIScreen mainScreen].bounds.size.width * ((x)/375.0))
#define kFit_6H(x)       ([UIScreen mainScreen].bounds.size.height * ((x)/667.0))

// Log
#pragma mark - Log
//
#ifdef DEBUG
#define NSLog(format, ...) printf("class: < %s:(Line %d) > method: %s \n%s\n\n", [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, __PRETTY_FUNCTION__, [[NSString stringWithFormat:(format), ##__VA_ARGS__] UTF8String] );
#define KKLog(format, ...) printf("class: < %s:(Line %d) > method: %s \n%s\n\n", [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, __PRETTY_FUNCTION__, [[NSString stringWithFormat:(format), ##__VA_ARGS__] UTF8String] );
#define FMLog(format, ...) printf("class: < %s:(Line %d) > method: %s \n%s\n\n", [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, __PRETTY_FUNCTION__, [[NSString stringWithFormat:(format), ##__VA_ARGS__] UTF8String] );

#else
#define NSLog(...)
#define KKLog(...)
#define FMLog(...)

#endif

// View 圆角和加边框
#pragma mark - 圆角和加边框
//
#define kViewBorderRadius(View, Radius, Width, Color)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[Color CGColor]];

// View 圆角
#define kViewRadius(View, Radius)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];


#define kViewSomeRadius(View, kRadius, isBottomLeft, isBottomRight, isTopLeft, isTopRight) \
\
UIRectCorner corner;\
if (isBottomLeft) corner = UIRectCornerBottomLeft;\
if (isBottomRight) corner = corner | UIRectCornerBottomRight;\
if (isTopLeft) corner = corner | UIRectCornerTopLeft;\
if (isTopRight) corner = corner | UIRectCornerTopRight;\
UIBezierPath *maskPath = [UIBezierPath bezierPathWithRoundedRect:View.bounds   byRoundingCorners:corner  cornerRadii:CGSizeMake(kRadius, kRadius)]; \
CAShapeLayer *maskLayer = [[CAShapeLayer alloc] init]; \
maskLayer.frame = View.bounds; \
maskLayer.path = maskPath.CGPath;\
View.layer.mask = maskLayer; 




#endif /* FMMacroCommon_h */
