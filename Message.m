//
//  Message.m
//  仿QQ聊天
//
//  Created by mac on 14-2-13.
//  Copyright (c) 2014年 mac. All rights reserved.
//

#import "Message.h"

@implementation Message
- (void)setDict:(NSDictionary *)dict{
    
    _dict = dict;
    self.icon = dict[@"icon"];
    self.time = dict[@"time"];
    self.content = dict[@"content"];
    self.type = [dict[@"type"] intValue];
}

@end
