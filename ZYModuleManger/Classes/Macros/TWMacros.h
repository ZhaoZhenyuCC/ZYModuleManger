//
//  TWMacros.h
//  BigData
//
//  Created by zsf on 2017/11/3.
//  Copyright © 2017年 zsf. All rights reserved.
//

#ifndef TWMacros_h
#define TWMacros_h


//获取View的属性
#define kGetViewWidth(view)  (view).frame.size.width
#define kGetViewHeight(view) (view).frame.size.height
#define kGetViewX(view)      (view).frame.origin.x
#define kGetViewY(view)      (view).frame.origin.y

// MainScreen Height&Width
#define kScreen_width   [UIScreen mainScreen].bounds.size.width
#define kScreen_height [UIScreen mainScreen].bounds.size.height

#define KX   kScreen_width/375
#define KY   kScreen_height/667
// MainScreen bounds
#define kMainScreen_Bounds [[UIScreen mainScreen] bounds]

//色值
#define kRGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define kRGB(r,g,b) kRGBA(r,g,b,1.0f)

#define kHEXCOLOR(hex) [UIColor colorWithRed:((float)((hex & 0xFF0000) >> 16)) / 255.0 green:((float)((hex & 0xFF00) >> 8)) / 255.0 blue:((float)(hex & 0xFF)) / 255.0 alpha:1]

//特定颜色
#define kSubjectColor kHEXCOLOR(0xdd2c00)
#define kLightSubjectColor kHEXCOLOR(0xfd8a8a)

#define kDarkBlueColor kSubjectColor
#define kLightBlueColor kLightSubjectColor
#define kGrayColor60 kHEXCOLOR(0x3c3c3c)
#define kGrayColor120 kHEXCOLOR(0x787878)



//成功状态
#define kErrorCodeIsSuccess ([response[@"errorCode"] isEqualToString:@"1"])

#define kUserId @"id"
#define kUserInfo @"info"


//字体
#define kFont(x) ([UIFont systemFontOfSize:x])
#define kBoldFont(x) ([UIFont boldSystemFontOfSize:x])


//设置 view 圆角和边框
#define kViewBorderRadius(View, Radius, Width, Color)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[Color CGColor]]

// View 圆角
#define kViewRadius(View, Radius)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES]

//导航栏高度

#define kTopBarHeight (kScreen_height == 812.0 ? 88 : 64)
#define kBottomBarHeight (kScreen_height == 812.0 ? 49+34 : 49)
#define kSpaceToBottom (kScreen_height == 812.0 ? 34 : 0)

//圆角
#define kAllRadius 3

//颜色
#define mainNavColor                [UIColor colorWithRed:47.0/255.0f green:141.0/255.0f blue:227.0/255.0f alpha:1.0f]

#define mainGrayBackColor           [UIColor colorWithRed:239.0/255.0f green:239.0/255.0f blue:239.0/255.0f alpha:1.0f]

//主题蓝色
#define kBlueColor kHEXCOLOR(0x00a3e7)

//黑色相关
#define kBlackTextColor kHEXCOLOR(0x333333)

#define kLightBlackTextColor kHEXCOLOR(0x666666)

#define kGrayTextColor kHEXCOLOR(0x999999)

#define kLightGrayTextColor kHEXCOLOR(0xd7d7d7)

//背景色
#define kBackgroundColor kHEXCOLOR(0xF3F5F7)



//弱引用
#define kWeakSelf(weakSelf)      __weak __typeof(&*self)    weakSelf  = self;
#define kStrongSelf(strongSelf)  __strong __typeof(&*self) strongSelf = weakSelf;

//字符串是否为空
#define kStringIsEmpty(str) ([str isKindOfClass:[NSNull class]] || [str isEqualToString: @"(null)"] || str == nil || [str length] < 1 ? YES : NO )
//数组是否为空
#define kArrayIsEmpty(array) (array == nil || [array isKindOfClass:[NSNull class]] || array.count == 0)
//字典是否为空
#define kDictIsEmpty(dic) (dic == nil || [dic isKindOfClass:[NSNull class]] || dic.allKeys == 0)
//是否是空对象
#define kObjectIsEmpty(_object) (_object == nil \
|| [_object isKindOfClass:[NSNull class]] \
|| ([_object respondsToSelector:@selector(length)] && [(NSData *)_object length] == 0) \
|| ([_object respondsToSelector:@selector(count)] && [(NSArray *)_object count] == 0))

//App版本号
#define kAppVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

// 判断是否为 iPhone 5SE
#define iPhone5SE [[UIScreen mainScreen] bounds].size.width == 320.0f && [[UIScreen mainScreen] bounds].size.height == 568.0f
// 判断是否为iPhone 6/6s
#define iPhone6_6s [[UIScreen mainScreen] bounds].size.width == 375.0f && [[UIScreen mainScreen] bounds].size.height == 667.0f
// 判断是否为iPhone 6Plus/6sPlus
#define iPhone6Plus_6sPlus [[UIScreen mainScreen] bounds].size.width == 414.0f && [[UIScreen mainScreen] bounds].size.height == 736.0f


//获取图片资源
#define kGetImage(imageName) [UIImage imageNamed:[NSString stringWithFormat:@"%@",imageName]]

//获取系统号
#define kSystemVersion  [UIDevice currentDevice].systemVersion.doubleValue

//打印
#ifdef DEBUG
#define kAppLog(format,...)  NSLog((@"[函数名:%s]\n" "[行号:%d]\n" format),__FUNCTION__,__LINE__,##__VA_ARGS__)
#else
#define kAppLog(...)
#endif



#endif /* TWMacros_h */
