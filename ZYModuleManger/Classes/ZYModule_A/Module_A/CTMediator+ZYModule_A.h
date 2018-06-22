//
//  CTMediator+ZYModule_A.h
//  ZYModuleManger_Example
//
//  Created by Zzy on 2018/6/21.
//  Copyright © 2018年 ZhaoZhenyuCC. All rights reserved.
//

#import <CTMediator/CTMediator.h>

@interface CTMediator(ZYModule_A)
- (UIViewController *)confirmModule_AViewControllerWithParams:(NSDictionary *)params ConfirmComplete:(dispatch_block_t)confirmComplete;
@end
