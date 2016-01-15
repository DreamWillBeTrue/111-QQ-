//
//  ViewController.h
//  仿QQ聊天
//
//  Created by mac on 14-2-13.
//  Copyright (c) 2014年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MessageFrame.h"
#import "Message.h"
#import "MessageCell.h"
@interface ViewController : UIViewController<UITextFieldDelegate>{
    IBOutlet UITableView *tableV;
    IBOutlet UITextField *messageField;
    IBOutlet UIButton *speakBtn;
     NSMutableArray  *_allMessagesFrame;
}
- (IBAction)speak:(id)sender;
@end
