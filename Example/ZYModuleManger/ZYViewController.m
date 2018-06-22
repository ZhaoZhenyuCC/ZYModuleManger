//
//  ZYViewController.m
//  ZYModuleManger
//
//  Created by ZhaoZhenyuCC on 06/19/2018.
//  Copyright (c) 2018 ZhaoZhenyuCC. All rights reserved.
//

#import "ZYViewController.h"
#import "TWMacros.h"
#import "CTMediator+ZYModule_A.h"

@interface ZYViewController ()

@end

@implementation ZYViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.view.backgroundColor = kSubjectColor;
	// Do any additional setup after loading the view, typically from a nib.
}
- (IBAction)btnAction:(id)sender {
    UIViewController *vc = [[CTMediator sharedInstance] confirmModule_AViewControllerWithParams:@{} ConfirmComplete:^{
        
    }];
    [self.navigationController pushViewController:vc animated:YES];
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
