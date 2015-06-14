//
//  EditTaskViewController.h
//  Overdue
//
//  Created by Srikanth on 6/12/15.
//  Copyright (c) 2015 ViswanthWorks. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EditTaskViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UITextView *textView;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;
- (IBAction)saveBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
