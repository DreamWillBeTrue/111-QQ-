//
//  MessageFrame.h
//  仿QQ聊天
//
//  Created by mac on 14-2-13.
//  Copyright (c) 2014年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Message.h"
#define kMargin 10 
#define kIconWH 40
#define kContentW 180

#define kTimeMarginW 15
#define kTimeMarginH 10

#define kContentTop 10
#define kContentLeft 25
#define kContentBottom 15
#define kContentRight 15

#define kTimeFont [UIFont systemFontOfSize:12]
#define kContentFont [UIFont systemFontOfSize:16]
@interface MessageFrame : NSObject
@property (nonatomic, assign, readonly) CGRect iconF;
@property (nonatomic, assign, readonly) CGRect timeF;
@property (nonatomic, assign, readonly) CGRect contentF;

@property (nonatomic, assign, readonly) CGFloat cellHeight;

@property (nonatomic, strong) Message *message;

@property (nonatomic, assign) BOOL showTime;

@end
