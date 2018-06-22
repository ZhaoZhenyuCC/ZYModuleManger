//
//  CTMediator+ZYModule_A.m
//  ZYModuleManger_Example
//
//  Created by Zzy on 2018/6/21.
//  Copyright © 2018年 ZhaoZhenyuCC. All rights reserved.
//

#import "CTMediator+ZYModule_A.h"

@implementation CTMediator(ZYModule_A)

- (UIViewController *)confirmModule_AViewControllerWithParams:(NSDictionary *)params ConfirmComplete:(dispatch_block_t)confirmComplete
{
//    NSMutableDictionary *params = [[NSMutableDictionary alloc] init];
//    params[@"goodsId"] = goodsId;
//    params[@"goodsName"] = goodsName;
//    params[@"completeBlock"] = confirmComplete;
    return [self performTarget:@"ZYModule_A" action:@"ModuleViewController" params:params shouldCacheTarget:NO];
}

@end
