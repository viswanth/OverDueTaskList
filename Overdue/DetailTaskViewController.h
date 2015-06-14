//
//  DetailTaskViewController.h
//  Overdue
//
//  Created by Srikanth on 6/12/15.
//  Copyright (c) 2015 ViswanthWorks. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailTaskViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UILabel *dateLabel;
@property (strong, nonatomic) IBOutlet UILabel *detailLabel;
- (IBAction)editBarButtonItemPressed:(UIBarButtonItem *)sender;


@end
