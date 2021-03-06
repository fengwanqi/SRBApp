//
//  ChangeNameViewController.h
//  SRBApp
//
//  Created by 刘若曈 on 14/12/18.
//  Copyright (c) 2014年 BJshurenbang. All rights reserved.
//

#import "ZZViewController.h"

 typedef void(^MyBlock)(id result);
@interface ChangeNameViewController : ZZViewController
{
    MBProgressHUD *HUD;
}
@property (nonatomic, retain)UITextField * textField;
@property (nonatomic, retain)NSString * nickName;
@property (nonatomic, strong) NSString *sex;
@property (nonatomic, strong) NSString *birthday;
@property (nonatomic, strong) NSString *sign;
@property (nonatomic, strong) NSString *signNum;
@property (nonatomic ,copy)MyBlock block;

- (void)sendMessage1:(MyBlock)jgx;
@end
