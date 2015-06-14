//
//  Task.m
//  Overdue
//
//  Created by Srikanth on 6/12/15.
//  Copyright (c) 2015 ViswanthWorks. All rights reserved.
//

#import "Task.h"

@implementation Task

-(id)initWithData:(NSDictionary *)data{
    
    self = [super init];
    if(self){
        self.title = data[TASK_TITLE];
        self.desc = data[TASK_DESCRIPTION];
        self.date = data[TASK_DATE];
        self.isCompleted = [data[TASK_COMPLETION] boolValue];
    }
    
    return self;
    
}

-(id)init{
    self = [self initWithData:nil];
    
    return self;
}


@end
