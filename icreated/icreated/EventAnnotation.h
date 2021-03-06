//
//  EventAnnotation.h
//  icreated
//
//  Created by Artem Lobanov on 21/10/14.
//  Copyright (c) 2014 pispbsu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface EventAnnotation : NSObject <MKAnnotation>

@property (nonatomic, copy) NSNumber *eventId;
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDate *date;


@end
