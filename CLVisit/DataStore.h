//
//  DataStore.h
//  CLVisit
//
//  Created by Linda NG on 10/27/15.
//  Copyright © 2015 Linda NG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Visit.h"
#import "LocationManager.h"
#import <CoreLocation/CoreLocation.h>

@interface DataStore : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong) NSArray *locations;


+ (instancetype) sharedDataStore;
- (void) saveContext;
- (void) fetchData;
- (void) generateTestData;

@end
