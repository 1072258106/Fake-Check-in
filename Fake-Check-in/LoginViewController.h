//
//  LoginViewController.h
//  Fake-Check-in
//
//  Created by shoshino21 on 5/22/15.
//  Copyright (c) 2015 shoshino21. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>

@interface LoginViewController : UIViewController<FBSDKLoginButtonDelegate>

@property(weak, nonatomic) IBOutlet FBSDKLoginButton *loginButton;
@property(weak, nonatomic) IBOutlet UIButton *goMainViewButton;

- (IBAction)backToLoginView:(UIStoryboardSegue *)segue;

@end
