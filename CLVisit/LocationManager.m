//
//  LocationManager.m
//  CLVisit
//
//  Created by Linda NG on 10/27/15.
//  Copyright © 2015 Linda NG. All rights reserved.
//

#import "LocationManager.h"

@implementation LocationManager


- (instancetype)init {
    if (self = [super init]) {
    self.locationManager = [[CLLocationManager alloc] init];
        
    self.locationManager.delegate = self;
    self.locationManager.desiredAccuracy = kCLLocationAccuracyKilometer;
    
    if (CLLocationManager.authorizationStatus == kCLAuthorizationStatusNotDetermined) {
        [self.locationManager requestAlwaysAuthorization];
    }}

        return self;}

- (void)locationManager:(CLLocationManager *)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status {
    switch (status) {
        case kCLAuthorizationStatusAuthorizedAlways:
        case kCLAuthorizationStatusAuthorizedWhenInUse:
            [self.locationManager startMonitoringVisits];
            
            break;
            
        case kCLAuthorizationStatusDenied:
        case kCLAuthorizationStatusRestricted:
            NSLog(@"User has not given access to location data");
            
            break;
            
        case kCLAuthorizationStatusNotDetermined:
            [self.locationManager requestAlwaysAuthorization];
            
            break;
            
        default:
            break;
    }
}

- (void)locationManager:(CLLocationManager *)manager didVisit:(CLVisit *)locationVisited {
    NSManagedObjectContext *objectContext = [DataStore sharedDataStore].managedObjectContext;
    Visit *newVisit = [NSEntityDescription insertNewObjectForEntityForName:@"Visit" inManagedObjectContext:objectContext];
    newVisit.latitude = [NSNumber numberWithDouble:locationVisited.coordinate.latitude];
    newVisit.longitude = [NSNumber numberWithDouble:locationVisited.coordinate.longitude];
    newVisit.horizontalAccuracy = [NSNumber numberWithDouble:locationVisited.horizontalAccuracy];
    newVisit.arrivalDate = locationVisited.arrivalDate;
    newVisit.departureDate = locationVisited.departureDate;
    [[DataStore sharedDataStore] saveContext];
    
    
}
@end
