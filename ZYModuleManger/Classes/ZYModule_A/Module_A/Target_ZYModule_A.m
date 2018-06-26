//
//  Target_ZYModule_A.m
//  ZYModuleManger_Example
//
//  Created by Zzy on 2018/6/21.
//  Copyright © 2018年 ZhaoZhenyuCC. All rights reserved.
//

#import "Target_ZYModule_A.h"
#import "ZYModuleController_A.h"

@implementation Target_ZYModule_A

- (UIViewController *)Action_ModuleViewController:(NSDictionary *)params{
//    NSBundle *resourceBundle = [NSBundle bundleWithPath:[[NSBundle bundleForClass:[ZYModuleController_A class]] pathForResource:@"ZYModuleManger" ofType:@"bundle"]];
    
    
//    ZYModuleController_A *module_AVC = [[ZYModuleController_A alloc] initWithNibName:@"ZYModuleController_A" bundle:resourceBundle];
    
//    NSBundle *resourceBundle = [NSBundle bundleForClass:[self class]];
//     [[resourceBundle loadNibNamed:@"ZYModuleController_A" owner:self options:nil] lastObject];

    ZYModuleController_A *module_AVC = [[ZYModuleController_A alloc] initWithNibName:@"ZYModuleController_A" bundle:[NSBundle bundleForClass:[self class]]];

    return module_AVC;
}



@end
