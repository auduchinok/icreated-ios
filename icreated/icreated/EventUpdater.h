//
//  EventUpdater.h
//  icreated
//
//  Created by Artem Lobanov on 20/10/14.
//  Copyright (c) 2014 pispbsu. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface EventUpdater : NSObject  <NSURLConnectionDataDelegate>

+ (NSMutableArray *)updatedEventsArray;
+ (void)getEventsWithCompletionHandler:(void (^)(void))handler;

@end