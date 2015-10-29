//
//  LocationManager.h
//  CLVisit
//
//  Created by Linda NG on 10/27/15.
//  Copyright © 2015 Linda NG. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import <CoreData/CoreData.h>
#import "DataStore.h"


@interface LocationManager : NSObject <CLLocationManagerDelegate>

@property (nonatomic, strong) CLLocationManager *locationManager;

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;
@end
